#include "KuruSotryTimelinerCore.h"

#include "KuruStoryClipData_Model.h"

TSharedPtr<FEITimelineEditingModel> FKuruStoryTimelinerCore::CreateModel(UObject* Object)
{
	TSharedPtr<FEITimelineEditingModel> Model = MakeShareable(new FKuruStoryClipData_Model);
	Model->EditingInstacne = Object;
	return Model;
}
