//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface CSLApplicationActionPolicy : NSObject
{
    CDUnknownBlockType _shouldPerformActionForBundleID;
    NSMutableDictionary *_lastApplicationActions;
    NSDate *_lastActionToAnyApplication;
    NSMutableDictionary *_scheduleActions;
    double _minInterAppActionInterval;
    double _minIntraAppActionInterval;
    struct _opaque_pthread_mutex_t _actionLock;
}

@property(retain, nonatomic) NSMutableDictionary *scheduleActions; // @synthesize scheduleActions=_scheduleActions;
@property(retain, nonatomic) NSDate *lastActionToAnyApplication; // @synthesize lastActionToAnyApplication=_lastActionToAnyApplication;
@property(nonatomic) struct _opaque_pthread_mutex_t actionLock; // @synthesize actionLock=_actionLock;
@property(retain, nonatomic) NSMutableDictionary *lastApplicationActions; // @synthesize lastApplicationActions=_lastApplicationActions;
@property(copy, nonatomic) CDUnknownBlockType shouldPerformActionForBundleID; // @synthesize shouldPerformActionForBundleID=_shouldPerformActionForBundleID;
@property double minIntraAppActionInterval; // @synthesize minIntraAppActionInterval=_minIntraAppActionInterval;
@property double minInterAppActionInterval; // @synthesize minInterAppActionInterval=_minInterAppActionInterval;
- (void).cxx_destruct;
- (void)removeAllActionsForBundleID:(id)arg1;
- (void)setActions:(id)arg1 forBundleID:(id)arg2;
- (void)actionTaken:(id)arg1;
- (id)_nextActionForBundleIDs:(id)arg1 scheduledOnly:(_Bool)arg2;
- (id)nextActionForBundleIDs:(id)arg1;
- (id)nextScheduledAction;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (_Bool)_shouldPerformActionForBundleID:(id)arg1;
- (id)allScheduledActions;
- (_Bool)willPerformActionForAnyBundleIDInSet:(id)arg1;
- (void)dealloc;
- (id)init;

@end

