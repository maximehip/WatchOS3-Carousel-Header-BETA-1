//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLKComplicationObserver.h"

@class NSHashTable, NSOrderedSet, NSString;

@interface CSLComplicationMonitor : NSObject <CLKComplicationObserver>
{
    NSHashTable *_observers;
    NSOrderedSet *_bundleIDs;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)sharedComplicationMonitor;
- (void).cxx_destruct;
- (void)complicationListDidChange;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)_currentBundleIDs;
- (void)_createAddedBundleIDSet:(id *)arg1 andRemovedBundleIDSet:(id *)arg2;
- (void)_notifyObserversOfAddedBundleIDs:(id)arg1 andRemovedBundleIDs:(id)arg2;
- (void)_updateBundleIDs;
- (void)removeComplicationsObserver:(id)arg1;
- (void)addComplicationsObserver:(id)arg1;
- (id)currentBundleIDs;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

