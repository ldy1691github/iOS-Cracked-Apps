//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface DMAPGeoTopFast_carModel : JSONModel
{
    NSNumber<Optional> *_bill_ability;
    NSString<Optional> *_enter_name;
    NSString<Optional> *_msg;
    NSNumber<Optional> *_open;
}

@property(retain, nonatomic) NSNumber<Optional> *open; // @synthesize open=_open;
@property(copy, nonatomic) NSString<Optional> *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString<Optional> *enter_name; // @synthesize enter_name=_enter_name;
@property(retain, nonatomic) NSNumber<Optional> *bill_ability; // @synthesize bill_ability=_bill_ability;
- (void).cxx_destruct;

@end
