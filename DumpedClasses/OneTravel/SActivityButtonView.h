//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SABubbleView, SButtonConf, UIButton, UILabel;

@interface SActivityButtonView : UIView
{
    id _delegate;
    UIButton *_iconButton;
    UILabel *_titleLabel;
    SABubbleView *_bubbleView;
    SButtonConf *_conf;
}

@property(retain, nonatomic) SButtonConf *conf; // @synthesize conf=_conf;
@property(retain, nonatomic) SABubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)arrowPointForBubbleView:(id)arg1;
- (void)bubbleViewDidClick:(id)arg1;
- (void)bubbleViewDidHide:(id)arg1;
- (void)bubbleViewDidShow:(id)arg1;
- (void)bubbleViewDidPressed:(id)arg1;
- (void)activityButtonDidPressed:(id)arg1;
- (void)configTitleLabel;
- (void)configIconButton;
- (void)showBubble:(id)arg1;
- (void)setTitleLabelText:(id)arg1;
- (void)updateWithActivityConf:(id)arg1;
- (id)init;

@end

