//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class UIImageView, UILabel, UIView;

@interface NMNewPlaylistCell : NMCommonCell
{
    UIView *_iconBgView;
    UIImageView *_imgIcon;
    UILabel *_titleLabel;
    _Bool _autoCreateNewPlaylist;
}

@property(nonatomic) _Bool autoCreateNewPlaylist; // @synthesize autoCreateNewPlaylist=_autoCreateNewPlaylist;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleChangingTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

