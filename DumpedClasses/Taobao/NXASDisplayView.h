//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NXNode;

@interface NXASDisplayView : UIView
{
    _Bool _inHitTest;
    _Bool _inPointInside;
    NXNode *_asyncdisplaykit_node;
    NXNode *_keepalive_node;
}

+ (Class)layerClass;
@property(retain, nonatomic) NXNode *keepalive_node; // @synthesize keepalive_node=_keepalive_node;
@property __weak NXNode *asyncdisplaykit_node; // @synthesize asyncdisplaykit_node=_asyncdisplaykit_node;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)nx_asyncdisplay_asyncTransactionContainerStateDidChange;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)__forwardTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentMode:(long long)arg1;
- (long long)contentMode;
- (void)setBounds:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

