//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSWatchdog.h"

@class BSTransaction;

@interface IOSSHLTransactionWatchdog : BSWatchdog
{
    BSTransaction *_transaction;
}

@property(readonly, nonatomic) BSTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)_watchdogTimerFired;
@property(readonly, nonatomic) _Bool hasBeenInvalidated;
- (void)invalidate;
- (id)initWithTransaction:(id)arg1;

// Remaining properties
@property(retain, nonatomic) id <IOSSHLTransactionWatchdogDelegate> delegate; // @dynamic delegate;

@end

