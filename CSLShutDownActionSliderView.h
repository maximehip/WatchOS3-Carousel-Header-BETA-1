//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLUIActionSlider.h"

@class NSString, UIColor;

@interface CSLShutDownActionSliderView : CSLUIActionSlider
{
    struct CGSize _textSize;
    UIColor *_enabledColor;
    UIColor *_disabledColor;
    UIColor *_knobEnabledColor;
    NSString *_enabledText;
    NSString *_disabledText;
}

@property(retain, nonatomic) NSString *disabledText; // @synthesize disabledText=_disabledText;
@property(retain, nonatomic) NSString *enabledText; // @synthesize enabledText=_enabledText;
@property(retain, nonatomic) UIColor *knobEnabledColor; // @synthesize knobEnabledColor=_knobEnabledColor;
@property(retain, nonatomic) UIColor *disabledColor; // @synthesize disabledColor=_disabledColor;
@property(retain, nonatomic) UIColor *enabledColor; // @synthesize enabledColor=_enabledColor;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (float)trackTextXOffset;
- (float)trackTextBaselineFromBottom;
- (struct CGRect)trackTextRect;
- (struct CGSize)_measureTextSize;
- (void)setTrackFont:(id)arg1;
- (void)setTrackText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;

@end
