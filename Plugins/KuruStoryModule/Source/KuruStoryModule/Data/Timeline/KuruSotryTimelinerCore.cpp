#include "KuruSotryTimelinerCore.h"

#include "KuruStoryClipData_Model.h"
#include "KuruStoryNotifyLibrary.h"

TSharedPtr<FEITimelineEditingModel> FKuruStoryTimelinerCore::CreateModel(UObject* Object,const TSharedRef<FEITimelinerContext>& Context)
{
	TSharedPtr<FEITimelineEditingModel> Model = MakeShareable(new FKuruStoryClipData_Model);
	Model->EditingInstacne = Object;
	Model->Context = Context;
	Model->ReconcileTracks();
	return Model;
}
TSharedPtr<FEINotifyLibrary> FKuruStoryTimelinerCore::CreateNotifyLibrary(
	const TSharedRef<FEITimelinerContext>& Context)
{
	TSharedPtr<FEINotifyLibrary> NotifyLibrary = MakeShareable(new FKuruStoryNotifyLibrary);
	NotifyLibrary->Context = Context;
	NotifyLibrary->Initialize();
	return NotifyLibrary;
}