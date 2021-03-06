//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel;

@interface NBButton : UIButton
{
    int _redDot;
    UILabel *_redDotLabel;
}

@property(retain, nonatomic) UILabel *redDotLabel; // @synthesize redDotLabel=_redDotLabel;
@property(nonatomic) int redDot; // @synthesize redDot=_redDot;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchDown:(id)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (void)setImageUrl:(id)arg1 forState:(unsigned long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setImageUrl:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImageUrl:(id)arg1 forState:(unsigned long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setBackgroundImageUrl:(id)arg1 forState:(unsigned long long)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

