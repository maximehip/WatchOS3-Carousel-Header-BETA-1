//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLActivityPolicyResponse, _DASActivity;

@protocol CSLActivityPolicy <NSObject>
- (CSLActivityPolicyResponse *)responseForActivity:(_DASActivity *)arg1 withState:(id <CSLSchedulerContext>)arg2;
- (_Bool)appliesToActivity:(_DASActivity *)arg1;
@end

