//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "CSLDuetMeteringTaskDelegate.h"

@class CDAttribute, CSLDuetApplicationProcessState, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CSLDuetMeteringTaskGroup : NSObject <BSDescriptionProviding, CSLDuetMeteringTaskDelegate>
{
    CDAttribute *_attribute;
    unsigned long long _meteringToken;
    int _suspendCount;
    NSMutableSet *_tasks;
    NSMutableSet *_activeTasks;
    NSMutableSet *_completedTasks;
    NSMutableSet *_sessionTasks;
    NSString *_bundleID;
    _Bool _active;
    _Bool _usesSecondaryMetering;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    CSLDuetApplicationProcessState *_processState;
}

@property(retain, nonatomic) CDAttribute *attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) CSLDuetApplicationProcessState *processState; // @synthesize processState=_processState;
@property(nonatomic) _Bool usesSecondaryMetering; // @synthesize usesSecondaryMetering=_usesSecondaryMetering;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)appendTaskSet:(id)arg1 toBuilder:(id)arg2 withName:(id)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)costDictionaryForMeteringType:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *bundleID;
@property(readonly, getter=isExecuting) _Bool executing;
@property(readonly, getter=isFinished) _Bool finished;
- (void)meteringTaskDidFinish:(id)arg1;
- (void)meteringTaskDidStart:(id)arg1;
- (void)completeGroup;
- (void)_endMetering;
- (void)_beginMeteringTask;
- (void)addTask:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)dealloc;
- (id)initWithMeteringTask:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

