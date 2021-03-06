//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMBadgePointView, NSString, UIFont, UIImageView, UILabel;

@interface NMSettingCell : NMCommonCell
{
    UILabel *_label;
    UILabel *_contentLabel;
    UIImageView *_arrowImageView;
    NMBadgePointView *_dotImageView;
    _Bool _disable;
    UILabel *_subTitleLabel;
    _Bool _contentHighlighted;
    NSString *_subTitle;
}

+ (double)height;
@property(nonatomic) _Bool contentHighlighted; // @synthesize contentHighlighted=_contentHighlighted;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
- (void).cxx_destruct;
@property(nonatomic) _Bool dotHidden; // @dynamic dotHidden;
- (void)prepareForTableView:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) _Bool indicator; // @dynamic indicator;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) UIFont *contentFont;
@property(retain, nonatomic) NSString *content; // @dynamic content;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

