//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLBulletin.h"

@class CSLNotificationCenterIcon;

@interface CSLNotificationCenterBulletin : CSLBulletin
{
    _Bool _presentable;
    float _cellHeight;
    CSLNotificationCenterIcon *_icon;
}

+ (id)bulletinWithBulletin:(id)arg1 icon:(id)arg2;
@property(retain, nonatomic) CSLNotificationCenterIcon *icon; // @synthesize icon=_icon;
@property(nonatomic, getter=isPresentable) _Bool presentable; // @synthesize presentable=_presentable;
@property(nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (id)initWithBulletin:(id)arg1 icon:(id)arg2;

@end
