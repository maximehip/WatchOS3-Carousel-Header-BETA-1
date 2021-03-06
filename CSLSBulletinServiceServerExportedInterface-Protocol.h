//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol CSLSBulletinServiceServerExportedInterface <NSObject>
- (void)clearAllBulletinsWithCompletion:(void (^)(void))arg1;
- (void)clearBulletinWithSectionID:(NSString *)arg1 publisherMatchID:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)removeBulletinWithSectionID:(NSString *)arg1 publisherMatchID:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)getLockedBulletinsInPipelineStepActorWithClassName:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)addBulletinWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2 message:(NSString *)arg3 delayLocal:(unsigned int)arg4 delayMirrored:(unsigned int)arg5 completion:(void (^)(void))arg6;
@end

