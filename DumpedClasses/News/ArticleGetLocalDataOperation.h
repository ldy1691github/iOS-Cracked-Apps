//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDataOperation.h"

@interface ArticleGetLocalDataOperation : SSDataOperation
{
    int normalLoadCount;
    int offlineLoadCount;
}

@property(nonatomic) int offlineLoadCount; // @synthesize offlineLoadCount;
@property(nonatomic) int normalLoadCount; // @synthesize normalLoadCount;
- (id)fixOrderedDataWhenQueryFromDB:(id)arg1;
- (void)execute:(id)arg1;
- (Class)orderedDataClass;
- (id)init;

@end

