//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLBulletin;

@interface CSLBulletinPipelineStepBulletinWithFeed : NSObject
{
    CSLBulletin *_bulletin;
    unsigned int _feed;
}

+ (id)activeBulletinWithBulletin:(id)arg1 feed:(unsigned int)arg2;
@property(nonatomic) unsigned int feed; // @synthesize feed=_feed;
@property(retain, nonatomic) CSLBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;
- (id)description;

@end

