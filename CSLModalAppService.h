//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSModalAppServiceInterface.h"
#import "NSXPCListenerDelegate.h"

@class CSLDeviceLockDisableAssertion, CSLModalAppManager, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

@interface CSLModalAppService : NSObject <NSXPCListenerDelegate, CSLSModalAppServiceInterface>
{
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    CSLDeviceLockDisableAssertion *_lockAssertion;
    NSMutableArray *_modalApps;
    CSLModalAppManager *_modalAppManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLModalAppManager *modalAppManager; // @synthesize modalAppManager=_modalAppManager;
- (void).cxx_destruct;
- (void)_startModalAppWithBundleIdentifier:(id)arg1;
- (void)_navigateToClock;
- (oneway void)startModalAppWithBundleIdentifier:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_releaseAssertion;
- (void)_takeAssertion;
- (_Bool)isModalApp:(id)arg1;
- (_Bool)isModalAppRunning;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

