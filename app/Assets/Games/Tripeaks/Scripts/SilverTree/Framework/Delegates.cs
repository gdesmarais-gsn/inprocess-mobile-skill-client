
public partial class Delegates
{
    // because System.Action isn't in mscorlib (although System.Action<T> is)
    public delegate void Action();
    // for consistency
    public delegate void Action<T>(T obj);
    public delegate void Action<T,T2>(T obj1, T2 obj2);
    public delegate void Action<T,T2,T3>(T obj1, T2 obj2, T3 obj3);
    public delegate void Action<T,T2,T3,T4>(T obj1, T2 obj2, T3 obj3, T4 obj4);
    public delegate void Action<T,T2,T3,T4,T5>(T obj1, T2 obj2, T3 obj3, T4 obj4, T5 obj5);
    public delegate void Action<T,T2,T3,T4,T5,T6>(T obj1, T2 obj2, T3 obj3, T4 obj4, T5 obj5, T6 obj6);
	// other useful delegates
    public delegate R ActionWithReturn<R>();
    public delegate R ActionWithReturn<R,T>(T obj);
    public delegate R ActionWithReturn<R,T,T2>(T obj1, T2 obj2);
    public delegate R ActionWithReturn<R,T,T2,T3>(T obj1, T2 obj2, T3 obj3);
    public delegate R ActionWithReturn<R,T,T2,T3,T4>(T obj1, T2 obj2, T3 obj3, T4 obj4);
    public delegate R ActionWithReturn<R,T,T2,T3,T4,T5>(T obj1, T2 obj2, T3 obj3, T4 obj4, T5 obj5);
    public delegate R ActionWithReturn<R,T,T2,T3,T4,T5,T6>(T obj1, T2 obj2, T3 obj3, T4 obj4, T5 obj5, T6 obj6);
    public delegate R ActionWithReturn<R,T,T2,T3,T4,T5,T6,T7>(T obj1, T2 obj2, T3 obj3, T4 obj4, T5 obj5, T6 obj6, T7 obj7);
}
