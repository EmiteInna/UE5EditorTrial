#pragma once

class SKuruTimelineSplitterOverlay : public SOverlay
{
public:
	typedef SSplitter::FArguments FArguments;

	void Construct( const FArguments& InArgs );

	/** SwWidget interface */
	virtual void OnArrangeChildren( const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren ) const override;
	virtual FCursorReply OnCursorQuery( const FGeometry& MyGeometry, const FPointerEvent& CursorEvent ) const override;
	virtual FReply OnMouseButtonDown( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual void OnMouseCaptureLost(const FCaptureLostEvent& CaptureLostEvent) override;
	virtual FReply OnMouseButtonUp( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual FReply OnMouseMove( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual void OnMouseLeave( const FPointerEvent& MouseEvent ) override;

private:
	FMargin GetSplitterHandlePadding(int32 Index) const;

	TSharedPtr<SSplitter> Splitter;
	mutable TArray<FMargin> SlotPadding;
};
