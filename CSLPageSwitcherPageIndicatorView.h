//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CSLPageDotsView, CSLZeroDelayPanGestureRecognizer;

@interface CSLPageSwitcherPageIndicatorView : UIView
{
    struct CGPoint _originalTouchDownLocation;
    _Bool _hasReachedMinimumMovementThreshold;
    CSLPageDotsView *_pageDotsView;
    id <CSLPageSwitcherPageIndicatorViewDelegate> _delegate;
    CSLZeroDelayPanGestureRecognizer *_scrubGestureRecognizer;
}

@property(readonly, nonatomic) CSLZeroDelayPanGestureRecognizer *scrubGestureRecognizer; // @synthesize scrubGestureRecognizer=_scrubGestureRecognizer;
@property(nonatomic) __weak id <CSLPageSwitcherPageIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCurrentPage:(float)arg1 animated:(_Bool)arg2;
- (void)setNumberOfPages:(int)arg1 animated:(_Bool)arg2;
- (void)handleScrubPanGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

