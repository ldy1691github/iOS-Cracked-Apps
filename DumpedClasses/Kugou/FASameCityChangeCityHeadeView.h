//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FASameCityChangeCityHeadeView : UIView
{
    CDUnknownBlockType _tapCityChangeHandler;
    UILabel *_tapChangeCityLabel;
    UIImageView *_positionIcon;
}

@property(retain, nonatomic) UIImageView *positionIcon; // @synthesize positionIcon=_positionIcon;
@property(retain, nonatomic) UILabel *tapChangeCityLabel; // @synthesize tapChangeCityLabel=_tapChangeCityLabel;
@property(copy, nonatomic) CDUnknownBlockType tapCityChangeHandler; // @synthesize tapCityChangeHandler=_tapCityChangeHandler;
- (void).cxx_destruct;
- (void)changeCity:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

