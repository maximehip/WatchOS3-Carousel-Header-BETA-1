//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLWorkspaceAction.h"

@class CSLMainUIEntity;

@interface CSLStackUpdateAction : CSLWorkspaceAction
{
    unsigned int _updateType;
    CSLMainUIEntity *_entity;
}

+ (id)actionWithUpdateType:(unsigned int)arg1 entity:(id)arg2;
@property(nonatomic) CSLMainUIEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;

@end

