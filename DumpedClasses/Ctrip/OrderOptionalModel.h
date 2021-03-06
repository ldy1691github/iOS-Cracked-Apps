//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface OrderOptionalModel : CTBusinessBean
{
    int _optionalID;
    int _quantity;
    int _categoryID;
    int _optionalExtType;
    NSString *_optionalName;
    NSString *_unit;
    NSString *_hotelDescription;
    NSString *_currencyCode;
    PriceType *_cNYAmount;
    PriceType *_amount;
    NSString *_memo;
    NSMutableArray *_requiredInfoList;
    NSMutableArray *_xTicketInfoList;
}

@property(nonatomic) int optionalExtType; // @synthesize optionalExtType=_optionalExtType;
@property(retain, nonatomic) NSMutableArray *xTicketInfoList; // @synthesize xTicketInfoList=_xTicketInfoList;
@property(retain, nonatomic) NSMutableArray *requiredInfoList; // @synthesize requiredInfoList=_requiredInfoList;
@property(nonatomic) int categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) PriceType *cNYAmount; // @synthesize cNYAmount=_cNYAmount;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *hotelDescription; // @synthesize hotelDescription=_hotelDescription;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *optionalName; // @synthesize optionalName=_optionalName;
@property(nonatomic) int optionalID; // @synthesize optionalID=_optionalID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

