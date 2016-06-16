//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLAppSwitcherItemModel, NSMutableDictionary;

@interface CSLUIApplicationViewControllerFactory : NSObject
{
    NSMutableDictionary *_viewControllersByIdentifier;
    CSLAppSwitcherItemModel *_switcherItemModel;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)existingViewControllerForBundleIdentifier:(id)arg1;
- (void)evictNonSwitcherAppsIfNeeded;
- (id)viewControllerForBundleIdentifier:(id)arg1;
- (id)init;

@end

