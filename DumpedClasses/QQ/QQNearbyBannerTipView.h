//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBannerTipView.h"

@class NSDictionary, NSString, UILabel;

@interface QQNearbyBannerTipView : QQBannerTipView
{
    NSString *_subTitle;
    NSDictionary *_firstBtnDic;
    NSDictionary *_secondBtnDic;
    UILabel *_subLabel;
}

+ (id)bannerNearbyBannerTipView:(id)arg1 subTitle:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)showInView:(id)arg1 startY:(double)arg2;

// Remaining properties
@property(retain, nonatomic) NSDictionary *firstBtnDic; // @dynamic firstBtnDic;
@property(retain, nonatomic) NSDictionary *secondBtnDic; // @dynamic secondBtnDic;
@property(copy, nonatomic) NSString *subTitle; // @dynamic subTitle;

@end

