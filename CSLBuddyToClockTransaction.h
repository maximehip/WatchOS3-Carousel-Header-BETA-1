//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSSHLTransaction.h"

#import "CSLBuddyToClockZoomSequencerAnimationDelegate.h"
#import "CSLNavigationTransactionAnimator.h"
#import "CSLNavigationTransactionAnimatorDelegate.h"

@class CSLBuddyToClockZoomSequencer, CSLLauncherViewController, CSLLauncherZoomTransaction, CSLNavigableContainerViewController, CSLWorkspaceTransitionContext, NSString, UIImage, UIImageView, UIView, UIViewController, UIViewController<CSLIconZoomCoordinatorProvider>;

@interface CSLBuddyToClockTransaction : IOSSHLTransaction <CSLBuddyToClockZoomSequencerAnimationDelegate, CSLNavigationTransactionAnimatorDelegate, CSLNavigationTransactionAnimator>
{
    CSLNavigableContainerViewController *_launcherContainer;
    id <CSLNavigationTransactionAnimatorDelegate> _navigationTransactionAnimatorDelegate;
    UIImage *_buddyContentImage;
    CSLLauncherViewController *_launcherViewController;
    UIViewController<CSLIconZoomCoordinatorProvider> *_clockViewController;
    UIViewController *_buddyAppController;
    CSLWorkspaceTransitionContext *_transitionContext;
    CDUnknownBlockType _beginAppearanceTransitionBlock;
    CSLBuddyToClockZoomSequencer *_sequencer;
    CSLLauncherZoomTransaction *_launcherTransaction;
    UIView *_launcherView;
    UIImageView *_buddyContentView;
    UIView *_blurView;
}

+ (id)blurredImageForLauncherView:(id)arg1;
+ (void)prewarmAnimationBlurWithView:(id)arg1 afterDelay:(double)arg2;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *buddyContentView; // @synthesize buddyContentView=_buddyContentView;
@property(retain, nonatomic) UIView *launcherView; // @synthesize launcherView=_launcherView;
@property(retain, nonatomic) CSLLauncherZoomTransaction *launcherTransaction; // @synthesize launcherTransaction=_launcherTransaction;
@property(retain, nonatomic) CSLBuddyToClockZoomSequencer *sequencer; // @synthesize sequencer=_sequencer;
@property(copy, nonatomic) CDUnknownBlockType beginAppearanceTransitionBlock; // @synthesize beginAppearanceTransitionBlock=_beginAppearanceTransitionBlock;
@property(retain, nonatomic) CSLWorkspaceTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) UIViewController *buddyAppController; // @synthesize buddyAppController=_buddyAppController;
@property(readonly, nonatomic) UIViewController<CSLIconZoomCoordinatorProvider> *clockViewController; // @synthesize clockViewController=_clockViewController;
@property(readonly, nonatomic) CSLLauncherViewController *launcherViewController; // @synthesize launcherViewController=_launcherViewController;
@property(retain, nonatomic) UIImage *buddyContentImage; // @synthesize buddyContentImage=_buddyContentImage;
@property(nonatomic) __weak id <CSLNavigationTransactionAnimatorDelegate> navigationTransactionAnimatorDelegate; // @synthesize navigationTransactionAnimatorDelegate=_navigationTransactionAnimatorDelegate;
- (void).cxx_destruct;
- (id)containerView;
- (void)completeAnimationToViewController:(id)arg1;
- (void)sequencer:(id)arg1 didCompleteAnimationForMode:(unsigned int)arg2;
- (void)sequencer:(id)arg1 didChangeProgress:(float)arg2 forAnimationMode:(unsigned int)arg3;
- (void)sequencerWillBegin:(id)arg1;
- (void)_performBuddyToLauncherAnimationWithProgress:(float)arg1;
- (void)prepareBlurViewWithView:(id)arg1 backdropImage:(id)arg2;
- (void)prepareAnimation;
- (void)_didComplete;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (id)initWithLauncherContainer:(id)arg1 clockViewController:(id)arg2 buddyAppController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
