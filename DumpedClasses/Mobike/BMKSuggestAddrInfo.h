//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BMKSuggestAddrInfo : NSObject
{
    NSArray *_startPoiList;
    NSArray *_endPoiList;
    NSArray *_startCityList;
    NSArray *_endCityList;
    NSArray *_wayPointsPoiList;
    NSArray *_wayPointsCityList;
}

@property(retain, nonatomic) NSArray *wayPointCityList; // @synthesize wayPointCityList=_wayPointsCityList;
@property(retain, nonatomic) NSArray *wayPointPoiList; // @synthesize wayPointPoiList=_wayPointsPoiList;
@property(retain, nonatomic) NSArray *endCityList; // @synthesize endCityList=_endCityList;
@property(retain, nonatomic) NSArray *startCityList; // @synthesize startCityList=_startCityList;
@property(retain, nonatomic) NSArray *endPoiList; // @synthesize endPoiList=_endPoiList;
@property(retain, nonatomic) NSArray *startPoiList; // @synthesize startPoiList=_startPoiList;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
