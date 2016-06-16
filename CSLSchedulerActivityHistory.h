//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface CSLSchedulerActivityHistory : NSObject
{
    NSMutableArray *_history;
    NSMutableDictionary *_bundleIDToDateMap;
}

@property(readonly) NSMutableDictionary *bundleIDToDateMap; // @synthesize bundleIDToDateMap=_bundleIDToDateMap;
@property(readonly) NSMutableArray *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (void)clearHistoryBeforeDate:(id)arg1;
- (id)lastActivityDate;
- (id)lastActivityDateForBundleID:(id)arg1;
- (void)noteActivityStartedForBundleID:(id)arg1 atDate:(id)arg2;
- (id)init;

@end
