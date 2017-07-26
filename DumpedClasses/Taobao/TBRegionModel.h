//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TBSDKMTOPServer;

@interface TBRegionModel : NSObject
{
    _Bool _isLoading;
    _Bool _isCompleteTownCodeServerLoading;
    NSArray *_provinceArray;
    NSArray *_cityArray;
    NSArray *_districtArray;
    NSArray *_townArray;
    NSString *_divisionCode;
    NSString *_fetchedTownDivisionCode;
    TBSDKMTOPServer *_server;
    TBSDKMTOPServer *_completeTownCodeServer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBSDKMTOPServer *completeTownCodeServer; // @synthesize completeTownCodeServer=_completeTownCodeServer;
@property(nonatomic) _Bool isCompleteTownCodeServerLoading; // @synthesize isCompleteTownCodeServerLoading=_isCompleteTownCodeServerLoading;
@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *fetchedTownDivisionCode; // @synthesize fetchedTownDivisionCode=_fetchedTownDivisionCode;
@property(retain, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
@property(retain, nonatomic) NSArray *townArray; // @synthesize townArray=_townArray;
@property(retain, nonatomic) NSArray *districtArray; // @synthesize districtArray=_districtArray;
@property(retain, nonatomic) NSArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) NSArray *provinceArray; // @synthesize provinceArray=_provinceArray;
- (void).cxx_destruct;
- (void)getRegionInfoWithType:(int)arg1 divisionCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTownWithDeliverId:(id)arg1 divisionCode:(id)arg2 addressDetail:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getTownWithDivisionCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDistrictWithDivisionCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCityWithDivisionCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllProvinceWithCompletion:(CDUnknownBlockType)arg1;
- (void)cleanDelegateAndCancel;

@end
