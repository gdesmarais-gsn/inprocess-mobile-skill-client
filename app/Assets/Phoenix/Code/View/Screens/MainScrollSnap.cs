using UnityEngine.UI.Extensions;

namespace GSN.Skill.Phoenix.View
{
	public class MainScrollSnap : HorizontalScrollSnap {

		private int _visiblePage = -1;

		//changes the bullets on the bottom of the page - pagination
		protected override void ChangeBulletsInfo(int currentPageIndex)
		{
			base.ChangeBulletsInfo(currentPageIndex);
			OnPageCentered(currentPageIndex);
		}

		void OnPageCentered(int page)
		{
			if (_visiblePage == page)
				return;

			_visiblePage = page;

			int prevPage = (page - 1 < 0) ? _pageTransforms.Count - 1: page - 1;
			int nextPage = (page + 1 > _pageTransforms.Count - 1) ? 0 : page + 1;

			for (int i = 0; i < _pageTransforms.Count; i++)
			{
				ScrollableScreenView screenView = _pageTransforms[i].GetComponent<ScrollableScreenView>();

				if (screenView == null)
					continue;

				if (i == page)
				{
					screenView.OnShow();
					screenView.OnCentered();
				}
				else if (i == prevPage || i == nextPage)
				{
					screenView.OnShow();
				}
				else
				{
					screenView.OnHide();
				}
			}
		}
	}
}