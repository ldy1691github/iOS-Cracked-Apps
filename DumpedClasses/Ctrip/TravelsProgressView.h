//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TravelsProgressView : UIView
{
    float _progress;
    UILabel *_percentLB;
}

@property(retain, nonatomic) UILabel *percentLB; // @synthesize percentLB=_percentLB;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (id)progressTintColor;
- (id)trackTintColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
