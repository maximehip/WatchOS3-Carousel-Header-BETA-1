//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSButtonListenerServerInterface.h"
#import "NSXPCListenerDelegate.h"

@class CSLSButtonListenerCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCListener;

@interface CSLButtonListenerServer : NSObject <NSXPCListenerDelegate, CSLSButtonListenerServerInterface>
{
    NSXPCListener *_listener;
    NSMutableDictionary *_connections;
    NSObject<OS_dispatch_queue> *_watcherQueue;
    id _downHandlerToken;
    id _upHandlerToken;
    id <CSLSButtonHandlerDelegate> _delegate;
    CSLSButtonListenerCache *_pidCache;
    CSLSButtonListenerCache *_handlerTokenCache;
    unsigned int _status;
    NSObject<OS_dispatch_semaphore> *_handlerSemaphore;
}

+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_semaphore> *handlerSemaphore; // @synthesize handlerSemaphore=_handlerSemaphore;
@property unsigned int status; // @synthesize status=_status;
@property(retain) CSLSButtonListenerCache *handlerTokenCache; // @synthesize handlerTokenCache=_handlerTokenCache;
@property(retain) CSLSButtonListenerCache *pidCache; // @synthesize pidCache=_pidCache;
@property(nonatomic) __weak id <CSLSButtonHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkIn;
- (void)handledButtonEventWithStatus:(unsigned int)arg1;
- (void)_signalHandlerComplete;
- (void)unregisterForButtons:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)_removeEntryForPid:(int)arg1 buttons:(unsigned int)arg2 event:(unsigned int)arg3;
- (void)_removeAllEntriesForPid:(int)arg1;
- (void)registerForButtons:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)_removeHandlerForButtons:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)_addHandlerForButtons:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)_killTopApp:(int)arg1;
- (int)_currentAppPid;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_noteButtonDown:(_Bool)arg1;
- (void)_uninstallHandlers;
- (void)_installHandlers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

