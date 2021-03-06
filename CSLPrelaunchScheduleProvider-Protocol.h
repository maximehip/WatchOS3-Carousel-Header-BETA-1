//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>;

@protocol CSLPrelaunchScheduleProvider <NSObject>
@property _Bool exhausted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)resume;
- (void)execute;
- (NSDate *)nextScheduledDate;
- (void)removeObserver:(id <CSLPrelaunchScheduleProviderObserver>)arg1;
- (void)addObserver:(id <CSLPrelaunchScheduleProviderObserver>)arg1;

@optional
- (void)cancelPrelaunch;
@end

