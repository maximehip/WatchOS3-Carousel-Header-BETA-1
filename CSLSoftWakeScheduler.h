//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLPISoftWakeSchedulerProtocol.h"

@class CSLPITimer, CSLSoftWake, NSDate;

@interface CSLSoftWakeScheduler : NSObject <CSLPISoftWakeSchedulerProtocol>
{
    _Bool _debug;
    _Bool _disabled;
    _Bool _pending;
    float _softwakeInterval;
    CSLPITimer *_softwakeStartTimer;
    float _brightnessBefore;
    float _maxBrightness;
    float _initialBrightness;
    CSLSoftWake *_softwake;
    unsigned int _steps;
    NSDate *_lastScreenOff;
}

+ (id)sharedScheduler;
@property(retain, nonatomic) NSDate *lastScreenOff; // @synthesize lastScreenOff=_lastScreenOff;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned int steps; // @synthesize steps=_steps;
@property(retain, nonatomic) CSLSoftWake *softwake; // @synthesize softwake=_softwake;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) float initialBrightness; // @synthesize initialBrightness=_initialBrightness;
@property(nonatomic) float maxBrightness; // @synthesize maxBrightness=_maxBrightness;
@property(nonatomic) float brightnessBefore; // @synthesize brightnessBefore=_brightnessBefore;
@property(retain, nonatomic) CSLPITimer *softwakeStartTimer; // @synthesize softwakeStartTimer=_softwakeStartTimer;
@property(nonatomic) float softwakeInterval; // @synthesize softwakeInterval=_softwakeInterval;
- (void).cxx_destruct;
- (void)_cancelSoftWake;
- (double)_calculateAdditionalScreenOffInterval;
- (void)_scheduleSoftwakeStartTimer:(id)arg1;
- (void)_startSoftwake;
- (void)cancelSoftWake;
- (id)_softwakeStartTime;
- (void)scheduleSoftWake:(id)arg1;
- (void)_backlightDidTurnOn;
- (void)_backlightDidTurnOff;
- (void)_backlightWillTurnOff;
- (void)_didUndock;
- (void)_initializeResetValues;
- (void)_removePreferencesObservers;
- (void)_addPreferencesObservers;
- (void)_loadPreferences;
- (void)dealloc;
- (id)init;

@end

