//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CSLModalAppManager : NSObject
{
    _Bool _initialTransactionComplete;
    _Bool _initialActivationComplete;
    NSString *_bundleID;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _firstActivatedBlock;
    CDUnknownBlockType _activatedBlock;
    CDUnknownBlockType _deactivatedBlock;
    CDUnknownBlockType _exitedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType exitedBlock; // @synthesize exitedBlock=_exitedBlock;
@property(copy, nonatomic) CDUnknownBlockType deactivatedBlock; // @synthesize deactivatedBlock=_deactivatedBlock;
@property(copy, nonatomic) CDUnknownBlockType activatedBlock; // @synthesize activatedBlock=_activatedBlock;
@property(copy, nonatomic) CDUnknownBlockType firstActivatedBlock; // @synthesize firstActivatedBlock=_firstActivatedBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)_modalAppActivationStateDidChange:(id)arg1;
- (void)_modalAppDidExit:(id)arg1;
- (void)_unregisterModalAppLifecycleNotifications;
- (void)_registerForModalAppLifecycleNotifications;
- (void)invalidate;
- (void)dealloc;
- (void)launch;

@end

