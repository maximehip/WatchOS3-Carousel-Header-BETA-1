//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSMutableSet, NSSet, NSString;

@interface CSLWorkspaceActionGroup : NSObject <BSDescriptionProviding>
{
    NSMutableSet *_actions;
}

+ (id)groupWithAction:(id)arg1;
@property(retain, nonatomic) NSSet *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)addAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

