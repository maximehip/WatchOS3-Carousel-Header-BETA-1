//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface IOSSHLApplicationEventsStoreEvent : NSObject
{
    unsigned int _eventType;
    unsigned int _reason;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;

@end

