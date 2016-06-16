//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLCombinedSnapshotServiceProtocol.h"
#import "NSXPCListenerDelegate.h"

@class CSLClientConnections, CSLSnapshotContextManager, CSLSnapshotService, NSString, NSXPCListener;

@interface CSLSnapshotServiceEndpoint : NSObject <NSXPCListenerDelegate, CSLCombinedSnapshotServiceProtocol>
{
    CSLSnapshotService *_snapshotService;
    CSLSnapshotContextManager *_snapshotContextManager;
    NSXPCListener *_listener;
    CSLClientConnections *_clients;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLClientConnections *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak CSLSnapshotContextManager *snapshotContextManager; // @synthesize snapshotContextManager=_snapshotContextManager;
@property(nonatomic) __weak CSLSnapshotService *snapshotService; // @synthesize snapshotService=_snapshotService;
- (void).cxx_destruct;
- (void)setCUISSnapshotRequest:(id)arg1 forBundleID:(id)arg2;
- (void)connectUI:(id)arg1;
- (void)invalidateSnapshotForBundleId:(id)arg1;
- (void)setSnapshotRequest:(id)arg1 forBundleID:(id)arg2;
- (void)setSnapshotContext:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSnapshotContext:(id)arg1 forBundleID:(id)arg2;
- (void)snapshotContextForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connect;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

