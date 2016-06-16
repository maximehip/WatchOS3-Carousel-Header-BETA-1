//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICCrownInputSequencer;

@protocol PUICCrownInputSequencerDelegate <NSObject>

@optional
- (void)crownInputSequencerAverageCrownVelocityDidChange:(PUICCrownInputSequencer *)arg1;
- (void)crownInputSequencerDidEndDecelerating:(PUICCrownInputSequencer *)arg1;
- (void)crownInputSequencerWillBeginDecelerating:(PUICCrownInputSequencer *)arg1;
- (void)crownInputSequencerDidBecomeIdle:(PUICCrownInputSequencer *)arg1 willDecelerate:(_Bool)arg2;
- (void)crownInputSequencerWillBecomeIdle:(PUICCrownInputSequencer *)arg1 withCrownVelocity:(double)arg2 targetOffset:(inout double *)arg3;
- (_Bool)crownInputSequencer:(PUICCrownInputSequencer *)arg1 shouldRubberBandAtBoundary:(int)arg2;
- (void)crownInputSequencerOffsetDidChange:(PUICCrownInputSequencer *)arg1;
- (void)crownInputSequencerIdleDidChange:(PUICCrownInputSequencer *)arg1;
- (void)crownInputSequencer:(PUICCrownInputSequencer *)arg1 offsetDidReachBoundary:(int)arg2;
@end

