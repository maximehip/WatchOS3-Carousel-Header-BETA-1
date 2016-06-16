//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface CSLObliterationConfirmationViewController : UIViewController
{
    UIView *_backdropView;
    id <CSLShutdownAlertProviderDelegate> _alertProviderDelegate;
    id <CSLShutdownContainerViewControllerDelegate> _containerDelegate;
}

@property(nonatomic) __weak id <CSLShutdownContainerViewControllerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) __weak id <CSLShutdownAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate=_alertProviderDelegate;
- (void).cxx_destruct;
- (void)cancelObliteration;
- (void)performObliteration;
- (void)_powerStatusUpdated:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

