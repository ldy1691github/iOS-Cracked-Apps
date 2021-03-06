//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFCardRespItemZp, FFCartBizExt, NSString;

@interface FFCartRespListItems : NSObject
{
    _Bool _hasZpTag;
    _Bool _hasPromotion;
    _Bool _showInTimeTag;
    _Bool _isLightningDelivery;
    _Bool _weight;
    FFCardRespItemZp *_zpItem;
    NSString *_cid;
    NSString *_validBuyQuantity;
    NSString *_status;
    NSString *_itemId;
    NSString *_realItemId;
    NSString *_title;
    NSString *_picUrl;
    NSString *_skuId;
    NSString *_invQuantity;
    NSString *_skuName;
    NSString *_invUnit;
    NSString *_promotionPrice;
    NSString *_buyQuantity;
    NSString *_promotionLeftCnt;
    NSString *_buyStart;
    NSString *_serviceItemId;
    NSString *_serviceItemTitle;
    NSString *_promotionLmtCnt;
    NSString *_promotionTag;
    NSString *_saleUnit;
    NSString *_price;
    NSString *_buyStep;
    long long _invStatus;
    long long _processingTime;
    NSString *_saleUnitPrice;
    NSString *_saleUnitPromotionPrice;
    FFCartBizExt *_bizExt;
}

@property(retain, nonatomic) FFCartBizExt *bizExt; // @synthesize bizExt=_bizExt;
@property(nonatomic) _Bool weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *saleUnitPromotionPrice; // @synthesize saleUnitPromotionPrice=_saleUnitPromotionPrice;
@property(retain, nonatomic) NSString *saleUnitPrice; // @synthesize saleUnitPrice=_saleUnitPrice;
@property(nonatomic) long long processingTime; // @synthesize processingTime=_processingTime;
@property(nonatomic) _Bool isLightningDelivery; // @synthesize isLightningDelivery=_isLightningDelivery;
@property(nonatomic) long long invStatus; // @synthesize invStatus=_invStatus;
@property(nonatomic) _Bool showInTimeTag; // @synthesize showInTimeTag=_showInTimeTag;
@property(copy, nonatomic) NSString *buyStep; // @synthesize buyStep=_buyStep;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *saleUnit; // @synthesize saleUnit=_saleUnit;
@property(nonatomic) _Bool hasPromotion; // @synthesize hasPromotion=_hasPromotion;
@property(nonatomic) _Bool hasZpTag; // @synthesize hasZpTag=_hasZpTag;
@property(copy, nonatomic) NSString *promotionTag; // @synthesize promotionTag=_promotionTag;
@property(copy, nonatomic) NSString *promotionLmtCnt; // @synthesize promotionLmtCnt=_promotionLmtCnt;
@property(copy, nonatomic) NSString *serviceItemTitle; // @synthesize serviceItemTitle=_serviceItemTitle;
@property(copy, nonatomic) NSString *serviceItemId; // @synthesize serviceItemId=_serviceItemId;
@property(copy, nonatomic) NSString *buyStart; // @synthesize buyStart=_buyStart;
@property(copy, nonatomic) NSString *promotionLeftCnt; // @synthesize promotionLeftCnt=_promotionLeftCnt;
@property(copy, nonatomic) NSString *buyQuantity; // @synthesize buyQuantity=_buyQuantity;
@property(copy, nonatomic) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(copy, nonatomic) NSString *invUnit; // @synthesize invUnit=_invUnit;
@property(copy, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(copy, nonatomic) NSString *invQuantity; // @synthesize invQuantity=_invQuantity;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *realItemId; // @synthesize realItemId=_realItemId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *validBuyQuantity; // @synthesize validBuyQuantity=_validBuyQuantity;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) FFCardRespItemZp *zpItem; // @synthesize zpItem=_zpItem;
- (void).cxx_destruct;
- (_Bool)tomorrowDelivery;
@property(readonly, nonatomic) long long firstQuantity;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

