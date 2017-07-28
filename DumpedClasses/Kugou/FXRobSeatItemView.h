//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeLabel, UIButton, UIImageView;

@interface FXRobSeatItemView : UIView
{
    UIImageView *_headerView;
    KGThemeLabel *_nameLabel;
    UIButton *_robBtn;
    CDUnknownBlockType _robActionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType robActionHandler; // @synthesize robActionHandler=_robActionHandler;
@property(retain, nonatomic) UIButton *robBtn; // @synthesize robBtn=_robBtn;
@property(retain, nonatomic) KGThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)layoutRobedView;
- (void)robAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
