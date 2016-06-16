//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerContextTransitioning.h"

@class NSString;

@interface CSLTransitioningContextAdapter : NSObject <UIViewControllerContextTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    CDUnknownBlockType _willCompleteHandler;
    CDUnknownBlockType _didCompleteHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didCompleteHandler; // @synthesize didCompleteHandler=_didCompleteHandler;
@property(copy, nonatomic) CDUnknownBlockType willCompleteHandler; // @synthesize willCompleteHandler=_willCompleteHandler;
@property(readonly, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (struct CGAffineTransform)targetTransform;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(float)arg1;
- (int)presentationStyle;
- (_Bool)transitionWasCancelled;
- (_Bool)isInteractive;
- (_Bool)isAnimated;
- (id)containerView;
- (id)initWithTransitionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
