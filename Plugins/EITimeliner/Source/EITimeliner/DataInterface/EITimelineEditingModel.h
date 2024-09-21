#pragma once
#include "AnimatedRange.h"
#include "ViewRangeInterpolation.h"

class FEITimelinerContext;
class FEITimelinerCoreBase;
class FEITimelineTrack;
/*
 * 这个类的作用是在编辑器域下扩展原有数据来实现一系列方法，因此很多方法都可以重载，也必须重载。
 * 位置类似AnimTimeline里的FModel。
 */
class EITIMELINER_API FEITimelineEditingModel
{
public:
	//实际上编辑的对象。
	UObject* EditingInstacne = nullptr;
	
public:
	TWeakPtr<FEITimelinerContext> Context;
	
	virtual float GetTotalLength()
	{
		return 11.4514f;
	};
	FAnimatedRange ViewRange = FAnimatedRange(0,11);
	FAnimatedRange PlayRange = FAnimatedRange(0,11);
	FAnimatedRange WorkingRange = FAnimatedRange(0,11);
	FFrameRate TickResolution = FFrameRate(60,1);
	TArray<double> EditableItems;
	
	virtual FFrameRate GetFrameRate()const
	{
		return FFrameRate(60,1);
	}
	
	virtual FAnimatedRange GetViewRange()const
	{
		return ViewRange;
	}
	
	virtual int GetTickResolution() const;
	
	virtual FFrameNumber GetScrubPosition()const;
	
	virtual double GetScrubTime()const;
	
	virtual void SetScrubPosition(const FFrameTime& InputFrameNumber);
	
	virtual TRange<FFrameNumber> GetPlaybackRange() const;
	
	virtual void HandleViewRangeChanged(TRange<double> InRange, EViewRangeInterpolation InInterpolation)
	{
		ViewRange = InRange;
	};
	
	virtual void HandleWorkingRangeChanged(TRange<double> InRange)
	{
		WorkingRange = InRange;
	};

	bool bIsLooped = false;
	bool bIsPlaying = false;
	bool bIsReversed = false;
	double CurrentPlayingPosition = 0.;
	float PlayRate = 1.;
	
	virtual void SetPlayingPosition(float InPosition)
	{
		CurrentPlayingPosition = InPosition;
	}
	
	virtual void SetIsPlaying(bool InValue)
	{
		bIsPlaying = InValue;
	}
	
	virtual void SetIsReversed(bool InValue)
	{
		bIsReversed = InValue;
	}
	
	virtual void SetPlayRate(bool InValue)
	{
		bIsPlaying = InValue;
	}
	
	virtual void TickPlaying(float DeltaTime)
	{
		
	};

	TArray<TSharedRef<FEITimelineTrack>> RootTracks;
	const TArray<TSharedRef<FEITimelineTrack>>& GetAllRootTracks() const
	{
		PRAGMA_DISABLE_DEPRECATION_WARNINGS
		return RootTracks;
		PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}
	void ForEachRootTrack(TFunctionRef<void(FEITimelineTrack&)> InFunction);

	virtual void AddDefaultNewTrack(){};
	virtual void RemoveTrack(int trackId){};

	virtual void ReconcileTracks(){};

	int CurrentChosenTrackId = 0;
	int CurrentTrackCnt = 0;

	virtual float GetTrackStartTime(int trackId){return 0;};
	virtual float GetTrackEndTime(int trackId){return 20;};

	virtual void OnTrackNodeMoved(float DeltaMoveTime,int trackId){};

	virtual void OnTrackNodeStretched(float NewStartTime, float NewEndTime,int trackId){};

	virtual void OnDropWithNewStartDelta(float DeltaMoveTime,int trackId){};

	virtual void OnDropWithNewEndDelta(float DeltaMoveTime,int trackId){};
	

	virtual ~FEITimelineEditingModel(){};
};
