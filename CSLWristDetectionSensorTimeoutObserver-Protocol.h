//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CSLWristDetectionSensor;

@protocol CSLWristDetectionSensorTimeoutObserver
- (void)wristDetectionSensorDidReleaseLockAssertion:(CSLWristDetectionSensor *)arg1;
- (void)wristDetectionSensorWillReleaseLockAssertion:(CSLWristDetectionSensor *)arg1;
- (void)wristDetectionSensorDidReceiveProximityEvent:(CSLWristDetectionSensor *)arg1;
- (void)wristDetectionSensorDidTimeout:(CSLWristDetectionSensor *)arg1;
- (void)wristDetectionSensorDidBegin:(CSLWristDetectionSensor *)arg1;
@end
