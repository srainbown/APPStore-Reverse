//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMCachedDB : NSObject
{
    struct sqlite3 *_db;
}

+ (id)sharedInstance;
- (void)clearDataInTable:(id)arg1;
- (void)closeDB;
- (void)initDB;
- (void)insertMetaVerbatimItem:(id)arg1 value:(int)arg2 timestamp:(unsigned long long)arg3 label:(id)arg4;
- (void)loadAGCachedToMemory:(id)arg1;
- (void)loadAGToContainer:(id)arg1;
- (void)loadVeMetaToContainer:(id)arg1;
- (int)rowCountInTable:(id)arg1;
- (_Bool)runSql:(id)arg1;
- (void)saveMemory:(id)arg1 toAGTable:(id)arg2;
- (void)transferCachedToAgTable;
- (void)verifyAGTableWithName:(id)arg1;
- (void)verifyVETableWithName:(id)arg1;

@end

