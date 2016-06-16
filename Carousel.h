//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "CSLPIButtonHandlerProtocol.h"
#import "CSLUIStateProviding.h"
#import "CSLWorkspaceRequestHandling.h"
#import "FBSystemAppDelegate.h"
#import "IOSSHLUIDelegate.h"
#import "IOSSHLWorkspaceTransitionRequestValidator.h"
#import "UIApplicationDelegate.h"

@class CSLUIFinalButtonHandler, CSLUIMainViewController, CSLUIStandardButtonHandler, NSMutableArray, NSNumber, NSString, PUICActionWindowListener, UIWindow;

@interface Carousel : FBSystemApp <IOSSHLWorkspaceTransitionRequestValidator, CSLPIButtonHandlerProtocol, IOSSHLUIDelegate, FBSystemAppDelegate, UIApplicationDelegate, CSLUIStateProviding, CSLWorkspaceRequestHandling>
{
    CSLUIFinalButtonHandler *_finalButtonHandler;
    PUICActionWindowListener *_actionWindowListener;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    _Bool _launchCompleted;
    CSLUIMainViewController *_mainController;
    UIWindow *_mainWindow;
    NSNumber *_isInSetup;
    NSNumber *_isInDemo;
    NSString *_bundleIdentifer;
    NSString *_name;
}

+ (_Bool)shouldFixMainThreadPriority;
+ (void)_startStatusBarServerIfNecessary;
+ (id)sharedInstance;
+ (void)postFrontBoardInitializationHook;
+ (void)preFrontBoardInitializationHook;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bundleIdentifer; // @synthesize bundleIdentifer=_bundleIdentifer;
@property(nonatomic) _Bool launchCompleted; // @synthesize launchCompleted=_launchCompleted;
@property(retain, nonatomic) NSNumber *isInDemo; // @synthesize isInDemo=_isInDemo;
@property(retain, nonatomic) NSNumber *isInSetup; // @synthesize isInSetup=_isInSetup;
@property(readonly, nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(readonly, nonatomic) CSLUIMainViewController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (_Bool)applicationIsAliveForSystemWatchdog:(id)arg1;
- (id)systemAppBundleIdentifier;
- (void)significantTimeChange;
- (_Bool)preflightTransitionRequest:(id)arg1;
- (void)_handleBadSignatureAction:(id)arg1 forRequest:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)handleWorkspaceRequest:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)populateUIState:(id)arg1;
- (void)_scheduleSceneEventResponseForScene:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)applicationSuspend:(struct __GSEvent *)arg1;
- (_Bool)shouldSendEvent:(id)arg1;
- (_Bool)_shouldDelayTouchesForControlCenter;
- (void)sendEvent:(id)arg1;
- (_Bool)systemWakeEvent;
- (void)powerPressed;
- (_Bool)_screenshotEnabled;
- (void)handleChordedButtonActionTriggered;
@property(readonly, nonatomic) CSLUIStandardButtonHandler *buttonHandler;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)shouldIgnoreTransitionRequestsForSetupOrDemo:(id)arg1;
- (void)resetIdleTimerAndUndim:(_Bool)arg1;
- (void)_openURLCore:(id)arg1 application:(id)arg2 animating:(_Bool)arg3 sender:(id)arg4 activationSettings:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(_Bool)arg4 animating:(_Bool)arg5 activationSettings:(id)arg6 withResult:(CDUnknownBlockType)arg7;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(_Bool)arg4 animating:(_Bool)arg5 activationSettings:(id)arg6 withResult:(CDUnknownBlockType)arg7;
- (void)applicationOpenURL:(id)arg1;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)_URLIsHandledByCarousel:(id)arg1;
- (_Bool)application:(id)arg1 canOpenURL:(id)arg2;
- (void)_runWithURL:(id)arg1 payload:(id)arg2 launchOrientation:(int)arg3 statusBarStyle:(int)arg4 statusBarHidden:(_Bool)arg5;
- (_Bool)isAppShowing;
@property(readonly, nonatomic) NSString *fullscreenAppBundleID;
- (void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2;
- (int)activeInterfaceOrientation;
- (_Bool)_supportedInterfaceOrientationsIsEnabled;
- (_Bool)systemAppWantsOrientationEvents;
- (void)batteryStatusDidChange:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_registerDefaults;
- (void)_makeMainWindowVisibleAndKeyWindowIfNone;
- (void)makeMainWindowVisibleAndKeyIfHidden;
- (void)startUI;
- (short)powerLogClientID;
- (id)init;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (id)_availableTestDictionary;
- (id)_availableTestList;
- (id)_topmostAccessibilityWindowBelowWindow:(id)arg1;
- (_Bool)_canWindowBeAccessibilityMainWindow:(id)arg1;
- (id)_accessibilityMainWindow;
- (_Bool)_accessibilityIsSystemAppServer;
- (_Bool)_accessibilityApplicationIsSystemWideServer;
- (int)_accessibilityApplicationOrientation;
- (void)_restoreLibrary;
- (void)_useBlankFaceLibrary;
- (int)_determineFaceStyleForTest:(id)arg1 withTestPrefix:(id)arg2;
- (int)_determineFaceIndexForTest:(id)arg1 withTestPrefix:(id)arg2;
- (id)_faceNameForTest:(id)arg1 withTestPrefix:(id)arg2;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
