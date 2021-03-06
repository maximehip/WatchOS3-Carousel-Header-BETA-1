//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class CSLDuetMeteringRequest, NSObject<OS_dispatch_queue>, NSString;

@interface CSLDuetMeteringTask : NSObject <BSDescriptionProviding>
{
    CDUnknownBlockType _willStartHandler;
    id <CSLDuetMeteringTaskDelegate> _delegate;
    _Bool _executing;
    _Bool _finished;
    CSLDuetMeteringRequest *_request;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(readonly) CSLDuetMeteringRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CDUnknownBlockType)willStartHandler;
- (void)setWillStartHandler:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)start;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

