//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSMutableDictionary, UIButton, UIImageView, UILabel, XYCTDisplayView;

@interface XYPHADAdvertiseCell : UICollectionViewCell
{
    UIImageView *_coverImage;
    XYCTDisplayView *_descriptionLabel;
    UILabel *_timeLabel;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIButton *_userButton;
    UIButton *_likeButton;
    UIButton *_recommendButton;
    id <XYPHADAdvertiseCellDelegate> _delegate;
    NSMutableDictionary *_discovery;
}

@property(nonatomic) __weak NSMutableDictionary *discovery; // @synthesize discovery=_discovery;
@property(nonatomic) __weak id <XYPHADAdvertiseCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *recommendButton; // @synthesize recommendButton=_recommendButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *userButton; // @synthesize userButton=_userButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) XYCTDisplayView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)animateLikeButton:(_Bool)arg1;
- (void)cellRecommendButtonClicked:(id)arg1;
- (void)cellotherUserInfoButtonClicked:(id)arg1;
- (void)cellLikeButtonClicked:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

