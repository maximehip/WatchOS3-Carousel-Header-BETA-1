//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol CSLActivityDateSource <NSObject>
@property(readonly, nonatomic) NSDate *date;
- (void)removeObserver:(id <CSLActivityDateSourceObserver>)arg1;
- (void)addObserver:(id <CSLActivityDateSourceObserver>)arg1;
@end

