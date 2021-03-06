//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLImageLoadDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSObject, NSString, QLMomentButton, QLMomentUser, QLMomentUserButton, QLMomentUserLevelInfoView, QLRichLabel, QLSBlurEffectImageView, QLSImageView, UIImageView;

@interface QLMomentCoverView : UIView <QLImageLoadDelegate, UIGestureRecognizerDelegate>
{
    _Bool _shuoldShowMsg;
    QLSImageView *_headView;
    QLMomentUser *_momentUser;
    QLMomentButton *_nicknameLabel;
    QLSBlurEffectImageView *_headerBgView;
    QLRichLabel *_nicknameRichLabel;
    QLMomentUserLevelInfoView *_userHollywoodInfoView;
    QLMomentUserButton *_userBtn;
    NSObject *_headerTarget;
    SEL _action;
    UIImageView *_faceGroundView;
}

@property(retain, nonatomic) UIImageView *faceGroundView; // @synthesize faceGroundView=_faceGroundView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak NSObject *headerTarget; // @synthesize headerTarget=_headerTarget;
@property(retain, nonatomic) QLMomentUserButton *userBtn; // @synthesize userBtn=_userBtn;
@property(retain, nonatomic) QLMomentUserLevelInfoView *userHollywoodInfoView; // @synthesize userHollywoodInfoView=_userHollywoodInfoView;
@property(retain, nonatomic) QLRichLabel *nicknameRichLabel; // @synthesize nicknameRichLabel=_nicknameRichLabel;
@property(nonatomic) _Bool shuoldShowMsg; // @synthesize shuoldShowMsg=_shuoldShowMsg;
@property(retain, nonatomic) QLSBlurEffectImageView *headerBgView; // @synthesize headerBgView=_headerBgView;
@property(retain, nonatomic) QLMomentButton *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) QLMomentUser *momentUser; // @synthesize momentUser=_momentUser;
@property(retain, nonatomic) QLSImageView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)didUserButtonTap:(id)arg1;
- (void)addUserHeader:(id)arg1 action:(SEL)arg2;
- (void)refreshMsgNumber:(long long)arg1;
- (void)loadHeaderView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andMomnetUser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

