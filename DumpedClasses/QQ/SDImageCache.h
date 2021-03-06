//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface SDImageCache : NSObject
{
    NSMutableDictionary *memCache;
    NSString *diskCachePath;
    NSOperationQueue *cacheInQueue;
    NSOperationQueue *cacheOutQueue;
}

+ (id)imageCachePath;
+ (id)sharedImageCache;
- (void).cxx_destruct;
- (int)getMemoryCount;
- (int)getMemorySize;
- (int)getDiskCount;
- (int)getSize;
- (void)cleanDisk;
- (void)clearDisk;
- (void)clearMemory;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)removeImageForKey:(id)arg1;
- (void)queryDiskCacheForKey:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3;
- (id)imageFromKey:(id)arg1 fromDisk:(_Bool)arg2;
- (id)imageFromKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)syncStoreImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 toDisk:(_Bool)arg4;
- (void)queryDiskCacheOperation:(id)arg1;
- (void)notifyDelegate:(id)arg1;
- (void)storeKeyWithDataToDisk:(id)arg1;
- (id)cachePathForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

