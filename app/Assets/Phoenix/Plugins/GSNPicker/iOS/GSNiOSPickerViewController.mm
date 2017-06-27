//
//  ViewController.m
//  GSNPickerView
//
//  Created by Doug DaSilva on 5/26/17.
//  Copyright © 2017 Doug DaSilva. All rights reserved.
//

#import "UnityAppController.h"

extern "C"
{
    void ShowIOSPicker(const char* callbackObjectName, const char* rowData, int rowIndexToStart);
}

namespace
{
    const int UI_TOOLBAR_HEIGHT         = 44;
}

@interface GSNPickerViewController :  UIViewController
                            <UIPickerViewDelegate, UIPickerViewDataSource, UIGestureRecognizerDelegate>
@property (nonatomic, retain) IBOutlet UIPickerView *picker;
@property (nonatomic, retain) UIToolbar* pickerToolbar;
@property (nonatomic, retain) NSArray* rowStrings;
@property (nonatomic, retain) NSString* callbackObjectName;
@property (nonatomic, retain) UITapGestureRecognizer* tapGesture;
@end

static GSNPickerViewController* pickerView = nil;

void ShowIOSPicker(const char* callbackObjectName, const char* rowData, int rowIndexToStart)
{
    /*
    [[GsnNativeUtilitiesPlugin getGsnNativeUtilitiesPlugin] showAlertWithTitle:title message:message cancelButtonTitle:cancelButtonTitle otherButtonTitles:otherButtonTitles tag:tag callbackObject:callbackObjectName];
     */
    
    if(pickerView == nil)
    {
        pickerView = [[GSNPickerViewController alloc] init];
    }
    
    bool pickerExists = (pickerView.picker != nil);
    //printf("GSNPickerViewController ShowIOSPicker...pickerView = %d\n", pickerExists);
    if(pickerExists)
    {
        //printf("<<< <<< Picker already exists. Exiting!\n");
        return;
    }
    else
    {
        //printf("GSNPickerViewController ShowIOSPicker called!\n");
        NSString* wrappedRowData = [NSString stringWithUTF8String:rowData];
        pickerView.rowStrings = [wrappedRowData componentsSeparatedByString: @"\n"];
        pickerView.callbackObjectName = [[NSString alloc] initWithUTF8String:callbackObjectName];
    
        // Configure and show the picker.
        UIViewController* rootViewController = GetAppController().rootViewController;
        UIView* parentView = rootViewController.view;
    
        //printf("GSNPickerViewController ShowIOSPicker <JUST CREATED A PICKER!>\n");

        CGRect pickerFrame = parentView.frame;
        pickerFrame.size.height = ceil(pickerFrame.size.height / 4.0f);

        CGRect screenRect = [[UIScreen mainScreen] bounds];
        pickerFrame.origin.y = screenRect.size.height - pickerFrame.size.height;
    
        pickerView.picker = [[UIPickerView alloc] initWithFrame:pickerFrame];
        pickerView.picker.backgroundColor = [UIColor whiteColor];
        pickerView.picker.delegate = pickerView;
        pickerView.picker.dataSource = pickerView;
        pickerView.picker.userInteractionEnabled = YES;
        [parentView addSubview:pickerView.picker];

        // Configure the tap gesture to close the picker.
        pickerView.tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:pickerView action:@selector(handleSingleTap:)];
        pickerView.tapGesture.delegate = pickerView;
        pickerView.tapGesture.cancelsTouchesInView = YES;
        pickerView.tapGesture.numberOfTouchesRequired = 1;
        pickerView.tapGesture.numberOfTapsRequired = 1;
        //printf("pickerView.tapGesture = %u", pickerView.tapGesture);
        [parentView addGestureRecognizer:pickerView.tapGesture];
    
        // Configure and show the picker toolbar.
        CGRect toolbarFrame;
        toolbarFrame.origin.x = 0;
        toolbarFrame.origin.y = pickerFrame.origin.y - toolbarFrame.size.height;
        toolbarFrame.size.width = screenRect.size.width;
        toolbarFrame.size.height = UI_TOOLBAR_HEIGHT;
    
        pickerView.pickerToolbar = [[UIToolbar alloc] initWithFrame:toolbarFrame];
        pickerView.pickerToolbar.translucent = NO; // Translucent toolbar does not function correctly on iOS 9.
    
        UIBarButtonItem* cancelButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:pickerView action:@selector(closePicker)];
        UIBarButtonItem* doneButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:pickerView action:@selector(pickerDone)];
        pickerView.pickerToolbar.items = [NSArray arrayWithObjects:[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil], doneButton, cancelButton, nil];
        [parentView addSubview:pickerView.pickerToolbar];
        
        [pickerView.picker selectRow:rowIndexToStart inComponent:0 animated:NO];
    }
}

@implementation GSNPickerViewController

- (void)viewDidLoad {
    //self.rowStrings = [[NSArray alloc] initWithObjects:
    //                  @"Jan", @"Feb", @"Mar", @"Apr", @"May", nil];
    
    //_tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleSingleTap)];
    //_tapGesture.numberOfTapsRequired = 1;
    //_tapGesture.cancelsTouchesInView = NO;
    //[self.picker addGestureRecognizer:_tapGesture];
    //_tapGesture.delegate = self;
    printf("GSNPickerViewController viewDidLoad called!\n");
    
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [_picker selectRow:0 inComponent:0 animated:NO];
    _picker.hidden = NO;
}

- (IBAction)pickerDone
{
    //printf("Picker Done! Accept input!\n");
    
    NSInteger selectedRowIndex = [_picker selectedRowInComponent:0];
    NSString* selectedRowData = [_rowStrings objectAtIndex:selectedRowIndex];
    
    //printf(" >>> Send back to Unity: %s\n", [selectedRowData UTF8String]);
    UnitySendMessage([_callbackObjectName UTF8String], "OnNativePickerValue", [selectedRowData UTF8String]);
    
    [self closePicker];
}

- (IBAction)closePicker
{
    //printf("Cancel!\n");
    _picker.hidden = YES;

    UIViewController* rootViewController = GetAppController().rootViewController;
    UIView* parentView = rootViewController.view;
    [parentView removeGestureRecognizer:_tapGesture];

    [_picker removeFromSuperview];
    [_pickerToolbar removeFromSuperview];
    
    _picker = nil;
    _pickerToolbar = nil;
    _tapGesture = nil;
    _rowStrings = nil;
    
    //printf(" >>> Send cancel notification to Unity!\n");
    UnitySendMessage([_callbackObjectName UTF8String], "OnNativePickerCancel", "");
    _callbackObjectName = nil;
}

- (void)handleSingleTap:(UITapGestureRecognizer *)recognizer
{
    //printf(" !> Handling single tap notification! <!\n");
    [self pickerDone];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark -
#pragma mark PickerView DataSource

- (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView
{
    return 1;
}
- (NSInteger)pickerView:(UIPickerView *)pickerView
numberOfRowsInComponent:(NSInteger)component
{
    return [_rowStrings count];
}
- (NSString *)pickerView:(UIPickerView *)pickerView
             titleForRow:(NSInteger)row
            forComponent:(NSInteger)component
{
    return [_rowStrings objectAtIndex:row];
}

@end
