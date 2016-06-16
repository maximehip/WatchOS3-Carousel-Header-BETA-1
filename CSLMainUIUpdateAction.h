//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLWorkspaceAction.h"

#import "BSDescriptionProviding.h"

@class CSLActivateApplicationRequest, CSLLauncherAnimationSettings, IOSSHLApplication, NSString;

@interface CSLMainUIUpdateAction : CSLWorkspaceAction <BSDescriptionProviding>
{
    _Bool _animated;
    int _interactive;
    unsigned int _navigationType;
    CSLActivateApplicationRequest *_applicationRequest;
    CSLLauncherAnimationSettings *_launcherSettings;
    int _wantsOverlayDismissal;
    int _isForApplicationExit;
    IOSSHLApplication *_exitedApplication;
    unsigned long long _identifier;
}

+ (id)actionWithNavigationType:(unsigned int)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) IOSSHLApplication *exitedApplication; // @synthesize exitedApplication=_exitedApplication;
@property(nonatomic) int isForApplicationExit; // @synthesize isForApplicationExit=_isForApplicationExit;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int wantsOverlayDismissal; // @synthesize wantsOverlayDismissal=_wantsOverlayDismissal;
@property(retain, nonatomic) CSLLauncherAnimationSettings *launcherSettings; // @synthesize launcherSettings=_launcherSettings;
@property(retain, nonatomic) CSLActivateApplicationRequest *applicationRequest; // @synthesize applicationRequest=_applicationRequest;
@property(nonatomic) unsigned int navigationType; // @synthesize navigationType=_navigationType;
@property(nonatomic, getter=isInteractive) int interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
