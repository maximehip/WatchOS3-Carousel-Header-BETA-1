//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BLTBulletinDistributorSystemStateProvider.h"

@class NSString;

@interface CSLBulletinDistributorSystemStateProvider : NSObject <BLTBulletinDistributorSystemStateProvider>
{
}

- (void)hasBulletinWithMatchID:(id)arg1 sectionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isSectionCoordinated:(id)arg1 subType:(int)arg2;
- (_Bool)isAlertableBulletinInSection:(id)arg1 subType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

