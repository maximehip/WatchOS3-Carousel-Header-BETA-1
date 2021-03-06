//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLApplicationsTransitionCoordinator, CSLWorkspaceTransitionContext, IOSSHLTransaction<CSLNavigationTransactionAnimator>, NSString, UIViewController;

@interface CSLNavigationTransactionAnimatorHelper : NSObject
{
    CSLApplicationsTransitionCoordinator *_applicationsTransitionCoordinator;
    _Bool _fromClock;
    _Bool _toClock;
    _Bool _fromLauncher;
    _Bool _toLauncher;
    _Bool _fromSwitcher;
    _Bool _toSwitcher;
    _Bool _fromApplication;
    _Bool _toApplication;
    IOSSHLTransaction<CSLNavigationTransactionAnimator> *_animatorTransaction;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    CSLWorkspaceTransitionContext *_transitionContext;
    NSString *_fromIdentifier;
    NSString *_toIdentifier;
}

@property(readonly, nonatomic) NSString *toIdentifier; // @synthesize toIdentifier=_toIdentifier;
@property(readonly, nonatomic) NSString *fromIdentifier; // @synthesize fromIdentifier=_fromIdentifier;
@property(readonly, nonatomic) _Bool toApplication; // @synthesize toApplication=_toApplication;
@property(readonly, nonatomic) _Bool fromApplication; // @synthesize fromApplication=_fromApplication;
@property(readonly, nonatomic) _Bool toSwitcher; // @synthesize toSwitcher=_toSwitcher;
@property(readonly, nonatomic) _Bool fromSwitcher; // @synthesize fromSwitcher=_fromSwitcher;
@property(readonly, nonatomic) _Bool toLauncher; // @synthesize toLauncher=_toLauncher;
@property(readonly, nonatomic) _Bool fromLauncher; // @synthesize fromLauncher=_fromLauncher;
@property(readonly, nonatomic) _Bool toClock; // @synthesize toClock=_toClock;
@property(readonly, nonatomic) _Bool fromClock; // @synthesize fromClock=_fromClock;
@property(retain, nonatomic) CSLWorkspaceTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) __weak IOSSHLTransaction<CSLNavigationTransactionAnimator> *animatorTransaction; // @synthesize animatorTransaction=_animatorTransaction;
- (void).cxx_destruct;
- (id)createApplicationsTransitionCoordinator;
- (void)completeTransition:(_Bool)arg1;
- (void)beginApplicationTransition:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)transactionAnimationDidComplete;
- (id)customizedDescriptionProperties:(id)arg1;
- (void)claimDestinationContainee;
- (void)addActivationTransactionForDestination;
- (void)addDeactivationTransactionForSource;
- (id)createContainedViewForDestinationViewInContainer:(id)arg1;
- (id)createContainedViewForSourceViewInContainer:(id)arg1;
- (id)init;
- (id)initWithNavigationTransactionAnimator:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;

@end

