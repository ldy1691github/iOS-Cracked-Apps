//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NewDriverCarInfoCardModel, SDriverCarInfoView, UIButton, UIImageView;

@interface SDefaultDriverCardView : UIView
{
    SDriverCarInfoView *_leftView;
    SDriverCarInfoView *_rightView;
    UIView *_centerView;
    UIImageView *_carButton;
    UIView *_driverContainerView;
    UIButton *_driverButton;
    NewDriverCarInfoCardModel *_viewModel;
}

@property(retain, nonatomic) NewDriverCarInfoCardModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *driverButton; // @synthesize driverButton=_driverButton;
@property(retain, nonatomic) UIView *driverContainerView; // @synthesize driverContainerView=_driverContainerView;
@property(retain, nonatomic) UIImageView *carButton; // @synthesize carButton=_carButton;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) SDriverCarInfoView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) SDriverCarInfoView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)driverInfoViewClick;
- (void)valueCenterView:(id)arg1;
- (void)valueCarView:(id)arg1;
- (void)valueDriverView:(id)arg1;
- (void)setDriverModel:(id)arg1;
- (void)configDriverButton;
- (void)configCarButton;
- (void)configCenterView;
- (void)configRightView;
- (void)configLeftView;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

