//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SSHorizenScrollViewCellDelegate.h"
#import "SSHorizenScrollViewDataSource.h"
#import "SSHorizenScrollViewDelegate.h"

@class NSMutableArray, NSString, SSHorizenScrollView, TTBubbleView, TTCategory, TTFeedRefreshView, TTFeedUserRefreshGuideBall, TTLastReadRefreshView;

@interface TTPagingScrollViewController : UIViewController <SSHorizenScrollViewDataSource, SSHorizenScrollViewDelegate, SSHorizenScrollViewCellDelegate>
{
    _Bool _isLaunchAction;
    id <TTPagingScrollViewControllerDelegate> _delegate;
    TTCategory *_currentCategory;
    TTFeedRefreshView *_refreshView;
    TTLastReadRefreshView *_lastReadRefreshView;
    NSMutableArray *_showCategoryModes;
    NSMutableArray *_showCategoryAdditionalModes;
    SSHorizenScrollView *_pagingContainerView;
    double _topInset;
    double _bottomInset;
    TTFeedUserRefreshGuideBall *_userRefreshGuideBall;
    TTBubbleView *_topBubbleView;
}

@property(retain, nonatomic) TTBubbleView *topBubbleView; // @synthesize topBubbleView=_topBubbleView;
@property(retain, nonatomic) TTFeedUserRefreshGuideBall *userRefreshGuideBall; // @synthesize userRefreshGuideBall=_userRefreshGuideBall;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(retain, nonatomic) SSHorizenScrollView *pagingContainerView; // @synthesize pagingContainerView=_pagingContainerView;
@property(retain, nonatomic) NSMutableArray *showCategoryAdditionalModes; // @synthesize showCategoryAdditionalModes=_showCategoryAdditionalModes;
@property(retain, nonatomic) NSMutableArray *showCategoryModes; // @synthesize showCategoryModes=_showCategoryModes;
@property(nonatomic) _Bool isLaunchAction; // @synthesize isLaunchAction=_isLaunchAction;
@property(retain, nonatomic) TTLastReadRefreshView *lastReadRefreshView; // @synthesize lastReadRefreshView=_lastReadRefreshView;
@property(retain, nonatomic) TTFeedRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) TTCategory *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(nonatomic) __weak id <TTPagingScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayCategoryManagerView:(id)arg1;
- (void)hideLastReadRefreshView:(id)arg1;
- (void)showLastReadRefreshView:(id)arg1;
- (void)hideTopRefreshBubbleView;
- (void)showTopUserRefreshGuideView;
- (void)userRefreshGuideBallButtonPressed;
- (void)horizenScrollCellContentViewStopLoading:(id)arg1 isUserPull:(_Bool)arg2;
- (void)horizenScrollCellContentViewStartLoading:(id)arg1;
- (void)horizenScrollView:(id)arg1 scrollViewDidScrollToIndex:(unsigned long long)arg2;
- (void)horizenScrollView:(id)arg1 scrollViewDidScrollFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 percent:(double)arg4;
- (void)horizenScrollView:(id)arg1 didDisplayCellsForIndex:(unsigned long long)arg2 isUserFlipScroll:(id)arg3;
- (_Bool)shouldAnimateRefreshViewWithScrollViewCell:(id)arg1;
- (void)adjustToolViewsWhenListCellMovedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 percent:(double)arg3;
- (void)adjustToolViewsAppearance;
- (void)handleUserRefreshGuideViewSettingEnabledNotification:(id)arg1;
- (void)handleRefreshButtonSettingEnabledNotification:(id)arg1;
- (void)refreshButtonPressed:(id)arg1;
- (void)lastReadRefreshButtonPressed:(id)arg1;
- (id)horizenScrollView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (void)horizenScrollView:(id)arg1 refreshScrollCell:(id)arg2 cellIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfCellsForHorizenScrollView:(id)arg1;
- (unsigned long long)numberOfCellCachesForHorizenScrollView:(id)arg1;
- (id)currentDisplayView;
- (_Bool)subscribeListIsEmpty;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (void)reload;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithTopInset:(double)arg1 bottomInset:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

