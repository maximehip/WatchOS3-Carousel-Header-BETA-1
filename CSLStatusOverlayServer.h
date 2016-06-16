//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLStatusOverlayAssertionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class CSLStatusOverlay, CSLStatusOverlayAssertion, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface CSLStatusOverlayServer : NSObject <NSXPCListenerDelegate, CSLStatusOverlayAssertionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSLStatusOverlay *_statusOverlay;
    NSXPCListener *_listener;
    CSLStatusOverlayAssertion *_activeAssertion;
    float _displayScale;
    struct CGRect _screenBounds;
}

+ (void)run;
@property(nonatomic) float displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property(retain, nonatomic) CSLStatusOverlayAssertion *activeAssertion; // @synthesize activeAssertion=_activeAssertion;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)assertionDidInvalidate:(id)arg1;
- (void)assertion:(id)arg1 didUpdateStatusString:(id)arg2;
- (void)assertionDidActivate:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
@property(readonly, nonatomic) CSLStatusOverlay *statusOverlay; // @synthesize statusOverlay=_statusOverlay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

