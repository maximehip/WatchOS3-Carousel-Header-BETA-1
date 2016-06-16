//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAContext, CATextLayer, NSString;

@interface CSLStatusOverlay : NSObject
{
    _Bool _hidden;
    NSString *_statusString;
    float _displayScale;
    CAContext *_context;
    CATextLayer *_textLayer;
    struct CGRect _frame;
}

@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) CAContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) float displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (void)_createTextLayer;
- (id)initWithFrame:(struct CGRect)arg1 displayScale:(float)arg2;

@end
