//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPHomeOrderReminder, UIImageView, UILabel;

@interface ESPHomeOrderReminderView : UIView
{
    ESPHomeOrderReminder *_orderRemind;
    UIView *_containerView;
    UIImageView *_remindIconView;
    UILabel *_remindInfoLabel;
}

@property(retain, nonatomic) UILabel *remindInfoLabel; // @synthesize remindInfoLabel=_remindInfoLabel;
@property(retain, nonatomic) UIImageView *remindIconView; // @synthesize remindIconView=_remindIconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) ESPHomeOrderReminder *orderRemind; // @synthesize orderRemind=_orderRemind;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
