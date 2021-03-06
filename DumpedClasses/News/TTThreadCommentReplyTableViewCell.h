//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

#import "TTLabelTappingDelegate.h"

@class FRIconView, NSString, TTThreadCommentReplyModel, UILabel;

@interface TTThreadCommentReplyTableViewCell : SSThemedTableViewCell <TTLabelTappingDelegate>
{
    UILabel *_replyLabel;
    TTThreadCommentReplyModel *_replyModel;
    CDUnknownBlockType _userActionBlock;
    FRIconView *_iconsView;
    struct _NSRange _verifyIconRange;
    struct _NSRange _userRoleIconRange;
}

+ (double)fitSizeWithiPhone6:(double)arg1 iPhone5:(double)arg2;
+ (double)tt_lineHeight;
+ (double)tt_vSize;
+ (double)tt_fontSize;
+ (double)heightForReplyModel:(id)arg1 width:(double)arg2;
+ (id)generateLogInfosWith:(id)arg1;
+ (double)userIConWidthWith:(id)arg1 withMaxWidth:(double)arg2;
@property(nonatomic) struct _NSRange userRoleIconRange; // @synthesize userRoleIconRange=_userRoleIconRange;
@property(nonatomic) struct _NSRange verifyIconRange; // @synthesize verifyIconRange=_verifyIconRange;
@property(retain, nonatomic) FRIconView *iconsView; // @synthesize iconsView=_iconsView;
@property(copy, nonatomic) CDUnknownBlockType userActionBlock; // @synthesize userActionBlock=_userActionBlock;
@property(retain, nonatomic) TTThreadCommentReplyModel *replyModel; // @synthesize replyModel=_replyModel;
@property(retain, nonatomic) UILabel *replyLabel; // @synthesize replyLabel=_replyLabel;
- (void).cxx_destruct;
- (void)label:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)themeChanged:(id)arg1;
- (void)refreshReplyLabelWithAttributedText:(id)arg1;
- (void)handleUserClickActionWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithModel:(id)arg1 width:(double)arg2;
- (void)buildIconViewIfNeed;
- (void)buildReplyLabelIfNeed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

