//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLSLauncherViewChangeTransaction.h"

#import "CSLLauncherZoomSequencerDelegate.h"
#import "CSLNavigationTransactionAnimator.h"

@class CSLClockSlowModeAssertion, CSLIconZoomCoordinationContext, CSLLauncherViewController, CSLLauncherZoomOptions, CSLLauncherZoomSequencer, CSLNavigableContainerViewController, CSLNavigationTransactionAnimatorHelper, CSLTimingFunction, NSString, UIViewController;

@interface CSLLauncherZoomTransaction : CLSLauncherViewChangeTransaction <CSLLauncherZoomSequencerDelegate, CSLNavigationTransactionAnimator>
{
    CSLNavigableContainerViewController *_launcherContainer;
    CSLLauncherViewController *_launcherViewController;
    UIViewController *_zoomedViewController;
    CSLNavigableContainerViewController *_zoomedViewControllerContainer;
    CSLLauncherZoomSequencer *_sequencer;
    id <CSLIconZoomCoordination> _iconZoomCoordinator;
    CSLIconZoomCoordinationContext *_iconZoomCoordinationContext;
    CSLLauncherZoomOptions *_options;
    _Bool _hasStartedIconZoomCoordination;
    _Bool _sequencerIsRunning;
    CSLTimingFunction *_timingFn;
    CDUnknownBlockType _centerClockApplier;
    float _zoom;
    float _percentCompleted;
    double _animationStartTime;
    double _lastZoomChangeTime;
    CSLClockSlowModeAssertion *_slowModeAssertion;
    id <CSLNavigationTransactionAnimatorDelegate> _navigationTransactionAnimatorDelegate;
    CSLNavigationTransactionAnimatorHelper *_helper;
    CDUnknownBlockType _beginAppearanceTransitionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType beginAppearanceTransitionBlock; // @synthesize beginAppearanceTransitionBlock=_beginAppearanceTransitionBlock;
@property(readonly, nonatomic) CSLNavigationTransactionAnimatorHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) __weak id <CSLNavigationTransactionAnimatorDelegate> navigationTransactionAnimatorDelegate; // @synthesize navigationTransactionAnimatorDelegate=_navigationTransactionAnimatorDelegate;
- (void).cxx_destruct;
- (id)_customizedDescriptionProperties;
- (void)handleBacklightOff;
- (void)backlightDidTurnOff:(id)arg1;
- (void)endObservingBacklightChanges;
- (void)beginObservingBacklightChanges;
- (_Bool)shouldWatchdog:(id *)arg1;
- (id)containerView;
- (void)fullZoomReached;
- (float)iconZoomLevelForZoomLevel:(float)arg1;
- (void)didChangeIconZoomLevel:(float)arg1;
- (void)endIconZoomCoordination;
- (void)beginIconZoomCoordination;
- (void)zoomSequencer:(id)arg1 updateZoom:(float)arg2;
- (void)zoomSequencer:(id)arg1 didComplete:(_Bool)arg2;
- (void)zoomSequencer:(id)arg1 willBegin:(_Bool)arg2;
- (void)prepareSequencer;
- (void)setupZoomValues;
- (void)setupLauncher:(id)arg1;
- (void)_didComplete;
- (_Bool)_shouldComplete;
- (void)_didBegin;
- (void)_begin;
- (void)dealloc;
- (id)initWithHelper:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
