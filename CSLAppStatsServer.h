//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSAppStatsServerExportedInterface.h"
#import "NSXPCListenerDelegate.h"

@class CSLAppStatsProcessStateTransitionMonitor, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface CSLAppStatsServer : NSObject <NSXPCListenerDelegate, CSLSAppStatsServerExportedInterface>
{
    NSMutableArray *_clientConnections;
    NSXPCListener *_listener;
    NSMutableArray *_providers;
    CSLAppStatsProcessStateTransitionMonitor *_processStateTransitionMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedAppStatsServer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSLAppStatsProcessStateTransitionMonitor *processStateTransitionMonitor; // @synthesize processStateTransitionMonitor=_processStateTransitionMonitor;
@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void).cxx_destruct;
- (id)_statsForBundleID:(id)arg1 dockIndex:(unsigned int)arg2 isComplication:(_Bool)arg3;
- (void)_stateTransitionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_appEventsWithCompletion:(CDUnknownBlockType)arg1;
- (void)currentAppStatsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeClientConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

