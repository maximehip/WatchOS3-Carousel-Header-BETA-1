//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface CSLWorkspaceTransitionCoordinator : NSObject
{
    NSMapTable *_actionToTransactionMap;
}

- (void).cxx_destruct;
- (id)allTransactions;
- (void)setTransaction:(id)arg1 forAction:(id)arg2;
- (id)transactionForAction:(id)arg1;
- (id)init;

@end

