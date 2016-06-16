//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSLock, NSObject<OS_dispatch_queue>;

@interface CSLActivityTimer : NSObject
{
    _Bool _valid;
    NSDate *_fireDate;
    id _context;
    CDUnknownBlockType _invalidationHandler;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _leewayPolicy;
    CDUnknownBlockType _handler;
    NSLock *_lock;
}

@property(readonly) NSLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) unsigned int leewayPolicy; // @synthesize leewayPolicy=_leewayPolicy;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)invalidate;
- (void)fire;
- (id)initWithFireDate:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3 leewayPolicy:(unsigned int)arg4;
- (id)initWithFireDate:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end
