//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CUISActivateUIApplicationViewAnimatingDelegate.h"

@class NSString, UIImageView, UIView<CSLUIHexIconView>;

@interface CSLUIApplicationSpinnerView : UIView <CUISActivateUIApplicationViewAnimatingDelegate>
{
    UIView<CSLUIHexIconView> *_iconView;
    UIImageView *_spinnerView;
    UIView *_darkeningOverlay;
    _Bool _animating;
}

- (void).cxx_destruct;
- (void)resetView;
- (void)pauseAnimations;
- (void)showDimmer;
- (void)animateSpinnerIn;
- (void)animationPercentageChanged:(float)arg1 isIcon:(_Bool)arg2;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (void)resetToDefaultState;
- (id)initWithFrame:(struct CGRect)arg1 bundleIdentifer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

