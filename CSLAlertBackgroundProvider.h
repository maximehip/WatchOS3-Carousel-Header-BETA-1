//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUISAlertBackgroundProvider.h"

@class CUISAlertBackground, UIImage, UIView, _UIBackdropViewSettings;

@interface CSLAlertBackgroundProvider : NSObject <CUISAlertBackgroundProvider>
{
    UIView *_view;
    UIImage *_image;
    CUISAlertBackground *_background;
    _UIBackdropViewSettings *_backdropViewSettings;
}

+ (id)backgroundProviderWithWindows:(id)arg1;
+ (id)backgroundProviderWithScreen:(id)arg1;
+ (id)carouselBackgroundProviderIncludingAlertWindow:(_Bool)arg1;
@property(retain, nonatomic) _UIBackdropViewSettings *backdropViewSettings; // @synthesize backdropViewSettings=_backdropViewSettings;
@property(nonatomic) __weak CUISAlertBackground *background; // @synthesize background=_background;
- (void).cxx_destruct;
- (id)image;
- (id)view;

@end

