//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CUISAlertBackgroundView, NSMutableArray, NSPointerArray, UIScrollView<PUICCrownInputSequencerDataSource>, UIView, _UIBackdropViewSettings;

@interface CSLAlertDialogViewController : UIViewController
{
    UIScrollView<PUICCrownInputSequencerDataSource> *_scrollView;
    UIView *_headerView;
    UIView *_contentView;
    UIView *_buttonContainerView;
    CUISAlertBackgroundView *_contentBackdropView;
    _UIBackdropViewSettings *_backdropSettingsOn;
    NSPointerArray *_buttonViews;
    NSMutableArray *_createdButtonViews;
    unsigned int _delegateHasButtonPressed:1;
    unsigned int _delegateHasEntranceWillApply:1;
    unsigned int _delegateHasEntranceDidApply:1;
    unsigned int _delegateHasExitWillApply:1;
    unsigned int _delegateHasExitDidApply:1;
    unsigned int _delegateHasWillLayoutHeader:1;
    unsigned int _delegateHasDidLayoutHeader:1;
    unsigned int _delegateHasWillLayoutContent:1;
    unsigned int _delegateHasDidLayoutContent:1;
    unsigned int _delegateHasWillLayoutButton:1;
    unsigned int _delegateHasDidLayoutButton:1;
    unsigned int _delegateHasUserActivityDetected:1;
    unsigned int _dataSourceHasHeaderView:1;
    unsigned int _dataSourceHasHeaderText:1;
    unsigned int _dataSourceHasHeaderTextTint:1;
    unsigned int _dataSourceHasHeaderFont:1;
    unsigned int _dataSourceHasContentView:1;
    unsigned int _dataSourceHasContentText:1;
    unsigned int _dataSourceHasContentTextTint:1;
    unsigned int _dataSourceHasContentFont:1;
    unsigned int _dataSourceHasNumberOfButtons:1;
    unsigned int _dataSourceHasButtonView:1;
    unsigned int _dataSourceHasButtonText:1;
    unsigned int _dataSourceHasButtonTextTint:1;
    unsigned int _dataSourceHasButtonFont:1;
    unsigned int _createdHeaderView:1;
    unsigned int _createdContentView:1;
    unsigned int _isCompactDevice:1;
    id <CSLAlertDialogViewControllerDelegate> _delegate;
    id <CSLAlertDialogViewControllerDataSource> _dataSource;
}

@property(nonatomic) __weak id <CSLAlertDialogViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CSLAlertDialogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateOfUserActivity;
- (void)_layoutScrollView;
- (void)_layoutAlert;
- (void)_layoutContentBackdrop;
- (void)_layoutViews;
- (void)_didTapButton:(id)arg1;
- (void)_createButtonViewsWithDataSource:(id)arg1;
- (void)_createContentViewWithDataSource:(id)arg1;
- (void)_createHeaderViewWithDataSource:(id)arg1;
- (void)scrollToBottom:(_Bool)arg1;
- (void)scrollToTop:(_Bool)arg1;
- (void)reloadData;
- (void)dismissAlert:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)displayAlert:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_destroyTopLevelViews;
- (void)_createTopLevelViewsIfNecessary;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
