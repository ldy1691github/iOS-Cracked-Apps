//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class PriceType;

@interface FlightInlandPromotionPriceinformationModel : CTBusinessBean
{
    PriceType *price;
    PriceType *amountLimit;
}

@property(retain, nonatomic) PriceType *amountLimit; // @synthesize amountLimit;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
