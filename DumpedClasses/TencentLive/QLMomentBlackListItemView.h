//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLMomentBlackListHeadView, QLMomentUser, QLRichLabel, UILabel;

@interface QLMomentBlackListItemView : UIView
{
    _Bool _showDelete;
    QLMomentUser *_user;
    QLMomentBlackListHeadView *_headView;
    UILabel *_nameLable;
    QLRichLabel *_richNameLabel;
}

@property(retain, nonatomic) QLRichLabel *richNameLabel; // @synthesize richNameLabel=_richNameLabel;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) QLMomentBlackListHeadView *headView; // @synthesize headView=_headView;
@property(nonatomic) _Bool showDelete; // @synthesize showDelete=_showDelete;
@property(retain, nonatomic) QLMomentUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

