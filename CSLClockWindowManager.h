//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLClockAssertion, NSMapTable, NSSet;

@interface CSLClockWindowManager : NSObject
{
    CSLClockAssertion *_alertWindowOcclusionAssertion;
    NSMapTable *_windowToAssertionMap;
    NSMapTable *_occluderToAssertionMap;
    NSSet *_allAssertions;
    CSLClockAssertion *_alertWindowAssertion;
    CSLClockAssertion *_mainWindowAssertion;
    CSLClockAssertion *_nilWindowAssertion;
}

@property(readonly, nonatomic) CSLClockAssertion *nilWindowAssertion; // @synthesize nilWindowAssertion=_nilWindowAssertion;
@property(readonly, nonatomic) CSLClockAssertion *mainWindowAssertion; // @synthesize mainWindowAssertion=_mainWindowAssertion;
@property(readonly, nonatomic) CSLClockAssertion *alertWindowAssertion; // @synthesize alertWindowAssertion=_alertWindowAssertion;
- (void).cxx_destruct;
- (void)alertWindowDidHide:(id)arg1;
- (void)alertWindowWillHide:(id)arg1;
- (void)alertWindowDidShow:(id)arg1;
- (void)alertWindowWillShow:(id)arg1;
- (void)unregisterForAlertNotifications;
- (void)registerForAlertNotifications;
- (void)occluder:(id)arg1 isOccludingMainWindow:(_Bool)arg2;
- (void)clockDidMoveToWindow:(id)arg1;
- (void)removeMainWindowOccluder:(id)arg1;
- (void)addMainWindowOccluder:(id)arg1 name:(id)arg2;
- (void)setAlertWindow:(id)arg1;
- (void)setMainWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

