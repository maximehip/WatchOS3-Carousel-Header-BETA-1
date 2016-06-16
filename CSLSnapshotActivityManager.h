//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLKComplicationWakeSessionObserver.h"
#import "CSLBackgroundUpdatePolicyObserver.h"
#import "CSLPrelaunchManagerObserver.h"
#import "CSLSnapshotActivityControllerDelegate.h"

@class CSLSnapshotActivityManagerConfiguration, CSLSnapshotService, NSMutableDictionary, NSMutableSet, NSString;

@interface CSLSnapshotActivityManager : NSObject <CSLSnapshotActivityControllerDelegate, CSLBackgroundUpdatePolicyObserver, CSLPrelaunchManagerObserver, CLKComplicationWakeSessionObserver>
{
    _Bool _prelaunching;
    id <CSLSnapshotActivityManagerDelegate> _delegate;
    CSLSnapshotService *_snapshotService;
    NSMutableDictionary *_controllerMap;
    NSMutableSet *_activeWakeSessions;
    CSLSnapshotActivityManagerConfiguration *_configuration;
}

@property(nonatomic) _Bool prelaunching; // @synthesize prelaunching=_prelaunching;
@property(readonly) CSLSnapshotActivityManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSMutableSet *activeWakeSessions; // @synthesize activeWakeSessions=_activeWakeSessions;
@property(readonly, nonatomic) NSMutableDictionary *controllerMap; // @synthesize controllerMap=_controllerMap;
@property(nonatomic) __weak CSLSnapshotService *snapshotService; // @synthesize snapshotService=_snapshotService;
@property __weak id <CSLSnapshotActivityManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)backgroundUpdatePolicyDidChange:(id)arg1;
- (void)complicationWillBeginWakeSessionForBundleIdentifier:(id)arg1;
- (void)complicationWillEndWakeSessionForBundleIdentifier:(id)arg1;
- (void)snapshotActivityControllerDidExhaustSchedule:(id)arg1;
- (_Bool)snapshotActivityController:(id)arg1 shouldBeginActivity:(id)arg2;
- (void)prelaunchManagerCompletedPrelaunching:(id)arg1;
- (void)prelaunchManagerStartedPrelaunching:(id)arg1;
- (void)_queue_cancelExistingPendingSnapshots;
- (_Bool)_queue_hasActiveWakeSessionForBundleID:(id)arg1;
- (id)_queue_existingActivityControllerForBundleID:(id)arg1;
- (id)_queue_existingOrNewActivityControllerForBundleID:(id)arg1;
- (void)addSnapshotScheduleItem:(id)arg1 forBundleID:(id)arg2;
- (void)getScheduleWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSnapshotRequest:(id)arg1 forBundleID:(id)arg2;
- (id)prelaunchManager;
- (id)backgroundUpdatePolicy;
- (id)duetMeteringManager;
- (id)scheduler;
- (id)queue;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

