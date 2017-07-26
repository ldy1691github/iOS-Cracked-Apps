//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "CTHotelStyleTextFieldViewDelegate.h"

@class CTHotelOrderCacheBean, CTHotelStyleTextFieldView, NSString, UIButton, UILabel;

@interface CTHotelOrderInlandClientCell : CTCustomeGroupTableViewCell <CTHotelStyleTextFieldViewDelegate>
{
    id <CTHotelOrderInlandClientCellDelegate> _delegate;
    CDUnknownBlockType _editBlock;
    UIButton *_explanationButton;
    UILabel *_explanationLabel;
    CTHotelStyleTextFieldView *_styleTextFieldView;
    UIButton *_clientButton;
    CTHotelOrderCacheBean *_cacheBean;
}

+ (double)getHeightWithcacheBean:(id)arg1;
@property(retain, nonatomic) CTHotelOrderCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(retain, nonatomic) UIButton *clientButton; // @synthesize clientButton=_clientButton;
@property(retain, nonatomic) CTHotelStyleTextFieldView *styleTextFieldView; // @synthesize styleTextFieldView=_styleTextFieldView;
@property(retain, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(retain, nonatomic) UIButton *explanationButton; // @synthesize explanationButton=_explanationButton;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(nonatomic) __weak id <CTHotelOrderInlandClientCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hotelStyleTextFieldViewChangeItemValue;
- (void)clickClientButton:(id)arg1;
- (void)clickExplanationButton:(id)arg1;
- (void)fillCellWithcacheBean:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
