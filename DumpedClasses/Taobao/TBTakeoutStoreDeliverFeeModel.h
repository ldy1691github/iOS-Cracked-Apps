//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutStoreDeliverFeeModel : TBJSONModel
{
    NSArray *_priceLevels;
    NSArray *_feeItems;
    NSString *_feeRange;
}

+ (id)modelContainerClassMapDictioanry;
@property(copy, nonatomic) NSString *feeRange; // @synthesize feeRange=_feeRange;
@property(copy, nonatomic) NSArray *feeItems; // @synthesize feeItems=_feeItems;
@property(copy, nonatomic) NSArray *priceLevels; // @synthesize priceLevels=_priceLevels;
- (void).cxx_destruct;

@end

