//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelHotLandmarkRequest : CTBusinessBean
{
    int _serviceVersion;
    int _cityID;
    int _mapType;
    NSString *_eventID;
}

@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

