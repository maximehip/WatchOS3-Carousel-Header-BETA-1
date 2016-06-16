//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLNavigationStackController, CSLNavigationStackRequest;

@interface CSLNavigationStackResponse : NSObject
{
    _Bool _didShowRequestedViewController;
    _Bool _didUseCustomAnimator;
    CSLNavigationStackRequest *_request;
    CSLNavigationStackController *_navigationController;
}

@property(nonatomic) _Bool didUseCustomAnimator; // @synthesize didUseCustomAnimator=_didUseCustomAnimator;
@property(nonatomic) _Bool didShowRequestedViewController; // @synthesize didShowRequestedViewController=_didShowRequestedViewController;
@property(retain, nonatomic) CSLNavigationStackController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) CSLNavigationStackRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

