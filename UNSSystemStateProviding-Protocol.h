//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@protocol UNSSystemStateProviding <NSObject>
- (_Bool)shouldThrottleContentNotificationForApplicatin:(NSString *)arg1 onDate:(NSDate *)arg2 withLastCount:(unsigned int *)arg3 onDay:(int *)arg4;
- (_Bool)isNewsstandContentBackgroundModeSupportedForApplication:(NSString *)arg1;
- (_Bool)isNewsstandApplication:(NSString *)arg1;
- (_Bool)isRemoteNotificationBackgroundModeSupportedForApplication:(NSString *)arg1;
- (_Bool)isBackgroundAppRefreshSupportedForApplication:(NSString *)arg1;
- (_Bool)isApplicationRestricted:(NSString *)arg1;
- (_Bool)isApplicationInstalled:(NSString *)arg1;

@optional
- (void)handleContentAvailableNotificationForApplication:(NSString *)arg1 userInfo:(NSDictionary *)arg2 priority:(int)arg3 completion:(void (^)(void))arg4;
@end

