//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet;

@interface IOSSHLCopyingCacheSet : NSObject
{
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

- (void).cxx_destruct;
- (id)description;
- (id)immutableSet;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;

@end

