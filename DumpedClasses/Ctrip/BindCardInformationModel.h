//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface BindCardInformationModel : CTBusinessBean
{
    NSString *bindCardID;
    int cardBankID;
    NSString *cardBankName;
    int cardType;
    NSString *cardDesc;
    PriceType *limitAmount;
    int cardBitmap;
    NSString *brandID;
    NSString *brandType;
    NSString *channelID;
    NSString *cardNumber;
    NSString *paymentWayID;
    NSString *mobilephone;
    int cardInfoId;
    int cardPolicySubBitMap;
    NSString *iDCardTypeList;
}

@property(copy, nonatomic) NSString *iDCardTypeList; // @synthesize iDCardTypeList;
@property(nonatomic) int cardPolicySubBitMap; // @synthesize cardPolicySubBitMap;
@property(nonatomic) int cardInfoId; // @synthesize cardInfoId;
@property(copy, nonatomic) NSString *mobilephone; // @synthesize mobilephone;
@property(copy, nonatomic) NSString *paymentWayID; // @synthesize paymentWayID;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandID; // @synthesize brandID;
@property(nonatomic) int cardBitmap; // @synthesize cardBitmap;
@property(retain, nonatomic) PriceType *limitAmount; // @synthesize limitAmount;
@property(copy, nonatomic) NSString *cardDesc; // @synthesize cardDesc;
@property(nonatomic) int cardType; // @synthesize cardType;
@property(copy, nonatomic) NSString *cardBankName; // @synthesize cardBankName;
@property(nonatomic) int cardBankID; // @synthesize cardBankID;
@property(copy, nonatomic) NSString *bindCardID; // @synthesize bindCardID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

