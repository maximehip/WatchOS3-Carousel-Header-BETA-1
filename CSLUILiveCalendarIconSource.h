//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSLUILiveCalendarIconSource : NSObject
{
    id <CSLUILiveCalendarIconSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLUILiveCalendarIconSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)image;
- (void)_timeOrLocaleChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

