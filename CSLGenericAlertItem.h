//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLUIAlertControllerAlert;

@interface CSLGenericAlertItem : NSObject
{
    CSLUIAlertControllerAlert *_alert;
}

@property(readonly, nonatomic) CSLUIAlertControllerAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)didDeactive;
- (void)didAppear;
- (void)willAppear;
- (void)configureAlert;
- (id)init;

@end

