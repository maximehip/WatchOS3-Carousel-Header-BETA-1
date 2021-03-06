//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSBasicServerClient, NSString;

@interface CSLViewOnWakeEntry : NSObject
{
    _Bool _whileActiveOnly;
    NSString *_viewIdentifier;
    NSString *_identifier;
    unsigned int _priority;
    BSBasicServerClient *_owningClient;
    unsigned long long _requestTimestamp;
}

@property(nonatomic) _Bool whileActiveOnly; // @synthesize whileActiveOnly=_whileActiveOnly;
@property(nonatomic) unsigned long long requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(retain, nonatomic) BSBasicServerClient *owningClient; // @synthesize owningClient=_owningClient;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void).cxx_destruct;
- (id)description;

@end

