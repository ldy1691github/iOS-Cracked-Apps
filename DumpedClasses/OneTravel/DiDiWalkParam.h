//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DiDiWalkParam : NSObject
{
    double _accuracy;
    long long _provider;
    NSString *_productId;
    NSString *_acckey;
    unsigned long long _walkNavType;
    NSString *_orderID;
    struct CLLocationCoordinate2D _userCoor;
}

@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(nonatomic) unsigned long long walkNavType; // @synthesize walkNavType=_walkNavType;
@property(retain, nonatomic) NSString *acckey; // @synthesize acckey=_acckey;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) long long provider; // @synthesize provider=_provider;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) struct CLLocationCoordinate2D userCoor; // @synthesize userCoor=_userCoor;
- (void).cxx_destruct;

@end

