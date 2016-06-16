//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLFirstResponderEnabledViewController.h"

#import "CSLPIButtonHandlerProtocol.h"
#import "CSLUIActionSliderDelegate.h"

@class CSLShapeView, CSLShutDownActionSliderView, NSMutableArray, NSString, ORBAnimator, UIButton, UIView;

@interface CSLShutdownSliderBasedAlertViewController : CSLFirstResponderEnabledViewController <CSLUIActionSliderDelegate, CSLPIButtonHandlerProtocol>
{
    _Bool _isCompactDevice;
    _Bool _canDeactivateFromButtons;
    _Bool _disableButtonsAfterSliderCompleted;
    _Bool _sosSliderAnimationCanceled;
    _Bool _appearanceAnimationsCanceled;
    double _longButtonPressBegan;
    UIButton *_cancelButton;
    CSLShapeView *_darkeningUnderlayView;
    UIView *_backdropView;
    UIView *_fullScreenDimmingView;
    UIView *_scalingView;
    ORBAnimator *_orbAnimator;
    _Bool _orbZoomActive;
    _Bool _animatedSlidersOnViewDidAppear;
    int _sliderItemsCount;
    CSLShutDownActionSliderView *_powerDownSlider;
    CSLShutDownActionSliderView *_medicalIDSlider;
    CSLShutDownActionSliderView *_sosSlider;
    NSMutableArray *_sliders;
    id <CSLShutdownAlertProviderDelegate> _alertProviderDelegate;
    id <CSLShutdownContainerViewControllerDelegate> _containerDelegate;
}

@property(nonatomic) __weak id <CSLShutdownContainerViewControllerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) __weak id <CSLShutdownAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate=_alertProviderDelegate;
- (void).cxx_destruct;
- (void)animateSliderToCompletion:(CDUnknownBlockType)arg1;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(float)arg2;
- (void)_updateExclusionPathForSlider:(id)arg1;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (_Bool)actionSlider:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (void)killTopAppBecauseButton:(unsigned int)arg1 eventType:(unsigned int)arg2;
- (void)_reportLongPressButtonMetric;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (void)_ecoModeButtonPressed;
- (void)_handleBacklightChangeForLocking;
- (_Bool)isInBuddy;
- (id)imageNamed:(id)arg1;
- (void)_endOrbZoom:(_Bool)arg1;
- (void)_setOrbZoomProgress:(float)arg1;
- (void)_beginOrbZoom;
- (void)_sosSliderButtonPressed;
- (void)_animateSOSSliderToPosition:(float)arg1 withText:(id)arg2 delay:(float)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_animateSOSSliderWithDelay:(double)arg1;
- (void)_animateSOSSlider;
- (void)_cancelSOSSliderAnimation;
- (_Bool)sosSliderEnabled;
- (_Bool)showSOSSlider;
- (id)sosSlider;
- (void)_medicalIDButtonPressed;
- (_Bool)medicalIDCardEnabled;
- (_Bool)showMedicalIDSlider;
- (id)medicalIDSlider;
- (void)_powerSliderButtonPressed;
- (void)batteryStateChanged:(id)arg1;
- (_Bool)powerSliderEnabled;
- (id)powerDownSlider;
- (void)_cancelButtonPressed;
- (id)cancelButton;
- (float)cancelButtonFontSize;
- (float)cancelButtonFrameHeight;
- (struct CGRect)firstSliderFrame;
- (float)trackBackgroundHeight;
- (float)knobWidth;
- (float)sliderSpacing;
- (int)sliderCount;
- (float)fontSize;
- (id)sosKnobBackgroundColor;
- (id)sliderBackgroundColor;
- (void)endAppearanceAnimations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)showViews:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configureSliderDefaults:(id)arg1;
- (void)setupRecognizersFailureMap;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
