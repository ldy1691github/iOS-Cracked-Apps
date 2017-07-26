//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APSKLaunchpadDelegate.h"
#import "OSPRowPannelProtocol.h"
#import "PromotionCenterDelegate.h"
#import "UIWebViewDelegate.h"

@class APSKLaunchpad, NSArray, NSDictionary, NSString, OPTimeOffsetHelper, OSPArrowButton, OSPExtRateView, OSPGoodsInfoView, OSPInfoPannel, OSPMutableLinePanel, OSPPayChannel, OSPPayResultView, OSPRowPannel, UIButton, UIImageView, UILabel, UIScrollView, UIViewController;

@interface OSPPaySuccessView : UIView <PromotionCenterDelegate, OSPRowPannelProtocol, UIWebViewDelegate, APSKLaunchpadDelegate>
{
    NSDictionary *_modelData;
    UILabel *resultTips;
    UIImageView *tipsImgView;
    NSArray *oldNavigatorBtns;
    NSArray *oldNavigatorLeftBtns;
    NSString *oldTitle;
    OPTimeOffsetHelper *timeHelper;
    UIScrollView *_scrollView;
    id <OSPPaySuccActionProtocol> _eventDelegate;
    UIViewController *_naviVC;
    UIView *_advertView;
    OSPPayChannel *_payPannels;
    OSPPayChannel *_preferentialPannels;
    OSPPayResultView *_payResultView;
    UIView *_payResultBgView;
    UIView *_officialAccountsView;
    OSPArrowButton *_vipPointsView;
    UIView *_businessADView;
    UIButton *_feedbackButton;
    OSPRowPannel *_rowButtonPannel;
    OSPMutableLinePanel *_ratePannel;
    APSKLaunchpad *_sharePad;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_cornerText;
    OSPGoodsInfoView *_goodsView;
    OSPInfoPannel *_infoPannel;
    OSPExtRateView *_extRateView;
}

@property(retain, nonatomic) OSPExtRateView *extRateView; // @synthesize extRateView=_extRateView;
@property(retain, nonatomic) OSPInfoPannel *infoPannel; // @synthesize infoPannel=_infoPannel;
@property(retain, nonatomic) OSPGoodsInfoView *goodsView; // @synthesize goodsView=_goodsView;
@property(copy, nonatomic) NSString *cornerText; // @synthesize cornerText=_cornerText;
@property(copy, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) APSKLaunchpad *sharePad; // @synthesize sharePad=_sharePad;
@property(retain, nonatomic) OSPMutableLinePanel *ratePannel; // @synthesize ratePannel=_ratePannel;
@property(retain, nonatomic) OSPRowPannel *rowButtonPannel; // @synthesize rowButtonPannel=_rowButtonPannel;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(nonatomic) __weak UIView *businessADView; // @synthesize businessADView=_businessADView;
@property(retain, nonatomic) OSPArrowButton *vipPointsView; // @synthesize vipPointsView=_vipPointsView;
@property(retain, nonatomic) UIView *officialAccountsView; // @synthesize officialAccountsView=_officialAccountsView;
@property(retain, nonatomic) UIView *payResultBgView; // @synthesize payResultBgView=_payResultBgView;
@property(retain, nonatomic) OSPPayResultView *payResultView; // @synthesize payResultView=_payResultView;
@property(retain, nonatomic) OSPPayChannel *preferentialPannels; // @synthesize preferentialPannels=_preferentialPannels;
@property(retain, nonatomic) OSPPayChannel *payPannels; // @synthesize payPannels=_payPannels;
@property(retain, nonatomic) UIView *advertView; // @synthesize advertView=_advertView;
@property(nonatomic) __weak UIViewController *naviVC; // @synthesize naviVC=_naviVC;
@property(retain, nonatomic) NSDictionary *modelData; // @synthesize modelData=_modelData;
@property(nonatomic) __weak id <OSPPaySuccActionProtocol> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)onDoReward:(id)arg1;
- (void)doPromotion:(id)arg1;
- (void)onCellClick:(id)arg1;
- (id)getShareImage;
- (void)removeAllAlertViews;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)handleMerchantPushNotification:(id)arg1;
- (void)handlePointsPushNotification:(id)arg1;
- (void)scanVipPoints;
- (void)shareToChannel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)shareToThird;
- (void)viewWillDestroy;
- (void)dealloc;
- (void)reLayout;
- (void)feedbackProblem;
- (void)showFeedbackButton:(double)arg1;
- (void)displayRowPannel:(id)arg1;
- (void)displayADView:(id)arg1;
- (void)displayOfficialAccount:(id)arg1;
- (void)displayBusinessRecommend:(id)arg1;
- (void)loadADView:(id)arg1 miniPageId:(id)arg2;
- (double)displayRate:(double)arg1;
- (double)displayGoodsInfo:(double)arg1;
- (double)displayChannels:(double)arg1 data:(id)arg2;
- (double)dipalayPreferential:(double)arg1 data:(id)arg2;
- (double)displayGoodsInfoView:(double)arg1 data:(id)arg2;
- (id)createBorder:(long long)arg1 yPos:(double)arg2;
- (double)dispayPayResult;
- (_Bool)obj2Bool:(id)arg1;
- (double)displayPoints:(double)arg1 isNotice:(_Bool)arg2;
- (void)setData:(id)arg1;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrameNoNaviRBtn:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
