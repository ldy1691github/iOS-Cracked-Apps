//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTV_DBManager.h"

@interface KTV_HotSingerDBMgr : KTV_DBManager
{
}

- (void)checkNeedUpdateWithSingerType:(int)arg1;
- (_Bool)deleteWithSingerType:(int)arg1;
- (_Bool)insertAllSinger:(id)arg1;
- (id)getAllSingerWithSingerType:(int)arg1;
- (_Bool)insertData:(id)arg1;
- (id)getAllDataWithSingerType:(int)arg1;
- (id)init;

@end
