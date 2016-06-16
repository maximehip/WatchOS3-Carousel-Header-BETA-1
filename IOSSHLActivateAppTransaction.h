//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSSHLBasicActivateAppTransaction.h"

@class NSMutableArray, NSSet, NSString, NSURL;

@interface IOSSHLActivateAppTransaction : IOSSHLBasicActivateAppTransaction
{
    NSMutableArray *_blockArray;
    NSString *_bundleIdentifier;
    NSSet *_actions;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)_checkApplicationFlags;
- (id)_customizedDescriptionProperties;
- (void)_departingContextDidNotChange;
- (void)peformBlockAfterSceneUpdate:(CDUnknownBlockType)arg1;
- (void)_activateEnteringScenes;
- (void)_begin;
- (id)debugDescription;
- (id)initWithApplication:(id)arg1;
- (id)initWithApplication:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)initWithApplication:(id)arg1 actions:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end
