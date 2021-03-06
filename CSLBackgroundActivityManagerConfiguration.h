//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLBackgroundUpdatePolicy, CSLDuetBackgroundBudgetController, CSLPrelaunchManager, NSObject<OS_dispatch_queue>;

@interface CSLBackgroundActivityManagerConfiguration : NSObject
{
    id <_DASActivityScheduler> _scheduler;
    CSLDuetBackgroundBudgetController *_budgetController;
    CSLBackgroundUpdatePolicy *_backgroundUpdatePolicy;
    CSLPrelaunchManager *_prelaunchManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak CSLPrelaunchManager *prelaunchManager; // @synthesize prelaunchManager=_prelaunchManager;
@property(retain, nonatomic) CSLBackgroundUpdatePolicy *backgroundUpdatePolicy; // @synthesize backgroundUpdatePolicy=_backgroundUpdatePolicy;
@property(retain, nonatomic) CSLDuetBackgroundBudgetController *budgetController; // @synthesize budgetController=_budgetController;
@property(retain, nonatomic) id <_DASActivityScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;

@end

