#include "EITimelineEditingModel.h"

int FEITimelineEditingModel::GetTickResolution() const
{
	return FMath::RoundToInt32(TickResolution.AsDecimal()*GetFrameRate().AsDecimal());
}

FFrameNumber FEITimelineEditingModel::GetScrubPosition() const
{
	
	return FFrameNumber(FMath::RoundToInt32(CurrentPlayingPosition*GetTickResolution()));
	
}

double FEITimelineEditingModel::GetScrubTime() const
{
	return CurrentPlayingPosition;
}

void FEITimelineEditingModel::SetScrubPosition(const FFrameTime& InputFrameNumber)
{
	CurrentPlayingPosition = InputFrameNumber.AsDecimal()/GetTickResolution();
}

TRange<FFrameNumber> FEITimelineEditingModel::GetPlaybackRange() const
{
	const int32 Resolution = GetTickResolution();
	return TRange<FFrameNumber>(FFrameNumber(FMath::RoundToInt32(
		PlayRange.GetLowerBoundValue() * (double)Resolution)),
		FFrameNumber(FMath::RoundToInt32(PlayRange.GetUpperBoundValue() * (double)Resolution)));
}

void FEITimelineEditingModel::ForEachRootTrack(TFunctionRef<void(FEITimelineTrack&)> InFunction)
{
	for (TSharedRef<FEITimelineTrack>& Track : RootTracks)
	{
		InFunction(Track.Get());
	}
}
