#pragma once

class KuruTabUtil
{
public:
	static TSharedPtr<SDockTab> FindDockTabFromWidget(const TSharedRef<SWidget>& Widget)
	{
		TSharedPtr<SWidget> ParentWidget = Widget->GetParentWidget();

		while (ParentWidget.IsValid())
		{
			TSharedPtr<SDockTab> DockTab = StaticCastSharedPtr<SDockTab>(ParentWidget);
			if (DockTab.IsValid())
			{
				return DockTab;
			}

			ParentWidget = ParentWidget->GetParentWidget();
		}

		return nullptr;
	}
};
