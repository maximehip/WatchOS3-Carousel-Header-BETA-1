//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol CUISBulletinClientFactoryExtension <NSObject>

@optional
- (void)setClientFactoryExtensionDelegate:(id <CUISBulletinClientFactoryExtensionDelegate>)arg1;
- (NSArray *)sectionIDsSupported;
- (void)invalidate;
- (double)extendedPrimaryPagePresentationTimeout;
- (void)primaryPagePresentationWillExpire;
- (double)primaryPagePresentationTimeout;
- (void)primaryPagePresentationWithCompletion:(void (^)(CUISBulletinPrimaryPagePresentation *))arg1;
@end

