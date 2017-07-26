//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliTradeCombinationItemsBaseCell.h"

@class PAStepperDetail, UILabel;

@interface AliTradeCombinationItemsQuantityCell : AliTradeCombinationItemsBaseCell
{
    PAStepperDetail *_stepper;
    UILabel *_quantityTitleLabel;
}

@property(retain, nonatomic) UILabel *quantityTitleLabel; // @synthesize quantityTitleLabel=_quantityTitleLabel;
@property(retain, nonatomic) PAStepperDetail *stepper; // @synthesize stepper=_stepper;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)valueChangedForStepper:(id)arg1;
- (void)setMax:(double)arg1 min:(double)arg2;
- (void)setQuantityChangeDelegate:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
