//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _CSLMinimumBacklightAssertion : NSObject
{
    NSString *_reason;
    float _nits;
}

+ (id)assertionWithReason:(id)arg1 nits:(float)arg2;
@property(nonatomic) float nits; // @synthesize nits=_nits;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;

@end

