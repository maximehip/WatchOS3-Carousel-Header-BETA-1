//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUISAlertProvider.h"

@class NSString;

@interface CSLUIPasscodePromptAlertProvider : NSObject <CUISAlertProvider>
{
    id <CUISAlertProviderDelegate> alertProviderDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

