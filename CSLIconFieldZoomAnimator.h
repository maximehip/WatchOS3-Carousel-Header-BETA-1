//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink;

@interface CSLIconFieldZoomAnimator : NSObject
{
    CADisplayLink *_displayLink;
    double _springTimeZero;
    float _springA;
    float _springB;
    float _lastValue;
    double _timeToActivateSpring;
    float _deltaTimeToActivateSpring;
    _Bool _isAnimating;
    _Bool _springActive;
    _Bool _criticallyDamped;
    float _initialSpringDelaySeconds;
    float _currentValue;
    float _currentVelocity;
    float _targetValue;
    float _naturalFreqency;
    float _dampingRatio;
    float _dampedFrequency;
    CDUnknownBlockType _applier;
    CDUnknownBlockType _completion;
    float _interactiveTargetValue;
}

@property(nonatomic) float interactiveTargetValue; // @synthesize interactiveTargetValue=_interactiveTargetValue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType applier; // @synthesize applier=_applier;
@property(nonatomic) float dampedFrequency; // @synthesize dampedFrequency=_dampedFrequency;
@property(nonatomic) float dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(nonatomic) float naturalFreqency; // @synthesize naturalFreqency=_naturalFreqency;
@property(nonatomic) float targetValue; // @synthesize targetValue=_targetValue;
@property(nonatomic) float currentVelocity; // @synthesize currentVelocity=_currentVelocity;
@property(nonatomic) float currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) float initialSpringDelaySeconds; // @synthesize initialSpringDelaySeconds=_initialSpringDelaySeconds;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)finishAnimating;
- (void)animatorDisplayLinkFired:(id)arg1;
- (void)tickleIdle;
- (void)resetTimeToActivateSpring;
- (void)applySpringForTime:(double)arg1;
- (void)calculateSpringAnBForTime:(double)arg1;
- (void)setSpringTargetValue:(float)arg1 naturalFrequency:(float)arg2 dampingRatio:(float)arg3 dampedFrequency:(float)arg4;
- (void)setSpringCurrentValue:(float)arg1 currentVelocity:(float)arg2;
- (void)stopAnimator;
- (void)startAnimator;
- (void)cleanupAnimator;
- (void)setupAnimator;
- (id)init;

@end

