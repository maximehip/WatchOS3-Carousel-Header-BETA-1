//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLBulletin, NSObject<OS_dispatch_queue>, NSPredicate, NSSet;

@protocol CSLBulletinStateStoreProtocol <NSObject>
- (void)removeStateStoreObserver:(id <CSLBulletinStateStoreObserver>)arg1;
- (void)addStateStoreObserver:(id <CSLBulletinStateStoreObserver>)arg1;
- (void)manageStatesForBulletins:(NSSet *)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 withBlock:(_Bool (^)(NSDictionary *))arg3 completion:(void (^)(void))arg4;
- (void)manageStateForBulletin:(CSLBulletin *)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 withBlock:(_Bool (^)(CSLBulletinState *))arg3 completion:(void (^)(void))arg4;
- (void)createStateForBulletinIfNecessary:(CSLBulletin *)arg1 withKeepAliveCount:(unsigned int)arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3 withBlock:(_Bool (^)(CSLBulletinState *))arg4 completion:(void (^)(void))arg5;
- (void)anyBulletinMatches:(NSPredicate *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(_Bool))arg3;
- (void)removeStateForBulletin:(CSLBulletin *)arg1;
@end

