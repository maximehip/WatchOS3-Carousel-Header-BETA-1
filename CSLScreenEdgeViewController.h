//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CSLPIButtonHandlerProtocol.h"
#import "CSLScreenEdgeCoordinating.h"
#import "CSLScreenEdgePresenter.h"

@class CSLScreenEdgePanGestureRecognizer, CUISAlertBackground, CUISAlertBackgroundView, NSString, UIView, UIViewController<CSLScreenEdgePresentee>, UIWindow;

@interface CSLScreenEdgeViewController : UIViewController <CSLPIButtonHandlerProtocol, CSLScreenEdgeCoordinating, CSLScreenEdgePresenter>
{
    unsigned int _edge;
    UIViewController<CSLScreenEdgePresentee> *_viewController;
    UIWindow *_window;
    unsigned int _windowLevel;
    CUISAlertBackgroundView *_blurredBackgroundView;
    CUISAlertBackground *_blurredBackground;
    UIView *_alphaBackgroundView;
    struct CGPoint _lastTouchLocation;
    struct CGPoint _lastTouchVelocity;
    _Bool _isAnimatingTransition;
    _Bool _disableBlur;
    id <CSLScreenEdgeCoordinatingDelegate> _presentationCoordinator;
    CSLScreenEdgePanGestureRecognizer *_showGestureRecognizer;
    CSLScreenEdgePanGestureRecognizer *_hideGestureRecognizer;
}

@property(retain, nonatomic) CSLScreenEdgePanGestureRecognizer *hideGestureRecognizer; // @synthesize hideGestureRecognizer=_hideGestureRecognizer;
@property(retain, nonatomic) CSLScreenEdgePanGestureRecognizer *showGestureRecognizer; // @synthesize showGestureRecognizer=_showGestureRecognizer;
@property(nonatomic) __weak id <CSLScreenEdgeCoordinatingDelegate> presentationCoordinator; // @synthesize presentationCoordinator=_presentationCoordinator;
- (void).cxx_destruct;
- (_Bool)allowShowTransitionSystemGesture;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2;
- (void)_handleBacklightDidTurnOff:(id)arg1;
- (void)_stopTransitioningWithRevealState:(_Bool)arg1;
- (void)_startTransitioning:(_Bool)arg1;
- (void)_prepareBackground;
- (void)_setupViewForPresentation;
- (void)_createViews;
- (void)_createWindow;
- (float)_heightForTouchLocation:(struct CGPoint)arg1;
- (float)_heightWhenClosed;
- (float)_heightWhenOpen;
- (float)_currentRevealPercentage;
- (void)_updateRevealPercentage:(float)arg1 withVelocity:(float)arg2 userDrivenAnimation:(_Bool)arg3;
- (void)_revealSlidingViewToHeight:(float)arg1 withVelocity:(float)arg2 userDrivenAnimation:(_Bool)arg3;
- (void)_beginSystemGesturePresentationWithGestureRecognizer:(id)arg1;
- (void)_dismissWithDuration:(double)arg1 additionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAnimated:(_Bool)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_cancelTransition;
- (void)_endTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_gestureFailed;
- (void)_gestureEndedWithGestureRecognizer:(id)arg1;
- (void)_gestureChangedWithGestureRecognizer:(id)arg1;
- (void)_gestureBeganWithGestureRecognizer:(id)arg1;
- (void)handleScreenEdgePanGestureRecognizer:(id)arg1;
- (void)_presentWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned int edge;
@property(readonly, nonatomic) _Bool isPresented;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isVisible;
@property(readonly, nonatomic) UIViewController<CSLScreenEdgePresentee> *screenEdgePresentedViewController;
- (id)initWithEdge:(unsigned int)arg1 windowLevel:(unsigned int)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

