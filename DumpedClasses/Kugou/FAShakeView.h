//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

@class UIView;

@interface FAShakeView : FAPanGesView
{
    CDUnknownBlockType _callBack;
    UIView *_centerView;
}

@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)show:(id)arg1 BigBoxIntro:(id)arg2 SmallBoxIntro:(id)arg3;
- (void)show:(id)arg1 Intro:(id)arg2;
- (void)show:(id)arg1;
- (void)closeView;
- (void)configBoxViewBigBoxIntro:(id)arg1 SmallBoxIntro:(id)arg2;
- (void)configSubViews;
- (id)init;

@end

