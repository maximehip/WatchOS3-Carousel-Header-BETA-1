//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLPrelaunchScheduleProvider.h"

@class CSLObserverSet, NSObject<OS_dispatch_queue>, NSString;

@interface CSLObservableScheduleProvider : NSObject <CSLPrelaunchScheduleProvider>
{
    _Bool _exhausted;
    NSObject<OS_dispatch_queue> *_queue;
    CSLObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) CSLObserverSet *observers; // @synthesize observers=_observers;
@property _Bool exhausted; // @synthesize exhausted=_exhausted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)resume;
- (void)execute;
- (id)nextScheduledDate;
- (void)notifyScheduleExhausted;
- (void)notifyScheduleChanged;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

