//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RadiosPreferencesDelegate.h"

@class RadiosPreferences, UIButton, UILabel;

@interface CSLUnlockCompanionViewController : UIViewController <RadiosPreferencesDelegate>
{
    UILabel *_instructionLabel;
    float _fontSize;
    RadiosPreferences *_radioPrefs;
    UILabel *_airplaneModeHeaderLabel;
    UIButton *_airplaneModeDisableButton;
    UILabel *_airplaneModeFooterLabel;
}

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)disableAirplaneMode;
- (void)_updateAirplaneModeContentAnimated:(_Bool)arg1;
- (void)_updateInstructions;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_noteOnWristStateChanged;
- (void)dealloc;
- (id)init;

@end
