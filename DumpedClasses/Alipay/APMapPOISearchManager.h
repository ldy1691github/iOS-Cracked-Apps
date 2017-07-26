//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface APMapPOISearchManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableArray *_pois;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_errorDictioanry;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *errorDictioanry; // @synthesize errorDictioanry=_errorDictioanry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *pois; // @synthesize pois=_pois;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)poiSearchWitRequest:(CDUnknownBlockType)arg1 poiCallback:(CDUnknownBlockType)arg2;
- (id)alipayClientLanguage;
- (void)writeLogWithRequest:(id)arg1 startTime:(double)arg2 args:(id)arg3;
- (id)aMapPOIWithFoursquareDictionary:(id)arg1;
- (id)aMapPOIWithMobilelbsPOIPB:(id)arg1;
- (id)reqeustWitKeywords:(id)arg1 appKey:(id)arg2 types:(id)arg3 city:(id)arg4 pageIndex:(unsigned long long)arg5 pageSize:(unsigned long long)arg6 coordinate:(struct CLLocationCoordinate2D)arg7 searchType:(unsigned long long)arg8 cityLimit:(_Bool)arg9 horizontalAccuracy:(double)arg10;
- (id)init;

@end
