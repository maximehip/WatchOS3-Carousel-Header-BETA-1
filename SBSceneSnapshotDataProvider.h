//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XBSnapshotDataProvider.h"

@class FBSceneSnapshot, NSString, SBSnapshotDataProviderContext, XBSnapshotDataProviderContext;

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    float _scaleFactor;
    struct __IOSurface *_processedSurface;
}

@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)fetchImage;
- (void)dealloc;
- (id)initWithSceneSnapshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

