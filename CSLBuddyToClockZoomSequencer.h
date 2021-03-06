//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLLauncherZoomSequencer.h"

@class PUICClientSideAnimation;

@interface CSLBuddyToClockZoomSequencer : CSLLauncherZoomSequencer
{
    _Bool _firstAnimationComplete;
    _Bool _complete;
    id <CSLBuddyToClockZoomSequencerAnimationDelegate> _animationDelegate;
    float _speed;
    float _currentZoom;
    PUICClientSideAnimation *_animation;
}

@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(retain, nonatomic) PUICClientSideAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool firstAnimationComplete; // @synthesize firstAnimationComplete=_firstAnimationComplete;
@property(nonatomic) float currentZoom; // @synthesize currentZoom=_currentZoom;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) __weak id <CSLBuddyToClockZoomSequencerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (float)zoom;
- (void)_performBuddyToMazdaAnimationWithProgress:(float)arg1;
- (void)_performMazdaToClockAnimationWithProgress:(float)arg1;
- (void)didCompleteAnimationForMode:(unsigned int)arg1;
- (void)didChangeProgress:(float)arg1 forMode:(unsigned int)arg2;
- (void)_didCompleteFirstAnimation;
- (void)_animationTick:(float)arg1;
- (void)_layoutDebugViewForProgress:(float)arg1;
- (void)endAnimation:(_Bool)arg1;
- (void)completeWithSnap;
- (void)begin;
- (void)dealloc;
- (id)init;

@end

