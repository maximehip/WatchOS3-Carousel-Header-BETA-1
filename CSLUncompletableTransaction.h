//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSSHLTransaction.h"

@interface CSLUncompletableTransaction : IOSSHLTransaction
{
    _Bool _shouldBlueScreenOnInternalInstalls;
    _Bool _shouldStackshotTwice;
}

@property(nonatomic) _Bool shouldStackshotTwice; // @synthesize shouldStackshotTwice=_shouldStackshotTwice;
@property(nonatomic) _Bool shouldBlueScreenOnInternalInstalls; // @synthesize shouldBlueScreenOnInternalInstalls=_shouldBlueScreenOnInternalInstalls;
- (double)watchdogTimeout;
- (void)_didComplete;
- (void)_begin;
- (id)init;

@end

