//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLWorkspaceAction.h"

#import "BSDescriptionProviding.h"

@class IOSSHLApplication, NSString;

@interface CSLHandleBadSignatureAction : CSLWorkspaceAction <BSDescriptionProviding>
{
    IOSSHLApplication *_application;
    int _signatureState;
}

@property(readonly, nonatomic) int signatureState; // @synthesize signatureState=_signatureState;
@property(readonly, nonatomic) IOSSHLApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithApplication:(id)arg1 signatureState:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

