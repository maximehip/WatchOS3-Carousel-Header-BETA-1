//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface IOSSHLDefaultImageInfo : NSObject
{
    _Bool _hasSnapshot;
    _Bool _isDownscaled;
    int _launchingInterfaceOrientation;
    float _launchingScale;
    int _originalOrientation;
    int _currentOrientation;
    UIImage *_image;
    struct CGSize _launchingSize;
}

@property(nonatomic) _Bool isDownscaled; // @synthesize isDownscaled=_isDownscaled;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool hasSnapshot; // @synthesize hasSnapshot=_hasSnapshot;
@property(nonatomic) int currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) int originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) float launchingScale; // @synthesize launchingScale=_launchingScale;
@property(nonatomic) int launchingInterfaceOrientation; // @synthesize launchingInterfaceOrientation=_launchingInterfaceOrientation;
@property(nonatomic) struct CGSize launchingSize; // @synthesize launchingSize=_launchingSize;
- (void).cxx_destruct;
- (id)description;

@end

