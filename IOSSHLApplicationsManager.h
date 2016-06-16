//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLApplicationRestrictionsManagerProtocol.h"
#import "FBUIApplicationServiceDelegate.h"
#import "IOSSHLApplicationLifecycleObserver.h"
#import "IOSSHLApplicationPlaceholderLifecycleObserver.h"

@class BKSApplicationStateMonitor, FBApplicationLibrary, IOSSHLApplicationLibraryObserver, IOSSHLReverseCountedSemaphore, NSHashTable, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IOSSHLApplicationsManager : NSObject <IOSSHLApplicationLifecycleObserver, IOSSHLApplicationPlaceholderLifecycleObserver, FBUIApplicationServiceDelegate, CSLApplicationRestrictionsManagerProtocol>
{
    NSMutableDictionary *_applicationProxies;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSRecursiveLock *_applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    IOSSHLApplicationLibraryObserver *_appLibraryObserver;
    FBApplicationLibrary *_appLibrary;
    IOSSHLReverseCountedSemaphore *_uninstallationReverseSemaphore;
    unsigned int _visibilityOverridesAreDirty:1;
    NSHashTable *_uiObservers;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void).cxx_destruct;
- (void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;
- (void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2;
- (void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsModified:(id)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;
- (void)applicationPlaceholdersInstalled:(id)arg1;
- (void)applicationPlaceholdersCancelled:(id)arg1;
- (void)applicationPlaceholdersAdded:(id)arg1;
- (void)removeApplicationLibraryUIObserver:(id)arg1;
- (void)addApplicationLibraryUIObserver:(id)arg1;
- (id)_appProxyForBundleIdentifier:(id)arg1;
- (id)allApplicationsBundleIdentifiers;
- (id)allApplicationsInfo;
- (id)allApplications;
- (void)waitForUninstallsToComplete;
- (void)uninstallApplication:(id)arg1;
- (void)_applicationFailedToLoad:(id)arg1;
- (void)_setVisibilityOverrides:(id)arg1 forBundleID:(id)arg2;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1;
- (void)setVisibilityOverridesAreDirty:(_Bool)arg1;
- (id)applicationWithPid:(int)arg1;
- (id)applicationsWithPid:(int)arg1;
- (void)setApplication:(id)arg1 restricted:(_Bool)arg2;
- (_Bool)isApplicationRestricted:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationInfoWithBundleIdentifier:(id)arg1;
- (_Bool)isBundleIdentifierRestrictionDisabled:(id)arg1;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(_Bool)arg3;
- (id)_appInfosToBundleIDs:(id)arg1;
- (id)_loadApplications:(id)arg1 removed:(id)arg2;
- (void)dealloc;
- (void)_memoryWarningReceived;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

