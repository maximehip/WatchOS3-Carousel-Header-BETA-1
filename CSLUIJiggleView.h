//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CSLUIJiggleView : UIView
{
    struct CGPoint _unjitterPoint;
    _Bool _isJiggling;
}

+ (id)makeTransformAnimation;
+ (id)makePositionAnimation;
@property(nonatomic, setter=setJiggling:) _Bool isJiggling; // @synthesize isJiggling=_isJiggling;
- (void)setFrame:(struct CGRect)arg1;
- (void)endJiggling;
- (void)startJiggling;
- (id)initWithFrame:(struct CGRect)arg1;

@end
