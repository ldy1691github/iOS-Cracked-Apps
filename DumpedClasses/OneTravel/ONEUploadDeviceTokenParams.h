//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEBaseParams.h"

@class NSString;

@interface ONEUploadDeviceTokenParams : ONEBaseParams
{
    NSString *_cid;
    NSString *_apns_token;
    NSString *_lat;
    NSString *_lng;
}

@property(copy, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *apns_token; // @synthesize apns_token=_apns_token;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;

@end

