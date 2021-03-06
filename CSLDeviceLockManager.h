//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class CSLDeviceLockAssertionManager, CSLDeviceLockDisableAssertion, CSLDeviceLockJournal, CSLLockedAirplaneModeController, CSLPITimer, NPSManager, NSDate, NSString;

@interface CSLDeviceLockManager : NSObject <MCProfileConnectionObserver>
{
    CSLDeviceLockAssertionManager *_assertionManager;
    int _lockState;
    CSLDeviceLockDisableAssertion *_transientPasscodeCheckingAssertion;
    CSLDeviceLockDisableAssertion *_screenOnAssertion;
    double _lastLockTimestamp;
    NSString *_lastIncorrectPasscodeAttempt;
    double _unblockTime;
    _Bool _inLockout;
    CSLPITimer *_unblockTimer;
    _Bool _attemptingPasscodeUnlock;
    CSLDeviceLockJournal *_journal;
    NPSManager *_simplePasscodePreferenceSyncManager;
    CSLLockedAirplaneModeController *_airplaneSafeguard;
    unsigned int _secureMode;
}

+ (id)_sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_removeDeviceLockDisableAssertion:(id)arg1;
- (_Bool)_addDeviceLockDisableAssertion:(id)arg1;
- (void)_takeScreenOnAssertionIfNeeded;
- (void)_noteBacklightDidTurnOff:(id)arg1;
- (void)_noteBacklightDidTurnOn:(id)arg1;
- (void)_noteBacklightWillTurnOn:(id)arg1;
- (void)notifyLockState;
- (void)_setLockState:(int)arg1 alwaysNotify:(_Bool)arg2;
- (void)_setSecureDisplayMode;
- (void)_fullyUnblock;
@property(readonly, nonatomic) NSDate *lastLockDate;
- (void)_enablePasscodeLockImmediately:(_Bool)arg1;
- (void)_updateDeviceLockState;
- (_Bool)hasActiveForceNoLockAssertion;
- (void)passcodeLockNow;
- (_Bool)isPasscodeLocked;
- (_Bool)deviceHasPasscodeSet;
- (_Bool)isPermanentlyBlocked:(double *)arg1;
- (_Bool)isPasscodeLockedOrBlocked;
- (_Bool)isBlocked;
- (void)_setUnblockTime:(double)arg1;
- (void)_unblock;
- (void)obliterateDevice;
- (_Bool)attemptUnlockWithPasscode:(id)arg1;
- (int)maxMinutesToBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

