//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLButtonDelegate.h"
#import "CSLSRawButtonEventListenerService.h"

@class CSLButton, IOSSHLChordedButtonKeyState, NSHashTable, NSString;

@interface CSLUIHIDHandler : NSObject <CSLSRawButtonEventListenerService, CSLButtonDelegate>
{
    int _crownPosition;
    struct __IOHIDEventSystemClient *_ioHIDEventSystemClientRef;
    struct __IOHIDEventSystemClient *_OWDEventSystemClientRef;
    struct __IOHIDServiceClient *_ioHIDWristProximityService;
    unsigned long long _ioHIDWristProximityServiceID;
    struct __IOHIDServiceClient *_ioHIDScreenCoverProximityService;
    unsigned long long _ioHIDScreenCoverProximityServiceID;
    unsigned int _screenCovered:1;
    unsigned int _buttonLitScreen;
    NSHashTable *_rawButtonListeners;
    IOSSHLChordedButtonKeyState *_chordedButtonKeyState;
    CSLButton *_crownButton;
    CSLButton *_buttonButton;
    CSLButton *_chordedButton;
    CSLButton *_powerButton;
    CSLButton *_goHomeButton;
    CSLButton *_systemWakeButton;
    CSLButton *_rotate2WakeUpButton;
    CSLButton *_rotate2WakeDownButton;
    _Bool _enabled;
}

+ (id)sharedInstance;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (void)_startHIDListenerWithEventSystemClient:(struct __IOHIDEventSystemClient *)arg1 matchingServices:(id)arg2 callback:(CDUnknownFunctionPointerType)arg3;
- (void)_startHIDListeners;
- (void)_stopHIDListeners;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1 sender:(void *)arg2;
- (_Bool)_handleScreenCoverProximityServiceRegister:(struct __IOHIDServiceClient *)arg1;
- (void)_handleHIDServiceRegister:(struct __IOHIDServiceClient *)arg1 refcon:(void *)arg2;
- (_Bool)forceWristDetect:(_Bool *)arg1;
- (_Bool)_unlockUIIfNecessaryWithOptions:(id)arg1;
- (void)_updateRawEventListenersIfNeededForButtonEvent:(id)arg1 action:(unsigned int)arg2;
- (_Bool)buttonEvent:(id)arg1 buttonAction:(unsigned int)arg2;
- (_Bool)proximityEvent:(unsigned int)arg1 fromSender:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)setupEventBKSEventRouters;
- (void)dealloc;
- (id)_buttonForUsagePage:(long)arg1 usage:(long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
