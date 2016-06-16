//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "CSLAlertSoundPolicySource.h"
#import "CSLDNDGestureManagerDelegate.h"

@class BBObserver, BBSettingsGateway, CSLDNDGestureManager, NSArray, NSString;

@interface CSLDNDController : NSObject <BBObserverDelegate, CSLDNDGestureManagerDelegate, CSLAlertSoundPolicySource>
{
    BBObserver *_BBObserver;
    _Bool _BBQuietModeActive;
    _Bool _previousNotifydState;
    _Bool _hasNotifiedAtLeastOnce;
    BBSettingsGateway *_gateway;
    CSLDNDGestureManager *_gestureManager;
    int _notifyToken;
    NSArray *_activeOverrides;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *activeOverrides; // @synthesize activeOverrides=_activeOverrides;
- (void).cxx_destruct;
- (_Bool)_isOverridePermanentlyInactive:(id)arg1;
- (void)_removePermanentlyInactiveOverridesFromArray:(id)arg1;
- (void)_removeOverrideContainingIntervalWithIdentifier:(id)arg1 fromArray:(id)arg2;
- (void)setUpSettingsGateway;
- (unsigned int)allowedAudioFeedbackForAlertName:(id)arg1 withBulletinItem:(id)arg2;
- (unsigned int)allowedAudioFeedbackForAlertName:(id)arg1;
- (void)gestureManagerDidRecognizeDNDGesture:(id)arg1;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (void)nudge;
@property(readonly, nonatomic) unsigned int doNotDisturbActiveReasons;
@property(readonly, nonatomic) _Bool doNotDisturbActive;
- (void)_noteDNDChangedIfNecessary;
- (void)_setupGestureRecognitionSystem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
