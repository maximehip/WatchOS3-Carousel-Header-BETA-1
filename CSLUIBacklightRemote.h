//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLUIBacklightRemoteDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSPointerArray, NSString, NSXPCListener;

@interface CSLUIBacklightRemote : NSObject <NSXPCListenerDelegate, CSLUIBacklightRemoteDelegate>
{
    NSPointerArray *_clients;
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSPointerArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)carouselCoverGestureWithCompletion:(CDUnknownBlockType)arg1;
- (void)carouselSetBacklight:(_Bool)arg1 isWakeGesture:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
