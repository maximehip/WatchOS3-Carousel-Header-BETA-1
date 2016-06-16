//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSArray, NSMutableArray, NSString;

@interface CSLClockAssertion : NSObject <BSDescriptionProviding>
{
    NSMutableArray *_childAssertions;
    _Bool _enabled;
    unsigned int _assertionType;
    id <CSLClockAssertionDelegate> _delegate;
    NSString *_name;
    NSString *_NTKPauseReason;
    CSLClockAssertion *_parentAssertion;
}

+ (void)_enumerateEnabledHierarchyForAssertion:(id)arg1 stop:(_Bool *)arg2 block:(CDUnknownBlockType)arg3;
@property(nonatomic) CSLClockAssertion *parentAssertion; // @synthesize parentAssertion=_parentAssertion;
@property(copy, nonatomic) NSString *NTKPauseReason; // @synthesize NTKPauseReason=_NTKPauseReason;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <CSLClockAssertionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *childAssertions; // @synthesize childAssertions=_childAssertions;
@property(nonatomic) unsigned int assertionType; // @synthesize assertionType=_assertionType;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_hierarchyUpdated;
- (void)_removeChildAssertion:(id)arg1;
- (void)enumerateEnabledAssertionsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)removeFromParentAssertion;
- (void)addChildAssertion:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
