//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "CTDragNavigationControllerDelegate.h"
#import "CTFlightH5ContainerViewControllerDelegate.h"
#import "CTPassBookConnection.h"
#import "PKAddPassesViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class CTFlightH5ContainerViewController, CTFlightOrderDetailCacheBean, NSDictionary, NSString;

@interface CTMyFlightOrderDetailViewController : CTFlightRootViewController <CTFlightH5ContainerViewControllerDelegate, CTPassBookConnection, UIAlertViewDelegate, CTDragNavigationControllerDelegate, PKAddPassesViewControllerDelegate>
{
    _Bool aliPaySuccess;
    NSString *tmpURL;
    double createTime;
    int _currentPasses;
    _Bool _isBackToIndexPath;
    _Bool _isNeedRefresh;
    CTFlightOrderDetailCacheBean *cache_;
    CDUnknownBlockType _myResultBloick;
    NSDictionary *_myJsonObject;
    CTFlightH5ContainerViewController *_h5ViewCOntroller;
    NSString *_oldUrlString;
}

@property(copy, nonatomic) NSString *oldUrlString; // @synthesize oldUrlString=_oldUrlString;
@property(retain, nonatomic) CTFlightH5ContainerViewController *h5ViewCOntroller; // @synthesize h5ViewCOntroller=_h5ViewCOntroller;
@property(retain, nonatomic) NSDictionary *myJsonObject; // @synthesize myJsonObject=_myJsonObject;
@property(copy, nonatomic) CDUnknownBlockType myResultBloick; // @synthesize myResultBloick=_myResultBloick;
@property(nonatomic) _Bool isNeedRefresh; // @synthesize isNeedRefresh=_isNeedRefresh;
@property(nonatomic) _Bool isBackToIndexPath; // @synthesize isBackToIndexPath=_isBackToIndexPath;
@property(retain, nonatomic) CTFlightOrderDetailCacheBean *cache; // @synthesize cache=cache_;
- (void).cxx_destruct;
- (void)flightNavgationBarHid:(_Bool)arg1;
- (_Bool)dragNavigationControllerShouldPopToRoot:(id)arg1;
- (_Bool)dragNavigationControllerShouldCancelDragAction:(id)arg1;
- (void)urlServiceFailedCallBackWithBusinessCode:(id)arg1 errorCode:(int)arg2 errorInformation:(id)arg3;
- (void)urlServiceSuccessCallBackWithBusinessCode:(id)arg1 subServiceCount:(unsigned long long)arg2;
- (void)telephoneButtonClicked:(id)arg1;
- (void)doCTLoadingViewend;
- (void)doCTLoadingViewbegin;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)connectionLoadDataError;
- (void)connectionLoadDataSuccess:(id)arg1 serialNumber:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)errorConnection;
- (void)loadOrderDetialH5Page;
- (void)doPageTypeSelect;
- (_Bool)isShowWithHybird;
- (void)doRefreshDetail;
- (void)setViewByCache;
- (void)backBarButtonClicked:(id)arg1;
- (void)yesGoBackToIndexPage;
- (void)goBackToIndexPage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initCache;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

