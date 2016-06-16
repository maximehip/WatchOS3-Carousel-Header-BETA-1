//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLClockAssertionDelegate.h"

@class CSLClockAssertion, CSLClockWindowManager, NSString;

@interface CSLClockManager : NSObject <CSLClockAssertionDelegate>
{
    int _updateCount;
    _Bool _needsUpdate;
    CSLClockAssertion *_rootAssertion;
    unsigned int _activeAssertionType;
    _Bool _clockActive;
    id <CSLClockUpdating> _clock;
    CSLClockWindowManager *_clockWindowManager;
    CSLClockAssertion *_screenAssertion;
}

+ (id)sharedClockManager;
@property(readonly, nonatomic) CSLClockAssertion *screenAssertion; // @synthesize screenAssertion=_screenAssertion;
@property(readonly, nonatomic) CSLClockWindowManager *clockWindowManager; // @synthesize clockWindowManager=_clockWindowManager;
@property(readonly, nonatomic, getter=isClockActive) _Bool clockActive; // @synthesize clockActive=_clockActive;
@property(retain, nonatomic) id <CSLClockUpdating> clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (void)clockActiveAssertionHierarchyDidUpdate:(id)arg1;
- (id)_NTKPauseReasonsForPausedAssertions:(id)arg1;
- (void)_updateAssertionTypeIfNeeded;
- (void)_pauseUpdates;
- (void)_resumeUpdates;
- (void)_setActiveAssertionType:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (void)endUpdates;
- (void)beginUpdates;
- (id)initWithClock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
