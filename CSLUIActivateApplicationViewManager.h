//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSActivatingUIAssertionProvider.h"
#import "CUISActivateUIApplicationViewProviderDelegate.h"
#import "RadiosPreferencesDelegate.h"

@class CUISActivateUIApplicationView, CUISDefaultActivateUIApplicationViewProvider, CUISLaunchApplicationContextData, NSMutableDictionary, NSPointerArray, NSString, RadiosPreferences, _CSLUIActivationAssertionsServer;

@interface CSLUIActivateApplicationViewManager : NSObject <CUISActivateUIApplicationViewProviderDelegate, CSLSActivatingUIAssertionProvider, RadiosPreferencesDelegate>
{
    _CSLUIActivationAssertionsServer *_assertionsServer;
    CUISDefaultActivateUIApplicationViewProvider *_defaultProvider;
    NSMutableDictionary *_providers;
    NSPointerArray *_assertionsObservers;
    NSMutableDictionary *_assertions;
    NSMutableDictionary *_assertionCounts;
    RadiosPreferences *_airplaneModeController;
    CUISActivateUIApplicationView *_currentView;
    CUISLaunchApplicationContextData *_currentContextData;
    id <CUISActivateUIApplicationViewProvider> _currentViewProvider;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
- (struct CGImage *)_cgImageForSnapshotInfo:(id)arg1;
- (id)_snapshotExtendedDataForImageInfo:(id)arg1;
- (id)_snapshotImageForImageInfo:(id)arg1;
- (id)_snapshotInfoForDefaultPNGforApplication:(id)arg1;
- (id)_viewForApplicationWithContextData:(id)arg1;
- (id)_defaultPNGImageViewForApplication:(id)arg1;
- (id)_snapshotForApplication:(id)arg1;
- (id)_iconViewForBundleIdentifier:(id)arg1;
- (id)_defaultPNGImageForApplication:(id)arg1;
- (id)_snapshotNameForApplication:(id)arg1;
- (id)_providerForApplication:(id)arg1;
- (void)_loadPlugins;
- (void)airplaneModeChanged;
- (void)releaseActivatingUIAssertionForUUID:(struct __CFUUID *)arg1;
- (_Bool)takeActivatingUIAssertion:(id)arg1 forUUID:(struct __CFUUID *)arg2;
- (void)_notifyObserversOfAllAssertionsReleased:(id)arg1;
- (void)_notifyObserversOfAssertionReleased:(id)arg1;
- (void)_notifyObserversOfAssertionTaken:(id)arg1;
- (id)activateUIApplicationViewProvider:(id)arg1 imageForBundleID:(id)arg2 withName:(id)arg3;
- (id)activateUIApplicationViewProvider:(id)arg1 imageForBundleID:(id)arg2 withName:(id)arg3 withURL:(id)arg4 forOrientation:(int)arg5;
- (void)activateUIApplicationViewProvider:(id)arg1 didCompleteUpdatesForAppContextData:(id)arg2 view:(id)arg3;
- (void)activateUIApplicationViewProvider:(id)arg1 willBeginUpdatesForAppContextData:(id)arg2 view:(id)arg3;
- (id)activateUIApplicationViewProvider:(id)arg1 statusImageViewForBundleID:(id)arg2;
- (id)activateUIApplicationViewProvider:(id)arg1 activateImageForContextData:(id)arg2;
- (id)activateUIApplicationViewProvider:(id)arg1 displayNameForBundle:(id)arg2;
- (id)activateUIApplicationViewProvider:(id)arg1 activatingURLForBundle:(id)arg2;
- (id)activateUIApplicationViewProvider:(id)arg1 statusBarGlobalContextPropertiesForAppContextData:(id)arg2;
- (void)_logStatusBarItem:(id)arg1 forBundleIdentifier:(id)arg2 action:(const char *)arg3;
- (id)activateUIApplicationViewProvider:(id)arg1 statusBarItemForAppContextData:(id)arg2;
- (_Bool)activateUIApplicationViewProvider:(id)arg1 shouldDisplayStatusBarForContextData:(id)arg2;
- (id)applicationSwitcherSpinnerViewForContextData:(id)arg1;
- (id)_statusBarGlobalContextPropertiesForResumingApplication:(id)arg1;
- (id)_statusBarItemForResumingApplication:(id)arg1;
- (id)_statusBarItemForLaunchingApplication:(id)arg1;
- (id)_findLaunchStatusBarDictionary:(id)arg1;
- (id)_extendedSnapshotInfoForCurrentDelegateApplication:(id)arg1;
- (id)_applicationForBundleIDForDelegateProtocol:(id)arg1;
- (void)removeAssertionsObserver:(id)arg1;
- (void)addAssertionsObserver:(id)arg1;
- (unsigned int)assertionCountForBundleID:(id)arg1;
- (id)activationViewForApp:(id)arg1 isInSwitcher:(_Bool)arg2 useStatusBarInSnapshot:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

