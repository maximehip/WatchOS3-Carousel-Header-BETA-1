//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTKClockViewController.h"

#import "CUISSiriContextProvider.h"
#import "NCClockWindowTrackingViewDelegate.h"

@class NSString, UIViewController<NCClockContainerViewController>, UIViewController<NTKClockIconZoomAnimator>;

@interface NCClockViewController : NTKClockViewController <NCClockWindowTrackingViewDelegate, CUISSiriContextProvider>
{
    UIViewController<NTKClockIconZoomAnimator> *_borrowedIconZoomController;
    _Bool _clockPaused;
    UIViewController<NCClockContainerViewController> *_defaultContainer;
}

+ (id)sharedClockViewController;
@property(nonatomic) __weak UIViewController<NCClockContainerViewController> *defaultContainer; // @synthesize defaultContainer=_defaultContainer;
- (void).cxx_destruct;
- (id)createSiriContext;
- (void)windowTrackingView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)restoreIconZoomController;
- (id)borrowIconZoomController;
- (id)iconZoomControllerIfBorrowed;
- (_Bool)isIconZoomControllerBorrowed;
- (void)didResumeUpdates;
- (void)didPauseUpdatesWithReasons:(id)arg1;
- (void)setPauseReasons:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStatusViewControllerClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

