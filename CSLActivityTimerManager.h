//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLActivityTimerSource.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface CSLActivityTimerManager : NSObject <CSLActivityTimerSource>
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSMapTable *_timerMap;
}

@property(readonly) NSMapTable *timerMap; // @synthesize timerMap=_timerMap;
@property(readonly) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
- (void).cxx_destruct;
- (void)_queue_handleTimerFired:(id)arg1;
- (void)scheduleTimer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
