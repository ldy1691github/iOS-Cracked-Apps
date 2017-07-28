//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TTAddressBookCache : NSObject
{
    NSMutableArray *_cache;
}

@property(retain, nonatomic) NSMutableArray *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)TTRecords;
- (void)addRecordsToCache:(id)arg1;
- (void)addRecordToCache:(id)arg1;
- (void)removeRecordsFromCache:(id)arg1;
- (void)removeRecordFromCache:(id)arg1;
- (void)contructCacheWithRecords:(id)arg1;
- (_Bool)containRecord:(id)arg1;
- (void)clearCache;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end
