//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderDetailCardCell.h"

@class HotelCommentLevelEncorageViewModel, NSMutableArray, UIImageView, UILabel, UIView;

@interface CTHotelOrderDetailInfoOperCardCell : CTHotelOrderDetailCardCell
{
    id <CTHotelOrderDetailInfoOperDelegate> _delegate;
    NSMutableArray *_btnList;
    UIImageView *_cornerMarkImg;
    HotelCommentLevelEncorageViewModel *_commentEncoVM;
    UIView *_commentLevelView;
    UILabel *_ruleTitleLabel;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *ruleTitleLabel; // @synthesize ruleTitleLabel=_ruleTitleLabel;
@property(retain, nonatomic) UIView *commentLevelView; // @synthesize commentLevelView=_commentLevelView;
@property(retain, nonatomic) HotelCommentLevelEncorageViewModel *commentEncoVM; // @synthesize commentEncoVM=_commentEncoVM;
@property(retain, nonatomic) UIImageView *cornerMarkImg; // @synthesize cornerMarkImg=_cornerMarkImg;
@property(retain, nonatomic) NSMutableArray *btnList; // @synthesize btnList=_btnList;
@property(nonatomic) __weak id <CTHotelOrderDetailInfoOperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goToScoreRulePage;
- (void)commentClick;
- (void)uploadClick;
- (void)certificateClick;
- (void)signInClick;
- (id)buildBtnStatusList:(id)arg1;
- (_Bool)isSixClockLater:(id)arg1;
- (void)setCornerMark:(id)arg1;
- (void)setCommentLevelViewY:(double)arg1;
- (void)setData:(id)arg1;
- (void)initView;

@end

