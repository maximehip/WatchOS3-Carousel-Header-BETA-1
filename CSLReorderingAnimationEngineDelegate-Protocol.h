//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLReorderingAnimation, CSLReorderingAnimationEngine;

@protocol CSLReorderingAnimationEngineDelegate <NSObject>
- (void)reorderingAnimationEngine:(CSLReorderingAnimationEngine *)arg1 finishedAnimation:(CSLReorderingAnimation *)arg2;
- (void)setNeedsLayout;
@end
