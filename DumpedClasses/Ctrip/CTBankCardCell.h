//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTitleValueCell.h"

@class CTImageView, NSString, UILabel, UIView;

@interface CTBankCardCell : CTTitleValueCell
{
    _Bool _showChangeView;
    _Bool _cardNoInsertBlank;
    _Bool _showSeparateLine;
    int _cardTypeId;
    NSString *_bankName;
    NSString *_cardNumber;
    UILabel *_bankNameLabel;
    CTImageView *_iconImageView;
    UILabel *_cardNumberLabel;
    UIView *_changeView;
    UIView *_separateLineView;
}

@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIView *changeView; // @synthesize changeView=_changeView;
@property(retain, nonatomic) UILabel *cardNumberLabel; // @synthesize cardNumberLabel=_cardNumberLabel;
@property(retain, nonatomic) CTImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool showSeparateLine; // @synthesize showSeparateLine=_showSeparateLine;
@property(nonatomic) _Bool cardNoInsertBlank; // @synthesize cardNoInsertBlank=_cardNoInsertBlank;
@property(nonatomic) _Bool showChangeView; // @synthesize showChangeView=_showChangeView;
@property(retain, nonatomic) UILabel *bankNameLabel; // @synthesize bankNameLabel=_bankNameLabel;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(nonatomic) int cardTypeId; // @synthesize cardTypeId=_cardTypeId;
- (void).cxx_destruct;
- (id)insertBlank:(id)arg1;
- (void)setCellHeight;
- (void)setupSubViews;
- (id)init;

@end
