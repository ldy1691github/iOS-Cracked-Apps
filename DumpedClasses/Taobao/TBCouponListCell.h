//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCouponCustomDeleteCell.h"

@class NSString, TBCustomBadgesView, UIButton, UIImageView, UILabel;

@interface TBCouponListCell : TBCouponCustomDeleteCell
{
    _Bool hasRead;
    CDUnknownBlockType _itemClickBlock;
    TBCustomBadgesView *_badgesView;
    UIImageView *_activityImageView;
    UIImageView *_iconImageView;
    UILabel *_activityLabel;
    UILabel *_titleViewLabel;
    UIImageView *_shopImageView;
    UIImageView *_leftbgImageView;
    UIImageView *_rightbgImageView;
    UILabel *_endDayLabel;
    UILabel *_amountLabel;
    UILabel *_distanceLabel;
    UILabel *_useConditionLabel;
    UIImageView *_statusImageView;
    UIButton *_clickButton;
    NSString *_styleFlag;
    NSString *_jumpUrl;
}

+ (struct CGSize)listIconSize;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *styleFlag; // @synthesize styleFlag=_styleFlag;
@property(nonatomic) __weak UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(nonatomic) __weak UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak UILabel *useConditionLabel; // @synthesize useConditionLabel=_useConditionLabel;
@property(nonatomic) __weak UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak UILabel *endDayLabel; // @synthesize endDayLabel=_endDayLabel;
@property(nonatomic) __weak UIImageView *rightbgImageView; // @synthesize rightbgImageView=_rightbgImageView;
@property(nonatomic) __weak UIImageView *leftbgImageView; // @synthesize leftbgImageView=_leftbgImageView;
@property(nonatomic) __weak UIImageView *shopImageView; // @synthesize shopImageView=_shopImageView;
@property(nonatomic) __weak UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(nonatomic) __weak UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(nonatomic) __weak TBCustomBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead;
- (void).cxx_destruct;
- (void)setStatus:(long long)arg1;
- (void)revealUrlbuttonClick:(id)arg1;
- (void)tbatConfigCell:(id)arg1;
- (void)setShopStyle;
- (void)setLifeStyle;
- (void)selectChange;
- (void)buttonClick:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpActive;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setUpBadgeView;

@end

