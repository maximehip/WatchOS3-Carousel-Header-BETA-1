//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSXPCListener;

@interface CSLUnblankingSynchronizationService : NSObject <NSXPCListenerDelegate>
{
    NSRecursiveLock *_lock;
    unsigned int _unblankingID;
    NSMutableSet *_enabledUnblankingPids;
    int _blankingAssertionPid;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByPid;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *connectionsByPid; // @synthesize connectionsByPid=_connectionsByPid;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)_removeConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_notifyOfBlankingTimeout:(int)arg1;
- (void)_releaseBlankingAssertion;
- (void)_blankingAssertionTimedOutForPid:(int)arg1;
- (void)_takeUnblankingAssertionForPid:(int)arg1;
- (void)_takeUnblankingAssertionAndSendPrepareToUnblankToConnection:(id)arg1 pid:(int)arg2 application:(id)arg3;
- (void)_prepareToUnblank;
- (void)_handleAppLifeCycleEvent:(id)arg1;
- (void)_noteBacklightWillBeOn:(id)arg1;
- (void)_readyForUnblank:(unsigned int)arg1 forConnection:(id)arg2;
- (void)_enableUnblankingSynchronization:(_Bool)arg1 forConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

