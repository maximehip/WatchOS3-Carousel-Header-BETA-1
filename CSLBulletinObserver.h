//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "CSLBulletinXPCServerDelegate.h"

@class BBObserver, CSLBulletinDeduplicator, CSLBulletinPipelineStep, CSLBulletinStateStore, CSLBulletinXPCServer, CSLPITimer, NSObject<OS_dispatch_queue>, NSString;

@interface CSLBulletinObserver : NSObject <BBObserverDelegate, CSLBulletinXPCServerDelegate>
{
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    CSLBulletinPipelineStep *_pipeline;
    CSLBulletinStateStore *_stateStore;
    CSLBulletinDeduplicator *_deduplicator;
    CSLPITimer *_obsolescenceTimer;
    CSLBulletinXPCServer *_xpcServer;
}

+ (id)sharedBulletinObserver;
@property(retain, nonatomic) CSLBulletinXPCServer *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) CSLPITimer *obsolescenceTimer; // @synthesize obsolescenceTimer=_obsolescenceTimer;
@property(retain, nonatomic) CSLBulletinDeduplicator *deduplicator; // @synthesize deduplicator=_deduplicator;
@property(retain, nonatomic) CSLBulletinStateStore *stateStore; // @synthesize stateStore=_stateStore;
@property(retain, nonatomic) CSLBulletinPipelineStep *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)_sectionDisplayNameForSectionID:(id)arg1;
- (void)clearAllBulletins;
- (void)clearBulletinWithSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (void)removeBulletinsWithSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (void)lockedBulletinsInPiplineStepActorWithClassName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBulletinWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 delayLocal:(unsigned int)arg4 delayMirrored:(unsigned int)arg5;
- (id)stateStoreDescription;
- (id)pipelineStepDescriptionWithActorClassName:(id)arg1;
- (id)deduplicatorDescription;
- (struct CGSize)observer:(id)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
- (id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (_Bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)_scheduleObsolescenceTimer;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (id)sectionDisplayNameForBulletin:(id)arg1;
- (void)hasBulletinWithMatchID:(id)arg1 sectionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

