//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXViewController.h"

#import "FXMvPlayVllDelegate.h"
#import "FXMvShareViewControllerDelegate.h"

@class FXMvPlayVll, FXMvShareViewController, FXSMvDetail, NSString, UIImage;

@interface FXMvPlayViewController : FXViewController <FXMvPlayVllDelegate, FXMvShareViewControllerDelegate>
{
    long long _mvId;
    FXMvPlayVll *_playVll;
    FXMvShareViewController *_shareVC;
    NSString *_mvShortUrl;
    UIImage *_mvCoverImage;
    FXSMvDetail *_shareDetail;
}

@property(retain, nonatomic) FXSMvDetail *shareDetail; // @synthesize shareDetail=_shareDetail;
@property(retain, nonatomic) UIImage *mvCoverImage; // @synthesize mvCoverImage=_mvCoverImage;
@property(retain, nonatomic) NSString *mvShortUrl; // @synthesize mvShortUrl=_mvShortUrl;
@property(retain, nonatomic) FXMvShareViewController *shareVC; // @synthesize shareVC=_shareVC;
@property(retain, nonatomic) FXMvPlayVll *playVll; // @synthesize playVll=_playVll;
@property(nonatomic) long long mvId; // @synthesize mvId=_mvId;
- (void).cxx_destruct;
- (void)shareComplete:(_Bool)arg1 AndErrorCode:(unsigned long long)arg2 AndErrorMsg:(id)arg3 AndController:(id)arg4 AndItem:(id)arg5;
- (_Bool)clickShareViewController:(id)arg1 withItem:(id)arg2;
- (void)fxFirstPlaySuccess;
- (void)fxBackBtnTouch;
- (void)fxShowTips:(id)arg1;
- (void)fxTouchShareBtn:(id)arg1;
- (id)getUrl:(long long)arg1 RoomId:(long long)arg2;
- (void)fxTouchMv:(long long)arg1;
- (void)fxToLogin;
- (void)fxTouchActor:(long long)arg1 roomId:(long long)arg2 isLive:(_Bool)arg3;
- (void)fxTouchedUser:(long long)arg1;
- (void)fxFailedReceiveData:(id)arg1;
- (void)fxDidReceiveData;
- (void)showShareSheet:(id)arg1;
- (void)reConnectEvent;
- (void)requestData;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
