//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CSLControlCenterUserActivityAssertion : NSObject
{
    _Bool _active;
    unsigned int _userActivityAssertionType;
    NSString *_reason;
    id <CSLControlCenterUserActivityAssertionDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLControlCenterUserActivityAssertionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned int userActivityAssertionType; // @synthesize userActivityAssertionType=_userActivityAssertionType;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)description;
- (void)_setNeedsEvaluation;
- (unsigned int)resolvedUserActivityAssertionType;
- (id)initWithAssertionType:(unsigned int)arg1 name:(id)arg2;
- (id)init;

@end

