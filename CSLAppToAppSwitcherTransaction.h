//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSSHLTransaction.h"

#import "CSLNavigationTransactionAnimator.h"

@class CSLNavigationTransactionAnimatorHelper, CSLUIApplicationViewControllerTransitionCoordinator, NSString;

@interface CSLAppToAppSwitcherTransaction : IOSSHLTransaction <CSLNavigationTransactionAnimator>
{
    CSLUIApplicationViewControllerTransitionCoordinator *_appTransitionCoordinator;
    CSLNavigationTransactionAnimatorHelper *_helper;
    id <CSLNavigationTransactionAnimatorDelegate> _navigationTransactionAnimatorDelegate;
    CDUnknownBlockType _beginAppearanceTransitionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType beginAppearanceTransitionBlock; // @synthesize beginAppearanceTransitionBlock=_beginAppearanceTransitionBlock;
@property(nonatomic) __weak id <CSLNavigationTransactionAnimatorDelegate> navigationTransactionAnimatorDelegate; // @synthesize navigationTransactionAnimatorDelegate=_navigationTransactionAnimatorDelegate;
@property(readonly, nonatomic) CSLNavigationTransactionAnimatorHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)completeTransition;
- (void)prepareTransition;
- (void)_begin;
- (id)initWithHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

