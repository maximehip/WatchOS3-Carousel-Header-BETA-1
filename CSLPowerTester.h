//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLAppPrelauncher, CSLSPowerTest, NSObject<CSLPowerTesterDelegate>;

@interface CSLPowerTester : NSObject
{
    _Bool _cancelled;
    NSObject<CSLPowerTesterDelegate> *_delegate;
    CSLSPowerTest *_powerTest;
    CSLAppPrelauncher *_prelauncher;
}

@property(retain, nonatomic) CSLAppPrelauncher *prelauncher; // @synthesize prelauncher=_prelauncher;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CSLSPowerTest *powerTest; // @synthesize powerTest=_powerTest;
@property(nonatomic) __weak NSObject<CSLPowerTesterDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)_snapshotApp:(id)arg1;
- (void)_launchApp:(id)arg1;
- (void)start;
- (id)initWithTest:(id)arg1 andDelegate:(id)arg2;

@end

