//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLUILogoManagerDelegate.h"

@class CSLMidnightTimer, CSLModalAppManager, CSLToolXPCServer, CSLUIOnWristStatusViewController, NSString, PUICActionWindowListener;

@interface CarouselStartup : NSObject <CSLUILogoManagerDelegate>
{
    PUICActionWindowListener *_actionWindowListener;
    CSLMidnightTimer *_midnightTimer;
    CSLToolXPCServer *_toolServer;
    CSLUIOnWristStatusViewController *_onWristStatusView;
    double _launchTime;
    _Bool _buddyLaunchBacklightAssertionTaken;
    _Bool _finishingCarouselStartup;
    _Bool _appleLogoDone;
    _Bool _launchCompleted;
    CSLModalAppManager *_setupManager;
}

+ (void)postFrontBoardInitializationHook;
+ (void)preFrontBoardInitializationHook;
+ (void)preFBSystemAppMain;
+ (id)sharedInstance;
@property(retain, nonatomic) CSLModalAppManager *setupManager; // @synthesize setupManager=_setupManager;
@property(readonly, nonatomic) _Bool launchCompleted; // @synthesize launchCompleted=_launchCompleted;
- (void).cxx_destruct;
- (void)significantTimeChange;
- (void)_significantTimeChange;
- (void)mainInterfaceDidAppear;
- (void)preheatPUICBlurApply;
- (void)_performDeferredLaunchWork;
- (void)_finishCarouselStartup;
- (void)_runDemoOrSetupAssistantIfNeeded:(CDUnknownBlockType)arg1 shouldCheckDemoMode:(_Bool)arg2;
- (void)runDemoOrSetupAssistantIfNeeded:(CDUnknownBlockType)arg1;
- (void)_terminateCarouselStartUpScreenOnAssertion;
- (void)_hideAppleLogo;
- (void)logoManagerShouldShowLogo:(id)arg1;
- (void)logoManagerShouldHideLogo:(id)arg1;
- (void)handleWatchFaceChangedNotification:(id)arg1;
- (void)_releaseBacklightAssertion;
- (void)_takeBacklightAssertion;
- (void)loadPlugins;
- (void)handleApplicationBackupRestore:(id)arg1;
- (void)waitForServices;
- (void)applicationDidFinishLaunching;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

