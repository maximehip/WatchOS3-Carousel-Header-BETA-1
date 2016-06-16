//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLNavigationStackRequest, NSArray, NSSet, UIViewController;

@interface CSLNavigationStackUpdate : NSObject
{
    _Bool _animated;
    CSLNavigationStackRequest *_request;
    NSArray *_initialViewControllers;
    NSArray *_finalViewControllers;
}

@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSArray *finalViewControllers; // @synthesize finalViewControllers=_finalViewControllers;
@property(copy, nonatomic) NSArray *initialViewControllers; // @synthesize initialViewControllers=_initialViewControllers;
@property(retain, nonatomic) CSLNavigationStackRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *toViewController;
@property(readonly, nonatomic) UIViewController *fromViewController;
@property(readonly, nonatomic) NSSet *removedViewControllers;
@property(readonly, nonatomic) NSSet *addedViewControllers;

@end

