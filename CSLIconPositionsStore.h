//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSManager;

@interface CSLIconPositionsStore : NSObject
{
    NPSManager *_syncManager;
    _Bool _initialSyncComplete;
    id <CSLIconPostionsStoreDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLIconPostionsStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)positionsChanged;
- (void)_saveLocalPositions:(id)arg1 usingKey:(id)arg2;
- (void)_savePositions:(id)arg1 usingKey:(id)arg2;
- (id)_loadLocalPositionsUsingKey:(id)arg1;
- (id)_loadPositionsUsingKey:(id)arg1;
- (void)saveTargetPositions:(id)arg1;
- (void)savePositions:(id)arg1;
- (id)loadTargetPositions;
- (id)loadPositions;
- (id)loadDefaultPositions;
- (void)actionsOnInitialSyncComplete;
- (void)initialSyncComplete;
- (void)dealloc;
- (id)init;
- (void)resetIconLayout;

@end

