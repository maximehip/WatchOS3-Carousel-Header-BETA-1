//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSSHLTransaction.h"

#import "CSLNavigationTransactionAnimator.h"

@class CSLAppToComplicationZoomAnimator, CSLNavigationTransactionAnimatorHelper, NSString, UIView;

@interface CSLUIDosidoAnimationTransaction : IOSSHLTransaction <CSLNavigationTransactionAnimator>
{
    UIView *_animationContainer;
    CSLAppToComplicationZoomAnimator *_zoomAnimator;
    _Bool _isAnimating;
    UIView *_sourceView;
    UIView *_destinationView;
    _Bool _reversed;
    CDUnknownBlockType _beginAppearanceTransitionBlock;
    CSLNavigationTransactionAnimatorHelper *_helper;
    id <CSLNavigationTransactionAnimatorDelegate> _navigationTransactionAnimatorDelegate;
}

+ (id)dosidoSpringAnimation;
+ (id)reversedDosidoAnimationWithHelper:(id)arg1;
+ (id)dosidoAnimationWithHelper:(id)arg1;
@property(nonatomic) __weak id <CSLNavigationTransactionAnimatorDelegate> navigationTransactionAnimatorDelegate; // @synthesize navigationTransactionAnimatorDelegate=_navigationTransactionAnimatorDelegate;
@property(nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) CSLNavigationTransactionAnimatorHelper *helper; // @synthesize helper=_helper;
@property(copy, nonatomic) CDUnknownBlockType beginAppearanceTransitionBlock; // @synthesize beginAppearanceTransitionBlock=_beginAppearanceTransitionBlock;
- (void).cxx_destruct;
- (_Bool)_shouldAlwaysUseComplicationZoom;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (_Bool)_shouldComplete;
- (void)_animationDidFinish;
- (void)beginAnimation;
- (void)_begin;
- (id)initWithHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

