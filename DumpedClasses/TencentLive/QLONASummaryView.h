//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLJCEONASummary, UIButton, UILabel;

@interface QLONASummaryView : UIView
{
    UILabel *_lblContent;
    UIButton *_btnExpand;
    _Bool _isExpanded;
    long long _defaultLines;
    QLJCEONASummary *_summary;
}

@property(retain, nonatomic) QLJCEONASummary *summary; // @synthesize summary=_summary;
@property(nonatomic) long long defaultLines; // @synthesize defaultLines=_defaultLines;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
- (void).cxx_destruct;
- (void)expandDown:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

