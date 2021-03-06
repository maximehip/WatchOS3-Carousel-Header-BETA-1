//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSDate, NSTimer;

@interface CSLScreenEdgeChevronView : UIView
{
    NSTimer *_returnToFlatTimer;
    NSDate *_lastScrollTime;
    CAShapeLayer *_chevronLayer;
    unsigned int _direction;
}

+ (struct CGRect)chevronRect;
+ (float)containerHeight;
@property(readonly, nonatomic) unsigned int direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)_updatePath:(struct CGPath *)arg1 forDirection:(unsigned int)arg2;
- (void)_updateChevron;
- (void)_handleFlatTimer:(id)arg1;
- (void)setDirection:(unsigned int)arg1 flattenAfterInterval:(_Bool)arg2;
- (void)setDirection:(unsigned int)arg1;
- (void)setDirection:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

