#include "KuruSotryTimelinerCore.h"

#include "KuruStoryClipData_Model.h"

TSharedPtr<FEITimelineEditingModel> FKuruStoryTimelinerCore::CreateModel(UObject* Object,const TSharedRef<FEITimelinerContext>& Context)
{
	TSharedPtr<FEITimelineEditingModel> Model = MakeShareable(new FKuruStoryClipData_Model);
	Model->EditingInstacne = Object;
	Model->Context = Context;
	Model->ReconcileTracks();
	return Model;
}
