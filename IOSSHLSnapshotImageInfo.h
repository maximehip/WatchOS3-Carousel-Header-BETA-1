//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IOSSHLSnapshotImageInfo : NSObject
{
    _Bool _defaultPNG;
    NSString *_path;
    NSString *_downscaledPath;
    NSString *_extendedDataPath;
    NSString *_sceneID;
    float _scale;
    int _launchingOrientation;
    int _originalOrientation;
    struct CGSize _size;
}

+ (id)snapshotImageInfoWithPath:(id)arg1 downscaledPath:(id)arg2 extendedDataPath:(id)arg3 launchingOrientation:(int)arg4 originalOrientation:(int)arg5 forSceneID:(id)arg6 size:(struct CGSize)arg7 scale:(float)arg8;
@property(nonatomic) _Bool defaultPNG; // @synthesize defaultPNG=_defaultPNG;
@property(nonatomic) int originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) int launchingOrientation; // @synthesize launchingOrientation=_launchingOrientation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(copy, nonatomic) NSString *extendedDataPath; // @synthesize extendedDataPath=_extendedDataPath;
@property(copy, nonatomic) NSString *downscaledPath; // @synthesize downscaledPath=_downscaledPath;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;
- (id)_stringForInterfaceOrientation:(int)arg1;

@end

