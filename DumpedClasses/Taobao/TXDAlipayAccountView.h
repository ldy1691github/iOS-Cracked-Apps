//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TXDAlipayAccountView : UIView
{
    UILabel *_icon;
    UIImageView *_alipayIcon;
    UILabel *_accountLabel;
    CDUnknownBlockType _observeWidth;
}

@property(copy, nonatomic) CDUnknownBlockType observeWidth; // @synthesize observeWidth=_observeWidth;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(retain, nonatomic) UIImageView *alipayIcon; // @synthesize alipayIcon=_alipayIcon;
@property(retain, nonatomic) UILabel *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setAlipayAccount:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
