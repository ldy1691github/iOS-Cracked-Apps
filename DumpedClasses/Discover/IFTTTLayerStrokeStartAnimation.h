//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFTTTShapeLayerAnimation.h"

#import "IFTTTAnimatable.h"

@class NSString;

@interface IFTTTLayerStrokeStartAnimation : IFTTTShapeLayerAnimation <IFTTTAnimatable>
{
    NSString *_animationKey;
}

@property(retain, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
- (void).cxx_destruct;
- (id)strokeStartAnimation;
- (void)createBasicAnimation;
- (void)animate:(double)arg1;
- (_Bool)validStrokeStart:(double)arg1;
- (void)addKeyframeForTime:(double)arg1 strokeStart:(double)arg2 withEasingFunction:(CDUnknownBlockType)arg3;
- (void)addKeyframeForTime:(double)arg1 strokeStart:(double)arg2;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
