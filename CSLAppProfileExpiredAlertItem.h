//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLGenericAlertItem.h"

@class IOSSHLApplication;

@interface CSLAppProfileExpiredAlertItem : CSLGenericAlertItem
{
    IOSSHLApplication *_application;
}

@property(readonly, nonatomic) IOSSHLApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)configureAlert;
- (id)initWithApplication:(id)arg1;

@end

