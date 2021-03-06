//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CSLBulletin, CSLBulletinAttachment, NSArray, NSMutableArray;

@interface CSLBulletinAlertItem : NSObject <NSCopying>
{
    NSMutableArray *_additionalBulletins;
    _Bool _shouldPlayLightsAndSirens;
    _Bool _actionTaken;
    _Bool _bulletinRemoved;
    CSLBulletin *_seedBulletin;
    CSLBulletinAttachment *_attachment;
    double _buildTimeout;
}

+ (id)_formattedDecimalStringForNumber:(id)arg1;
+ (id)itemWithItem:(id)arg1 withoutBulletinIDs:(id)arg2;
+ (id)itemWithItem:(id)arg1 withoutBulletin:(id)arg2;
+ (id)itemWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 attachment:(id)arg3;
+ (void)load;
@property(nonatomic) double buildTimeout; // @synthesize buildTimeout=_buildTimeout;
@property(nonatomic) _Bool bulletinRemoved; // @synthesize bulletinRemoved=_bulletinRemoved;
@property(nonatomic) _Bool actionTaken; // @synthesize actionTaken=_actionTaken;
@property(nonatomic) _Bool shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
@property(retain, nonatomic) CSLBulletinAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) CSLBulletin *seedBulletin; // @synthesize seedBulletin=_seedBulletin;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addAdditionalBulletins:(id)arg1;
- (_Bool)containsBulletinIDs:(id)arg1;
- (_Bool)containsBulletin:(id)arg1;
- (id)sourceDate;
- (id)localSectionID;
- (id)sectionID;
- (id)sound;
- (id)message;
- (id)appColor;
- (id)subtitle;
- (id)title;
- (id)appName;
@property(readonly, nonatomic) NSArray *additionalBulletins;
- (id)_initWithItem:(id)arg1 withoutBulletinIDs:(id)arg2;
- (id)_initWithItem:(id)arg1 withoutBulletin:(id)arg2;
- (id)_initWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 attachment:(id)arg3;
- (_Bool)bulletinAlertShouldOverrideDoNotDisturb;
- (id)description;

@end

