//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSString;

@interface CSLPrelaunchAssertion : NSObject
{
    NSString *_bundleID;
    int _pid;
    unsigned int _flags;
    unsigned int _reason;
    BKSProcessAssertion *_assertion;
    CDUnknownBlockType _invalidationHandler;
}

+ (id)prelaunchAssertionWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 creationHandler:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)invalidate;
- (id)_initWithBundleID:(id)arg1 pid:(int)arg2 flags:(unsigned int)arg3 reason:(unsigned int)arg4 creationHandler:(CDUnknownBlockType)arg5 invalidationHandler:(CDUnknownBlockType)arg6;
- (unsigned int)_nextSequenceNumber;

@end

