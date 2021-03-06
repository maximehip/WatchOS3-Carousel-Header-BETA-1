//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLIconZoomCoordinationContext, IOSSHLTransaction, NSString;

@protocol CSLIconZoomCoordination <NSObject>
- (void)endZoomingAtZoomLevel:(float)arg1 withTransaction:(IOSSHLTransaction *)arg2 didChangeZoomLevels:(_Bool)arg3;
- (void)zoomLevelDidChange:(float)arg1 transaction:(IOSSHLTransaction *)arg2;
- (void)prepareToZoomWithContext:(CSLIconZoomCoordinationContext *)arg1 transaction:(IOSSHLTransaction *)arg2;
- (NSString *)bundleIdentifierForIcon;
@end

