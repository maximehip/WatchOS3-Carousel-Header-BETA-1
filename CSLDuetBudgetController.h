//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLDuetActivityBudgetDataSourceDelegateProtocol.h"
#import "CSLDuetBudgetControllerProtocol.h"

@class CSLDuetActivityBudget, CSLDuetActivityBudgetDataSource, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CSLDuetBudgetController : NSObject <CSLDuetActivityBudgetDataSourceDelegateProtocol, CSLDuetBudgetControllerProtocol>
{
    CSLDuetActivityBudgetDataSource *_dataSource;
    CSLDuetActivityBudget *_budget;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_startDate;
    unsigned int _refreshCount;
    NSDate *_lastRefreshDate;
    id <_CDLocalContext> _context;
    id <CSLDuetBudgetControllerConfiguration> _configuration;
    double _refreshInterval;
}

+ (int)budgetDefaultMaxComplicationApps;
+ (int)budgetDefaultMaxDockApps;
+ (id)defaultBudgetController;
+ (id)defaultConfiguration;
@property(readonly, nonatomic) id <CSLDuetBudgetControllerConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) unsigned int refreshCount; // @synthesize refreshCount=_refreshCount;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSLDuetActivityBudget *budget; // @synthesize budget=_budget;
@property(readonly, nonatomic) CSLDuetActivityBudgetDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 addedBundleIDs:(id)arg2 removedBundleIDs:(id)arg3;
- (id)nextRefreshDateAfterDate:(id)arg1;
- (void)activityStartedForBundleID:(id)arg1 priority:(_Bool)arg2;
- (void)refreshBudget;
- (void)logBudget;
- (void)updateBudgetDictionary;
- (id)contextKeyPath;
- (void)dealloc;
- (id)initWithModel:(id)arg1 complicationMonitor:(id)arg2 context:(id)arg3 configuration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

