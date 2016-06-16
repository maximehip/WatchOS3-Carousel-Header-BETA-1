//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLUIActionSlider, UIGestureRecognizer;

@protocol CSLUIActionSliderDelegate <NSObject>

@optional
- (void)actionSliderDidCancelSlide:(CSLUIActionSlider *)arg1;
- (void)actionSliderDidCompleteSlide:(CSLUIActionSlider *)arg1;
- (void)actionSlider:(CSLUIActionSlider *)arg1 didUpdateSlideWithValue:(float)arg2;
- (void)actionSliderDidBeginSlide:(CSLUIActionSlider *)arg1;
- (_Bool)actionSlider:(CSLUIActionSlider *)arg1 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg2;
@end

