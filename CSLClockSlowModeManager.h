//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCClockViewController, NSMutableSet;

@interface CSLClockSlowModeManager : NSObject
{
    NCClockViewController *_clockViewController;
    NSMutableSet *_assertions;
}

+ (id)defaultSlowModeManager;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_isSlowModeEnabled;
- (void)_updateClockState;
- (void)removeSlowModeAssertion:(id)arg1;
- (void)addSlowModeAssertion:(id)arg1;
- (id)initWithClock:(id)arg1;

@end
