//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLChargingAlertViewControllerDelegate.h"
#import "CSLChargingChangeObserver.h"
#import "CUISAlertProvider.h"

@class CSLChargingAlertViewController, NSString, NSTimer;

@interface CSLChargingAlertProvider : NSObject <CSLChargingAlertViewControllerDelegate, CSLChargingChangeObserver, CUISAlertProvider>
{
    CSLChargingAlertViewController *_alertController;
    _Bool _isCharging;
    _Bool _hasAppeared;
    _Bool _isListeningForChanges;
    NSTimer *_timer;
    id <CUISAlertProviderDelegate> _alertProviderDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate=_alertProviderDelegate;
- (void).cxx_destruct;
- (void)chargingAlertDidDisappear:(id)arg1;
- (void)chargingAlertDidAppear:(id)arg1;
- (void)_timerFired:(id)arg1;
- (void)_resetChargingAlertTimer:(_Bool)arg1;
- (void)_presentChargingAlert;
- (void)_chargingChanged:(_Bool)arg1;
- (void)offCharger;
- (_Bool)onChargerWillAlert;
- (_Bool)isListeningForBatteryChanges;
- (void)stopListeningForBatteryChanges;
- (void)startListeningForBatteryChanges;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

