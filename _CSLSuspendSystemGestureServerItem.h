//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _CSLSuspendSystemGestureServerItem : NSObject
{
    int _pid;
    NSString *_assertionID;
    id <BSXPCServerClient> _owningClient;
}

@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSString *assertionID; // @synthesize assertionID=_assertionID;
@property(retain, nonatomic) id <BSXPCServerClient> owningClient; // @synthesize owningClient=_owningClient;
- (void).cxx_destruct;
- (id)initWithAssertionID:(id)arg1 pid:(int)arg2;

@end

