//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class NSTimer, UITouch;

@interface CSLIconTapGestureRecognizer : UIGestureRecognizer
{
    UITouch *_trackingTouch;
    struct CGPoint _startLocation;
    NSTimer *_longPressTimer;
    _Bool _isLongPress;
    _Bool _longPressEnabled;
    double _longPressDuration;
}

@property(nonatomic) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property(nonatomic) double longPressDuration; // @synthesize longPressDuration=_longPressDuration;
@property(readonly, nonatomic) _Bool isLongPress; // @synthesize isLongPress=_isLongPress;
- (void).cxx_destruct;
- (void)_longPressTimerFired:(id)arg1;
- (void)_cleanUpTimer;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
