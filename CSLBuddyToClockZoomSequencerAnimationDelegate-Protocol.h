//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLBuddyToClockZoomSequencer;

@protocol CSLBuddyToClockZoomSequencerAnimationDelegate <NSObject>
- (void)sequencer:(CSLBuddyToClockZoomSequencer *)arg1 didCompleteAnimationForMode:(unsigned int)arg2;
- (void)sequencer:(CSLBuddyToClockZoomSequencer *)arg1 didChangeProgress:(float)arg2 forAnimationMode:(unsigned int)arg3;
- (void)sequencerWillBegin:(CSLBuddyToClockZoomSequencer *)arg1;
@end

