//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIPageControl, UIScrollView;

@interface KTVImagePlayerView : UIView <UIScrollViewDelegate>
{
    _Bool _autoScroll;
    _Bool _hidePageControl;
    id <KTVImagePlayerViewDelegate> _imagePlayerViewDelegate;
    unsigned long long _scrollInterval;
    long long _pageControlPosition;
    UIScrollView *_scrollView;
    long long _count;
    NSTimer *_autoScrollTimer;
    UIPageControl *_pageControl;
    NSMutableArray *_pageControlConstraints;
    NSMutableArray *_scrollViewConstraints;
    struct UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) NSMutableArray *scrollViewConstraints; // @synthesize scrollViewConstraints=_scrollViewConstraints;
@property(retain, nonatomic) NSMutableArray *pageControlConstraints; // @synthesize pageControlConstraints=_pageControlConstraints;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) _Bool hidePageControl; // @synthesize hidePageControl=_hidePageControl;
@property(nonatomic) long long pageControlPosition; // @synthesize pageControlPosition=_pageControlPosition;
@property(nonatomic) unsigned long long scrollInterval; // @synthesize scrollInterval=_scrollInterval;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(nonatomic) __weak id <KTVImagePlayerViewDelegate> imagePlayerViewDelegate; // @synthesize imagePlayerViewDelegate=_imagePlayerViewDelegate;
- (void).cxx_destruct;
- (void)initWithCount:(long long)arg1 delegate:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
- (void)initWithCount:(long long)arg1 delegate:(id)arg2;
- (void)initWithImageURLs:(id)arg1 placeholder:(id)arg2 delegate:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4;
- (void)initWithImageURLs:(id)arg1 placeholder:(id)arg2 delegate:(id)arg3;
- (void)stopTimer;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleScrollTimer:(id)arg1;
- (void)handleClickPageControl:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)reloadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

