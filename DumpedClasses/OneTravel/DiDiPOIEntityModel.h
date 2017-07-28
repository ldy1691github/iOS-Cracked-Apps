//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><DiDiPOIEntityModel>, NSDictionary<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface DiDiPOIEntityModel : JSONModel
{
    NSString<Optional> *_displayname;
    NSDictionary<Optional> *_extends;
    NSString<Optional> *_fullname;
    NSString<Optional> *_address;
    NSString<Optional> *_lat;
    NSString<Optional> *_lng;
    NSNumber<Optional> *_cotype;
    NSString<Optional> *_uid;
    NSNumber<Optional> *_is_default_recom;
    NSString<Optional> *_showproduct;
    NSString<Optional> *_srctag;
    NSString<Optional> *_oldaddr;
    NSNumber<Optional> *_weight;
    NSString<Optional> *_searchid;
    NSString<Optional> *_pic_url;
    NSNumber<Optional> *_is_history;
    NSString<Optional> *_city;
    NSString<Optional> *_cityid;
    NSString<Optional> *_area;
    NSString<Optional> *_tag;
    NSString<Optional> *_sourceType;
    NSNumber<Optional> *_isRecommendedPoi;
    NSString<Optional> *_onlyShowDisPlayName;
    NSNumber<Optional> *_isRecommended;
    NSNumber<Optional> *_isPOIException;
    NSString<Optional> *_cscore;
    NSString<Optional> *_expr;
    NSString<Optional> *_same;
    NSString<Optional> *_distance;
    NSArray<Optional><DiDiPOIEntityModel> *_subpois;
    NSString<Optional> *_lang;
    NSString<Optional> *_language;
    NSString<Optional> *_timestamp;
    NSString<Optional> *_business_district;
    NSString<Optional> *_addressname;
    NSString<Optional> *_name;
    NSString<Optional> *_to_name;
    NSString<Optional> *_to_address;
    NSString<Optional> *_addr;
}

+ (_Bool)poiEntity:(id)arg1 equalsTo:(id)arg2;
+ (_Bool)isValidString:(id)arg1;
@property(retain, nonatomic) NSString<Optional> *addr; // @synthesize addr=_addr;
@property(retain, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(retain, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString<Optional> *addressname; // @synthesize addressname=_addressname;
@property(retain, nonatomic) NSString<Optional> *business_district; // @synthesize business_district=_business_district;
@property(retain, nonatomic) NSString<Optional> *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString<Optional> *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString<Optional> *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSArray<Optional><DiDiPOIEntityModel> *subpois; // @synthesize subpois=_subpois;
@property(retain, nonatomic) NSString<Optional> *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString<Optional> *same; // @synthesize same=_same;
@property(retain, nonatomic) NSString<Optional> *expr; // @synthesize expr=_expr;
@property(retain, nonatomic) NSString<Optional> *cscore; // @synthesize cscore=_cscore;
@property(nonatomic) NSNumber<Optional> *isPOIException; // @synthesize isPOIException=_isPOIException;
@property(nonatomic) NSNumber<Optional> *isRecommended; // @synthesize isRecommended=_isRecommended;
@property(retain, nonatomic) NSString<Optional> *onlyShowDisPlayName; // @synthesize onlyShowDisPlayName=_onlyShowDisPlayName;
@property(retain, nonatomic) NSNumber<Optional> *isRecommendedPoi; // @synthesize isRecommendedPoi=_isRecommendedPoi;
@property(retain, nonatomic) NSString<Optional> *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString<Optional> *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString<Optional> *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString<Optional> *cityid; // @synthesize cityid=_cityid;
@property(retain, nonatomic) NSString<Optional> *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber<Optional> *is_history; // @synthesize is_history=_is_history;
@property(retain, nonatomic) NSString<Optional> *pic_url; // @synthesize pic_url=_pic_url;
@property(retain, nonatomic) NSString<Optional> *searchid; // @synthesize searchid=_searchid;
@property(retain, nonatomic) NSNumber<Optional> *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString<Optional> *oldaddr; // @synthesize oldaddr=_oldaddr;
@property(retain, nonatomic) NSString<Optional> *srctag; // @synthesize srctag=_srctag;
@property(copy, nonatomic) NSString<Optional> *showproduct; // @synthesize showproduct=_showproduct;
@property(retain, nonatomic) NSNumber<Optional> *is_default_recom; // @synthesize is_default_recom=_is_default_recom;
@property(retain, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber<Optional> *cotype; // @synthesize cotype=_cotype;
@property(retain, nonatomic) NSString<Optional> *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSString<Optional> *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString<Optional> *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString<Optional> *fullname; // @synthesize fullname=_fullname;
@property(retain, nonatomic) NSDictionary<Optional> *extends; // @synthesize extends=_extends;
@property(retain, nonatomic) NSString<Optional> *displayname; // @synthesize displayname=_displayname;
- (void).cxx_destruct;
- (_Bool)isTakeCarPlace;
- (_Bool)isValidPosition;
- (struct CLLocationCoordinate2D)coor;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)summaryAddress;
@property(readonly, nonatomic) NSString<Optional> *poiCityID;
- (id)fullAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
