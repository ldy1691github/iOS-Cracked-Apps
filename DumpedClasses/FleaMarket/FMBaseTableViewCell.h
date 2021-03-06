//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UIView;

@interface FMBaseTableViewCell : UITableViewCell
{
    _Bool _isCanSelect;
    UIView *_fmContentView;
    UIImageView *_shadowImageView;
}

@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIView *fmContentView; // @synthesize fmContentView=_fmContentView;
@property(nonatomic) _Bool isCanSelect; // @synthesize isCanSelect=_isCanSelect;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

