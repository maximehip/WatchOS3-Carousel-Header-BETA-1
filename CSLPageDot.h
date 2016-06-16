//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class UIView;

@interface CSLPageDot : CALayer
{
    _Bool _hallow;
    float _minimizedDotPosition;
    float _dotSlide;
    float _scale;
    UIView *_hallowDotView;
}

@property(retain, nonatomic) UIView *hallowDotView; // @synthesize hallowDotView=_hallowDotView;
@property(nonatomic, getter=isHallow) _Bool hallow; // @synthesize hallow=_hallow;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float dotSlide; // @synthesize dotSlide=_dotSlide;
@property(nonatomic) float minimizedDotPosition; // @synthesize minimizedDotPosition=_minimizedDotPosition;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setHallow:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)compareMinimizedDotPosition:(float)arg1 dotSlide:(float)arg2 scale:(float)arg3;
- (id)init;

@end

