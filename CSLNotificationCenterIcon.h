//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface CSLNotificationCenterIcon : NSObject
{
    UIImage *_image;
    unsigned int _iconStyle;
}

+ (id)iconWithImage:(id)arg1 iconStyle:(unsigned int)arg2;
@property(nonatomic) unsigned int iconStyle; // @synthesize iconStyle=_iconStyle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 iconStyle:(unsigned int)arg2;

@end
