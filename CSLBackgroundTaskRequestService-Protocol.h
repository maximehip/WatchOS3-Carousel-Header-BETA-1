//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLSBackgroundTaskRequest, NSString;

@protocol CSLBackgroundTaskRequestService <NSObject>
- (void)cancelBackgroundTaskRequestForBundleID:(NSString *)arg1;
- (void)setBackgroundTaskRequest:(CSLSBackgroundTaskRequest *)arg1 forBundleID:(NSString *)arg2;
@end

