//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLOnWristServerExportedInterface.h"
#import "CSLWristDetectionSensorDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "NSXPCListenerDelegate.h"

@class CSLDeviceLockDisableAssertion, CSLOnWristDeviceState, CSLWristDetectionSensor, NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;

@interface CSLUIOnWristManager : NSObject <NSXPCListenerDelegate, CSLOnWristServerExportedInterface, CSLWristDetectionSensorDelegate, MCProfileConnectionObserver>
{
    CSLDeviceLockDisableAssertion *_onWristLockDisableAssertion;
    NSXPCListener *_listener;
    NSMutableSet *_clientConnections;
    NSLock *_connectionsLock;
    CSLWristDetectionSensor *_wristDetectionSensor;
    CSLOnWristDeviceState *_onWristDeviceState;
    _Bool _allowWristDetectWhileCharging;
    NSArray *_onWristDeviceStateObservers;
    _Bool _waitingForInitialWristDetect;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_onWristDeviceStateDidChange:(id)arg1;
- (void)_setupDefaultObservers;
- (_Bool)_isDeviceCharging;
- (void)_chargerStateDidChange:(id)arg1;
- (void)_lockDeviceIfPossible;
- (_Bool)_isWristDetectionDisabled;
- (_Bool)_wristDetectionDisabledPreference;
- (void)_postDisableWristDetectionSettingChangedNotification;
- (void)_disableWristDetectionSettingChangedExternally;
- (_Bool)_wristDetectionEnabledRestriction;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)_fakeAlwaysOnWrist;
- (void)_fakeOnWristSettingChangedExternally;
- (void)_lockForInitialWristDetectIfNeeded;
- (void)wristDetectionSensorDidChangeOnWristStatus:(id)arg1;
- (void)wristDetectionSensorDidEnd:(id)arg1;
- (void)wristDetectionSensorDidBegin:(id)arg1;
- (_Bool)canWristDetectionSensorBegin:(id)arg1;
- (void)_accessClientConnectionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateOnWristDeviceStateWithBlock:(CDUnknownBlockType)arg1;
- (void)_setOnWristDeviceState:(id)arg1;
- (void)_noteSystemStateChanged:(id)arg1;
- (void)_stopObservingSystemState;
- (void)_startObservingSystemState;
- (void)_removeClientConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_notifyClients;
- (void)requestWristDetectionDisabledStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_forceOnWristUpdate;
- (void)forceOnWristUpdate;
- (void)getOnWristState:(CDUnknownBlockType)arg1;
- (void)forceOnWristDetect;
- (_Bool)isDetectingOnWrist;
@property(readonly, nonatomic) int onWristState;
- (void)dealloc;
- (void)initOnWrist;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

