//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface RPCamFlashSwitchView : UIView
{
    _Bool _expanded;
    long long _curSwitchMode;
    UIButton *_autoButton;
    UIButton *_openButton;
    UIButton *_closeButton;
}

@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UIButton *autoButton; // @synthesize autoButton=_autoButton;
@property(nonatomic) long long curSwitchMode; // @synthesize curSwitchMode=_curSwitchMode;
- (void).cxx_destruct;
- (void)doCloseFlash:(id)arg1;
- (void)doOpenFlash:(id)arg1;
- (void)doAutoFlash:(id)arg1;
- (void)switchFlashMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onToggleFlahOption:(id)arg1;
- (void)onAutoFlashModeButtonPressed:(id)arg1;
- (void)onCloseFlashButtonPressed:(id)arg1;
- (void)onOpenFlashButtonPressed:(id)arg1;
- (void)showFlshOptions;
- (void)hideFlashOptions;

@end

