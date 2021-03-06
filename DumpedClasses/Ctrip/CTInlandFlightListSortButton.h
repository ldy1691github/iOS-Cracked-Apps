//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView, UILabel;

@interface CTInlandFlightListSortButton : UIButton
{
    int _buttonCount;
    NSString *_upTitle;
    NSString *_downTitle;
    NSString *_normalTitle;
    unsigned long long _status;
    UIImageView *_imageViewIcon;
    UILabel *_labelTitle;
}

@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIImageView *imageViewIcon; // @synthesize imageViewIcon=_imageViewIcon;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *normalTitle; // @synthesize normalTitle=_normalTitle;
@property(copy, nonatomic) NSString *downTitle; // @synthesize downTitle=_downTitle;
@property(copy, nonatomic) NSString *upTitle; // @synthesize upTitle=_upTitle;
@property(nonatomic) int buttonCount; // @synthesize buttonCount=_buttonCount;
- (void).cxx_destruct;
- (void)changeStatusToUnSelect;
- (void)resetContentEdgeInsets;
- (void)initView;
- (void)initData;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

