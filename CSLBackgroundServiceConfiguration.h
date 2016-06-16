//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKComplicationObserver, CSLBackgroundActivityManager, CSLBackgroundTaskRequestServiceEndpoint;

@interface CSLBackgroundServiceConfiguration : NSObject
{
    CSLBackgroundActivityManager *_activityManager;
    CSLBackgroundTaskRequestServiceEndpoint *_endpoint;
    CLKComplicationObserver *_complicationObserver;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) CLKComplicationObserver *complicationObserver; // @synthesize complicationObserver=_complicationObserver;
@property(retain, nonatomic) CSLBackgroundTaskRequestServiceEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) CSLBackgroundActivityManager *activityManager; // @synthesize activityManager=_activityManager;
- (void).cxx_destruct;

@end
