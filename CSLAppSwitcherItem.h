//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CSLAppSwitcherItem : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_displayName;
    unsigned int _type;
}

@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToAppSwitcherItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) _Bool isNowPlayingItem;
@property(readonly, nonatomic) _Bool isRecentItem;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isApplication;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 type:(unsigned int)arg3;

@end

