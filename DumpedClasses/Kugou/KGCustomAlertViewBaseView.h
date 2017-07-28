//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KGGeneralAlertShowDelegate.h"
#import "KGGeneralAlertViewShow.h"

@class NSString, UIWindow;

@interface KGCustomAlertViewBaseView : UIView <KGGeneralAlertViewShow, KGGeneralAlertShowDelegate>
{
    _Bool _shouldGiveUpWhenOtherIsShowing;
    id <KGCustomAlertShowDelegate> _delegate;
    UIWindow *_myWindow;
}

@property(nonatomic) _Bool shouldGiveUpWhenOtherIsShowing; // @synthesize shouldGiveUpWhenOtherIsShowing=_shouldGiveUpWhenOtherIsShowing;
@property(retain, nonatomic) UIWindow *myWindow; // @synthesize myWindow=_myWindow;
@property(nonatomic) __weak id <KGCustomAlertShowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long supportedOrientation;
- (void)dealloc;
- (void)prepareAlertWhenComplete:(CDUnknownBlockType)arg1;
- (void)setHidden:(_Bool)arg1;
- (_Bool)alertCanAppear:(id)arg1;
- (void)alertDidAppear:(id)arg1;
- (void)originHide;
- (void)hide;
- (void)originShow;
- (void)showWhenNoOtherAlertIsShowing;
- (void)show;
- (id)createWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
