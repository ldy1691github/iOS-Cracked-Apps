//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface CTFlightOrderTimeManager : NSObject
{
    NSDate *orderInlandStartTime;
    NSDate *orderIntStardTime;
    int detentionTime;
    _Bool isFlightdetentionTimeOpen;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)clearRecordTimeData;
- (_Bool)isOverFlightOrderTimeWithCurrentTime:(id)arg1 orderType:(int)arg2 alterClickAction:(CDUnknownBlockType)arg3;
- (void)recordOrderStartTime:(id)arg1 orderType:(int)arg2;
- (id)init;

@end

