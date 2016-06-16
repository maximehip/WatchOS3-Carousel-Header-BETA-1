//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _CSLBacklightAssertion : NSObject
{
    _Bool _preventsGestures;
    int _reasonNumber;
    NSString *_reason;
    double _timeoutSeconds;
}

+ (id)assertionWithReason:(id)arg1 number:(int)arg2 preventsGestures:(_Bool)arg3 timeoutSeconds:(double)arg4;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(nonatomic) _Bool preventsGestures; // @synthesize preventsGestures=_preventsGestures;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) int reasonNumber; // @synthesize reasonNumber=_reasonNumber;
- (void).cxx_destruct;
- (id)toDictionary;

@end

