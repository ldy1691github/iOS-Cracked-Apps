//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGAlertLoginCopeCenter.h"
#import "KGAllCloseDelegate.h"
#import "KGSongPermitAlertViewDelegate.h"

@class KGGoodsEntity, NSString;

@interface KGPermitController : NSObject <KGSongPermitAlertViewDelegate, KGAllCloseDelegate, KGAlertLoginCopeCenter>
{
    KGGoodsEntity *_tryListenEntity;
    CDUnknownBlockType _buyPermitBlock;
    _Bool _isPermitChecking;
    id <KGAlertLoginCopeCenter> _alertLoginDelegate;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isPermitChecking; // @synthesize isPermitChecking=_isPermitChecking;
@property(nonatomic) __weak id <KGAlertLoginCopeCenter> alertLoginDelegate; // @synthesize alertLoginDelegate=_alertLoginDelegate;
- (void).cxx_destruct;
- (void)copeLoginWithAlert:(id)arg1 loginStatusCallBack:(CDUnknownBlockType)arg2;
- (void)statisticForHQPermitAlertViewMusicPkgAction;
- (void)statisticForHQPermitAlertViewShow;
- (void)statisticForSQPermitAlertViewMusicPkgAction;
- (void)statisticForSQPermitAlertViewShow;
- (void)tryListenHQSong:(id)arg1 withBuyPermit:(long long)arg2 andComploetedBlock:(CDUnknownBlockType)arg3;
- (void)tryListenSQSong:(id)arg1 withBuyPermit:(long long)arg2 andComploetedBlock:(CDUnknownBlockType)arg3;
- (void)toBuyMusicPackagePermit;
- (void)closeCancelWithTag:(long long)arg1;
- (void)closeSuccessWithTag:(long long)arg1;
- (void)songPermitAlertViewDidAction:(id)arg1 withActionType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
