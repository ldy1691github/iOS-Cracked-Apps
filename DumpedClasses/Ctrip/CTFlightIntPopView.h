//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTFlightIntPopViewBottomBarModel, CTFlightIntPopViewModel, NSLayoutConstraint, NSMutableArray, UIButton, UILabel, UIScrollView;

@interface CTFlightIntPopView : UIView
{
    CTFlightIntPopViewModel *_popViewModel;
    CTFlightIntPopViewBottomBarModel *_bottomBarModel;
    id <CTFlightIntPopViewDelegate> _delegate;
    UIView *_bgView;
    UIScrollView *_containerScrollView;
    NSLayoutConstraint *_scrollViewToBottom;
    UIView *_bottomBarView;
    UILabel *_priceLabel;
    UILabel *_infoLabel;
    UIButton *_myButton;
    NSMutableArray *_scrollViewList;
}

@property(retain, nonatomic) NSMutableArray *scrollViewList; // @synthesize scrollViewList=_scrollViewList;
@property(nonatomic) __weak UIButton *myButton; // @synthesize myButton=_myButton;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewToBottom; // @synthesize scrollViewToBottom=_scrollViewToBottom;
@property(nonatomic) __weak UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <CTFlightIntPopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTFlightIntPopViewBottomBarModel *bottomBarModel; // @synthesize bottomBarModel=_bottomBarModel;
@property(retain, nonatomic) CTFlightIntPopViewModel *popViewModel; // @synthesize popViewModel=_popViewModel;
- (void).cxx_destruct;
- (void)clickBottomButton:(id)arg1;
- (void)setupBottomBar;
- (void)setupScrollView;
- (void)hidePopView;
- (void)showPopView;
- (id)createPagePlainViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createPageClockViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createRightPartWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createPageTableViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createPageBlueTitleWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createPageParaTitleWithModel:(id)arg1 atCoordY:(double)arg2;
- (void)setupPopViewWithModel:(id)arg1;
- (void)setupBottomBarWithModel:(id)arg1 adultAmount:(long long)arg2 childrenAmount:(long long)arg3 babyAmount:(long long)arg4;
- (void)addTapGesture;
- (void)awakeFromNib;

@end
