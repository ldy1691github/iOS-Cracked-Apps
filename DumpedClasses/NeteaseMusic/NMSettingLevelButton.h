//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel;

@interface NMSettingLevelButton : UIButton
{
    UILabel *_levelLabel;
}

- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)_calculateFrameSize;
- (void)setLevel:(unsigned long long)arg1;
- (id)init;

@end

