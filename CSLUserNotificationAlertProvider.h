//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSUIProvider.h"
#import "CSLUserNotificationViewControllerDelegate.h"
#import "CUISAlertProvider.h"

@class NSMutableArray, NSString;

@interface CSLUserNotificationAlertProvider : NSObject <CSLUserNotificationViewControllerDelegate, CSLSUIProvider, CUISAlertProvider>
{
    NSMutableArray *_alerts;
    id <CUISAlertProviderDelegate> alertProviderDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate;
- (void).cxx_destruct;
- (void)dismissController:(id)arg1;
- (void)requestUITriggerWithRegistration:(id)arg1 UITriggerName:(id)arg2 withDictionary:(id)arg3 withReason:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_handleUserNotificationCallBack:(struct __CFMachPort *)arg1 withMessage:(void *)arg2;
- (id)init;
- (void)_startUserNotificationCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
