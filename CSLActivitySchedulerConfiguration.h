//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CSLActivitySchedulerConfiguration : NSObject
{
    id <CSLActivityDateSource> _dateSource;
    id <CSLActivityTimerSource> _timerSource;
    NSArray *_policies;
    id <CSLSchedulerContext> _context;
}

@property(retain, nonatomic) id <CSLSchedulerContext> context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property(retain, nonatomic) id <CSLActivityTimerSource> timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) id <CSLActivityDateSource> dateSource; // @synthesize dateSource=_dateSource;
- (void).cxx_destruct;

@end

