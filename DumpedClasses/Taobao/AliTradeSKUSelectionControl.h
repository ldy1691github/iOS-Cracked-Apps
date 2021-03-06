//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "AliSelectionControlDelegate.h"

@class AliDetailModel, AliDetailSkuPropsValuesModel, AliTradeSKUView, NSMutableArray, NSString;

@interface AliTradeSKUSelectionControl : UIControl <AliSelectionControlDelegate>
{
    AliDetailModel *_detailModel;
    AliTradeSKUView *_skuView;
    NSMutableArray *_propertyTitles;
    NSMutableArray *_propertySelectControls;
    NSMutableArray *_endLines;
    AliDetailSkuPropsValuesModel *_selectedValueHistory;
}

@property(retain, nonatomic) AliDetailSkuPropsValuesModel *selectedValueHistory; // @synthesize selectedValueHistory=_selectedValueHistory;
@property(retain, nonatomic) NSMutableArray *endLines; // @synthesize endLines=_endLines;
@property(retain, nonatomic) NSMutableArray *propertySelectControls; // @synthesize propertySelectControls=_propertySelectControls;
@property(retain, nonatomic) NSMutableArray *propertyTitles; // @synthesize propertyTitles=_propertyTitles;
@property(nonatomic) __weak AliTradeSKUView *skuView; // @synthesize skuView=_skuView;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)performLayoutSubviews;
- (void)layoutSubviews;
- (void)clickedControl:(id)arg1 index:(unsigned long long)arg2;
- (void)macShowMoreAction:(id)arg1;
- (void)createSkuPropertyValueControl;
- (id)createPropSelectControl:(id)arg1;
- (id)createPropValueArray:(id)arg1;
- (id)createTitle:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

