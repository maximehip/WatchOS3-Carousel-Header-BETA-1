//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLPrelaunchScheduleProviderObserver.h"

@class CSLObserverSet, CSLPITimer, CSLSafeMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CSLPrelaunchManager : NSObject <CSLPrelaunchScheduleProviderObserver>
{
    _Bool _disabled;
    _Bool _prelaunching;
    CSLSafeMutableArray *_scheduleProviders;
    CSLPITimer *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSObject<OS_dispatch_queue> *_observersCalloutQueue;
    CSLObserverSet *_observers;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool prelaunching; // @synthesize prelaunching=_prelaunching;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) CSLObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observersCalloutQueue; // @synthesize observersCalloutQueue=_observersCalloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observersQueue; // @synthesize observersQueue=_observersQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSLPITimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CSLSafeMutableArray *scheduleProviders; // @synthesize scheduleProviders=_scheduleProviders;
- (void).cxx_destruct;
- (_Bool)_deviceUnlockedSinceBoot;
- (void)_backlightDidTurnOff:(id)arg1;
- (void)_backlightWillTurnOn:(id)arg1;
- (void)cancelOutstanding;
- (void)_stopTimer;
- (void)_queue_notifyObserversOfPrelaunchChange;
- (void)_queue_setPrelaunching:(_Bool)arg1;
- (void)_scheduleTimer;
- (_Bool)_shouldScheduleTimer;
- (void)_handleTimer;
- (id)_nextScheduledProvider;
- (void)_loadPreferences;
- (id)_nextScheduledDate;
- (void)scheduleProviderChangedSchedule:(id)arg1;
- (void)removeScheduleProvider:(id)arg1;
- (void)addScheduleProvider:(id)arg1;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
