//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLBulletinPipelineStepActor.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CSLBulletinBlacklistedDetector : NSObject <CSLBulletinPipelineStepActor>
{
    id <CSLBulletinPipelineStepActorDelegate> _pipelineStep;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)isCMASSection:(id)arg1;
+ (_Bool)isSectionBlacklisted:(id)arg1 subType:(int)arg2;
+ (_Bool)isBulletinBlacklisted:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSLBulletinPipelineStepActorDelegate> pipelineStep; // @synthesize pipelineStep=_pipelineStep;
- (void).cxx_destruct;
- (void)removeBulletin:(id)arg1 feed:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyBulletin:(id)arg1 feed:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addBulletin:(id)arg1 replaceBulletin:(id)arg2 feed:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addBulletin:(id)arg1 feed:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned int observedFeeds;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

