//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLWorkspaceAction.h"

#import "BSDescriptionProviding.h"

@class IOSSHLApplication, NSDictionary, NSSet, NSString;

@interface CSLActivateApplicationRequest : CSLWorkspaceAction <BSDescriptionProviding>
{
    _Bool _hasSentHactivationResult;
    CDUnknownBlockType _resultBlock;
    IOSSHLApplication *_application;
    unsigned int _activationReason;
    NSSet *_actions;
    NSDictionary *_appAnnotation;
}

+ (id)requestForApplication:(id)arg1 actions:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *appAnnotation; // @synthesize appAnnotation=_appAnnotation;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(nonatomic) unsigned int activationReason; // @synthesize activationReason=_activationReason;
@property(retain, nonatomic) IOSSHLApplication *application; // @synthesize application=_application;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)sendActivationResultErrorCode:(int)arg1;
- (_Bool)hasSentActivationResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
