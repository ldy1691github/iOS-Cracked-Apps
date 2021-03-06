//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVPackageQueueMonitorStat : NSObject <WVMonitorInfoProtocol>
{
    unsigned long long _cleanCount;
    unsigned long long _successCleanCount;
    unsigned long long _deleteCount;
    unsigned long long _successDeleteCount;
    unsigned long long _updateCount;
    unsigned long long _successCount;
}

+ (id)monitorMeasureRange:(id)arg1;
+ (id)monitorPoint;
@property(readonly, nonatomic) unsigned long long successCount; // @synthesize successCount=_successCount;
@property(readonly, nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(readonly, nonatomic) unsigned long long successDeleteCount; // @synthesize successDeleteCount=_successDeleteCount;
@property(readonly, nonatomic) unsigned long long deleteCount; // @synthesize deleteCount=_deleteCount;
@property(readonly, nonatomic) unsigned long long successCleanCount; // @synthesize successCleanCount=_successCleanCount;
@property(readonly, nonatomic) unsigned long long cleanCount; // @synthesize cleanCount=_cleanCount;
- (void)reset;
- (void)accumulateUpdate:(_Bool)arg1;
- (void)accumulateDelete:(_Bool)arg1;
- (void)accumulateClean:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

