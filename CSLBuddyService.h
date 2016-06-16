//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSBuddyServiceInterface.h"
#import "NSXPCListenerDelegate.h"

@class CSLDeviceLockDisableAssertion, NSString, NSXPCConnection, NSXPCListener;

@interface CSLBuddyService : NSObject <NSXPCListenerDelegate, CSLSBuddyServiceInterface>
{
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    CSLDeviceLockDisableAssertion *_lockAssertion;
    CDUnknownBlockType _dimissalRequestedCallback;
}

+ (void)startServiceWithDismissalRequestedCallback:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)didFinishBuddyDismissal;
- (oneway void)requestDismissalWithImageData:(id)arg1;
- (oneway void)requestRestartForLanguageChange;
- (oneway void)checkin;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_connectionWasInvalidated;
- (void)_prepareForConnection;
- (void)start;
- (id)initWithDismissalRequestedCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

