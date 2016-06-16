//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class BKSApplicationStateMonitor, CSLBackgroundActivityManagerConfiguration, CSLBackgroundService, CSLDuetBudgetController, NSDate, NSObject<OS_dispatch_queue>, NSString, _DASActivity;

@interface CSLBackgroundActivityController : NSObject <BSDescriptionProviding>
{
    NSString *_bundleID;
    CSLBackgroundService *_backgroundService;
    id <CSLBackgroundActivityControllerDelegate> _delegate;
    CSLBackgroundActivityManagerConfiguration *_configuration;
    _DASActivity *_submittedActivity;
    _DASActivity *_pendingActivity;
    int _suspendCount;
    unsigned int _requestsSubmitted;
    unsigned int _requestsCancelled;
    BKSApplicationStateMonitor *_bksApplicationStateMonitor;
    unsigned int _lastState;
}

@property(nonatomic) unsigned int lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) BKSApplicationStateMonitor *bksApplicationStateMonitor; // @synthesize bksApplicationStateMonitor=_bksApplicationStateMonitor;
@property(nonatomic) unsigned int requestsCancelled; // @synthesize requestsCancelled=_requestsCancelled;
@property(nonatomic) unsigned int requestsSubmitted; // @synthesize requestsSubmitted=_requestsSubmitted;
@property(nonatomic) int suspendCount; // @synthesize suspendCount=_suspendCount;
@property(retain, nonatomic) _DASActivity *pendingActivity; // @synthesize pendingActivity=_pendingActivity;
@property(retain, nonatomic) _DASActivity *submittedActivity; // @synthesize submittedActivity=_submittedActivity;
@property(nonatomic) __weak CSLBackgroundActivityManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <CSLBackgroundActivityControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CSLBackgroundService *backgroundService; // @synthesize backgroundService=_backgroundService;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_queue_activityWithName:(id)arg1 reason:(id)arg2 startingAfter:(id)arg3 startingBefore:(id)arg4 userString:(id)arg5;
- (id)_queue_newActivityForRequest:(id)arg1;
- (void)_queue_cancelBackgroundTaskRequest;
- (void)_queue_submitActivity:(id)arg1;
- (void)_queue_submitBackgroundTaskRequest:(id)arg1;
- (void)_queue_suspendActivity;
- (void)_queue_resumeActivity;
- (void)_queue_changeActivityEscalation:(_Bool)arg1;
- (id)_queue_copyActivity:(id)arg1 escalate:(_Bool)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) NSDate *currentRequest;
@property(readonly, nonatomic) CSLDuetBudgetController *budgetController;
@property(readonly, nonatomic) id <_DASActivityScheduler> scheduler;
- (void)deescalateActivity;
- (void)escalateActivity;
- (void)_queue_suspend;
- (void)suspend;
- (void)_queue_resume;
- (void)resume;
- (id)submittedUserString;
- (void)cancelBackgroundTaskRequest;
- (void)submitBackgroundTaskRequest:(id)arg1;
- (void)_queue_stateChange:(unsigned int)arg1;
- (id)initWithBundleID:(id)arg1 activityManagerConfiguration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
