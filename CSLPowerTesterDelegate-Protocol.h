//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLPowerTester, CSLSPowerTest;

@protocol CSLPowerTesterDelegate <NSObject>
- (void)tester:(CSLPowerTester *)arg1 cancelled:(CSLSPowerTest *)arg2;
- (void)tester:(CSLPowerTester *)arg1 completed:(CSLSPowerTest *)arg2;
@end

