//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSLSQLiteDatabase.h"

@interface CSLBulletinStatePersistentStore : CSLSQLiteDatabase
{
    struct sqlite3_stmt *_markAllAsRead;
    struct sqlite3_stmt *_markBulletinAsRead;
    struct sqlite3_stmt *_removeBeforeDate;
    struct sqlite3_stmt *_fetchOnOrAfterDate;
    struct sqlite3_stmt *_removeBulletin;
    struct sqlite3_stmt *_upsertBulletin;
}

- (id)_bulletinStateFromStatement:(struct sqlite3_stmt *)arg1;
- (void)insertOrReplaceItem:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemWithUniversalSectionID:(id)arg1 publisherMatchID:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeItem:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeBulletinStatesBeforeDate:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBulletinStatesOnOrAfterDate:(id)arg1 withCallbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finalizeStatements;
- (_Bool)prepareStatements;
- (id)init;

@end
