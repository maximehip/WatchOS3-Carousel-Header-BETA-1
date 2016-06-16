//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLOWDTimeoutAggdObserver.h"

@interface CSLOWDTimeoutPasscodeEnabledAggdObserver : CSLOWDTimeoutAggdObserver
{
    _Bool _hasUnlocked;
    unsigned int _postUnlockWristDetectionStartCount;
    int _lastUnlockState;
}

@property(nonatomic) int lastUnlockState; // @synthesize lastUnlockState=_lastUnlockState;
@property(nonatomic) unsigned int postUnlockWristDetectionStartCount; // @synthesize postUnlockWristDetectionStartCount=_postUnlockWristDetectionStartCount;
@property(nonatomic) _Bool hasUnlocked; // @synthesize hasUnlocked=_hasUnlocked;
- (id)aggdPrefix;
- (void)performLogIfPossible:(CDUnknownBlockType)arg1;
- (void)logTimeout;
- (void)wristDetectionSensorDidBegin:(id)arg1;

@end
