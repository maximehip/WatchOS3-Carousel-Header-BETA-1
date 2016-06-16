//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLActivityBudgetManager.h"

@class CSLActivityScheduler, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CSLSnapshotBudgetManager : CSLActivityBudgetManager
{
    NSObject<OS_dispatch_queue> *_refreshQueue;
    NSObject<OS_dispatch_source> *_refreshTimer;
    int _baseBudget;
    CSLActivityScheduler *_scheduler;
}

+ (id)defaultBudget;
@property(nonatomic) __weak CSLActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)_reloadBaseBudget;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_refreshBudget;
- (void)invalidate;
- (void)dealloc;
- (id)initWithBudget:(id)arg1 history:(id)arg2;

@end

