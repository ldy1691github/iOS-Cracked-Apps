//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSArray<Optional><ODSLocationModel>, NSNumber<Optional>;

@interface ODSOverspeedInfo : JSONModel
{
    NSArray<Optional> *_oids;
    NSNumber<Optional> *_judgegpsindex;
    NSNumber<Optional> *_limitspeed;
    NSArray<Optional><ODSLocationModel> *_locations;
}

@property(copy, nonatomic) NSArray<Optional><ODSLocationModel> *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSNumber<Optional> *limitspeed; // @synthesize limitspeed=_limitspeed;
@property(copy, nonatomic) NSNumber<Optional> *judgegpsindex; // @synthesize judgegpsindex=_judgegpsindex;
@property(copy, nonatomic) NSArray<Optional> *oids; // @synthesize oids=_oids;
- (void).cxx_destruct;

@end
