//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface FFPullToLoadMoreView : UIView
{
    int _loadState;
    _Bool _outingOfBound;
    UILabel *_textLabel;
    id <FFPullToLoadMoreViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FFPullToLoadMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)ffLoadMoreViewDataSourceDidFinishedLoading:(id)arg1;
- (void)ffLoadMoreScrollViewDidEndDragging:(id)arg1;
- (void)ffLoadMoreScrollViewDidScroll:(id)arg1;
- (void)setLoadState:(int)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

