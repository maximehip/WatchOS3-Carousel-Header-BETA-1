//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CSLSafeMutableArray : NSObject
{
    NSMutableArray *_array;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

