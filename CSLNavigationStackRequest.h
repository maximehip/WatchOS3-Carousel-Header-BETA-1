//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CSLNavigationStackRequest : NSObject
{
    _Bool _animated;
    NSArray *_viewControllers;
    id <CSLNavigationStackControllerAnimationProvider> _animationProvider;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <CSLNavigationStackControllerAnimationProvider> animationProvider; // @synthesize animationProvider=_animationProvider;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)sendResponse:(id)arg1;

@end

