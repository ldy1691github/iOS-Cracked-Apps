//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class REMenu, REMenuItem, UIImageView, UILabel;

@interface REMenuItemView : UIView
{
    _Bool _isLight;
    REMenu *_menu;
    UIView *_separatorView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    REMenuItem *_item;
    CDUnknownBlockType _action;
}

@property(nonatomic) _Bool isLight; // @synthesize isLight=_isLight;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) REMenuItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak REMenu *menu; // @synthesize menu=_menu;
- (void).cxx_destruct;
- (void)setDefaultTitleColor;
- (void)setHighlightTitleColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 menu:(id)arg2 hasSubtitle:(_Bool)arg3 isLight:(_Bool)arg4 action:(CDUnknownBlockType)arg5;

@end

