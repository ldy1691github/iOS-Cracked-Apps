//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ABAudio, UIButton, UIImage;

@interface ABFaceLivenessNaviView : UIView
{
    float _soundVolume;
    UIView *_backView;
    UIButton *_navBackButton;
    UIButton *_navSoundButton;
    UIImage *_navSoundOpen;
    UIImage *_navSoundClose;
    UIButton *_navBackCovButton;
    UIButton *_navSoundCovButton;
    ABAudio *_audio;
}

@property(retain, nonatomic) ABAudio *audio; // @synthesize audio=_audio;
@property(nonatomic) float soundVolume; // @synthesize soundVolume=_soundVolume;
@property(retain, nonatomic) UIButton *navSoundCovButton; // @synthesize navSoundCovButton=_navSoundCovButton;
@property(retain, nonatomic) UIButton *navBackCovButton; // @synthesize navBackCovButton=_navBackCovButton;
@property(retain, nonatomic) UIImage *navSoundClose; // @synthesize navSoundClose=_navSoundClose;
@property(retain, nonatomic) UIImage *navSoundOpen; // @synthesize navSoundOpen=_navSoundOpen;
@property(retain, nonatomic) UIButton *navSoundButton; // @synthesize navSoundButton=_navSoundButton;
@property(retain, nonatomic) UIButton *navBackButton; // @synthesize navBackButton=_navBackButton;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)onVolumeNotify:(float)arg1;
- (void)goBack:(id)arg1;
- (void)onDetectFinish;
- (void)navSoundSwitch:(id)arg1;
- (void)onRestartDetect;
- (void)onDetectStart;
- (void)addNavigationView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

