//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLBulletinStateStoreProtocol.h"

@class CSLBulletinStatePersistentStore, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CSLBulletinStateStore : NSObject <CSLBulletinStateStoreProtocol>
{
    NSMutableDictionary *_inactiveBulletinStates;
    NSMutableDictionary *_activeBulletinStates;
    CSLBulletinStatePersistentStore *_persistentStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_observers;
}

+ (id)sharedBulletinStateStore;
- (void).cxx_destruct;
- (id)_bulletinKeyForBulletin:(id)arg1;
- (void)_preloadPersistentItems;
- (void)_notifyObserversOfChange;
- (void)removeStateStoreObserver:(id)arg1;
- (void)addStateStoreObserver:(id)arg1;
- (void)manageStatesForBulletins:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)manageStateForBulletin:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createStateForBulletinIfNecessary:(id)arg1 withKeepAliveCount:(unsigned int)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)anyBulletinMatches:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeStatesBeforeDate:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeStateForBulletin:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

