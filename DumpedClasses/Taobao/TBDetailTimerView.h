//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBDetailTimerItemLabel, TBDetailTimerLabel, UIColor, UILabel;

@interface TBDetailTimerView : UIView
{
    UIColor *_color;
    UILabel *_separateHourLabel;
    UILabel *_separateMinLabel;
    TBDetailTimerLabel *_timerLabel;
    TBDetailTimerItemLabel *_hourLabel;
    TBDetailTimerItemLabel *_minLabel;
    TBDetailTimerItemLabel *_secondLabel;
}

@property(retain, nonatomic) TBDetailTimerItemLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) TBDetailTimerItemLabel *minLabel; // @synthesize minLabel=_minLabel;
@property(retain, nonatomic) TBDetailTimerItemLabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) TBDetailTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UILabel *separateMinLabel; // @synthesize separateMinLabel=_separateMinLabel;
@property(retain, nonatomic) UILabel *separateHourLabel; // @synthesize separateHourLabel=_separateHourLabel;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopTimer;
- (void)startTimer:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

