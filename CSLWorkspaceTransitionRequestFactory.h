//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLWorkspaceTransitionRequestFactory : NSObject
{
}

+ (id)requestForStackUpdateType:(unsigned int)arg1 entity:(id)arg2 withTransitionReason:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)requestForMainUINavigationType:(unsigned int)arg1 animated:(_Bool)arg2 withTransitionReason:(unsigned int)arg3 actionConfiguration:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)requestForMainUINavigationType:(unsigned int)arg1 animated:(_Bool)arg2 withTransitionReason:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)requestForActivateApplication:(id)arg1 animated:(_Bool)arg2 withTransitionReason:(unsigned int)arg3 actionConfiguration:(CDUnknownBlockType)arg4;
+ (id)requestForActivateApplication:(id)arg1 animated:(_Bool)arg2 withTransitionReason:(unsigned int)arg3;
+ (id)requestForActivateSwitcherItem:(id)arg1 animated:(_Bool)arg2 withTransitionReason:(unsigned int)arg3 actionConfiguration:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

