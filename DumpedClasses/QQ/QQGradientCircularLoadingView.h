//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CALayer;

@interface QQGradientCircularLoadingView : UIView
{
    double _rotateDuration;
    CALayer *_gradientLayer;
    CAGradientLayer *_gradientLeftLayer;
    CAGradientLayer *_gradientRightLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientRightLayer; // @synthesize gradientRightLayer=_gradientRightLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLeftLayer; // @synthesize gradientLeftLayer=_gradientLeftLayer;
@property(retain, nonatomic) CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double rotateDuration; // @synthesize rotateDuration=_rotateDuration;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)setLoadingLineStartColor:(id)arg1 midColor:(id)arg2 endColor:(id)arg3;
- (void)dealloc;
- (id)initWithCenter:(struct CGPoint)arg1 radius:(double)arg2 width:(double)arg3;

@end

