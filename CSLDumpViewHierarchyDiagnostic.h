//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLDiagnosticEventHandler.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CSLDumpViewHierarchyDiagnostic : NSObject <CSLDiagnosticEventHandler>
{
    _Bool _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_usr1SignalNotification;
- (void)handleStackshotCombo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

