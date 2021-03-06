//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "AliSelectionControlDelegate.h"

@class AliDetailModel, NSMutableArray, NSString, UILabel;

@interface AliTradeTmallServiceSelectionControl : UIControl <AliSelectionControlDelegate>
{
    _Bool _groupMustSelect;
    _Bool _groupMulti;
    NSMutableArray *_tmallServiceSelectControls;
    AliDetailModel *_detailModel;
    UILabel *_titleLabel;
    unsigned long long _preSelectControlIndex;
}

@property(nonatomic) unsigned long long preSelectControlIndex; // @synthesize preSelectControlIndex=_preSelectControlIndex;
@property(nonatomic) _Bool groupMulti; // @synthesize groupMulti=_groupMulti;
@property(nonatomic) _Bool groupMustSelect; // @synthesize groupMustSelect=_groupMustSelect;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) NSMutableArray *tmallServiceSelectControls; // @synthesize tmallServiceSelectControls=_tmallServiceSelectControls;
- (void).cxx_destruct;
- (_Bool)isMustSelectInitByServiceId:(id)arg1;
- (void)resetAutoSelect:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)clickedControl:(id)arg1 index:(unsigned long long)arg2;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setSelectService:(id)arg1 select:(_Bool)arg2;
- (void)createServiceControls;
- (void)setupBeforeCreateServiceControls;
- (void)reloadData;
- (void)setupChildServices:(id)arg1 serviceNames:(id)arg2 availableServiceUnits:(id)arg3 selectControlCount:(long long)arg4;
- (_Bool)isChildServiceSelected:(id)arg1;
- (id)createTmallSelectControl:(id)arg1 availableServiceUnits:(id)arg2;
- (void)handleWhenNoChildService:(id)arg1 serviceNames:(id)arg2 availableServiceUnits:(id)arg3;
- (void)traverseChildService:(id)arg1 serviceNames:(id)arg2 availableServiceUnits:(id)arg3;
- (_Bool)selectStatusForServiceId:(id)arg1 uniqueId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

