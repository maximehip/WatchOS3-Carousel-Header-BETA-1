//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink;

@interface CSLUIApplicationIconDownloadProgressView : UIView
{
    CADisplayLink *_displayLink;
    float _previousDisplayedFraction;
    float _displayedFraction;
    float _outerRadius;
    float _innerRadius;
    float _spaceRadius;
}

+ (id)_pieImageAtFraction:(float)arg1 outerRadius:(float)arg2 innerRadius:(float)arg3 spaceRadius:(float)arg4;
+ (id)_pieImagesMemoryPoolForRadius:(float)arg1;
- (void).cxx_destruct;
- (void)_drawPieWithCenter:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)animatorDisplayLinkFired:(id)arg1;
- (void)updateDownloadProgress:(double)arg1;
- (void)cleanupAnimator;
- (void)setupAnimator;
- (id)initWithFrame:(struct CGRect)arg1 outerRadius:(float)arg2 innerRadius:(float)arg3 spaceRadius:(float)arg4;

@end
