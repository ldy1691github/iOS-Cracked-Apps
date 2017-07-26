//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString;

@interface QLPageNavigator : UIScrollView <UIScrollViewDelegate>
{
    long long _currentPageIndex;
    long long _lastPageIndex;
    _Bool _shouldResponseScroll;
    id <QLPageNavigatorDatasource> _dataSource;
    id <QLPageNavigatorDelegate> _actionDelegate;
    unsigned long long _pageGapWidth;
    long long _lastPageCount;
}

@property(nonatomic) long long lastPageCount; // @synthesize lastPageCount=_lastPageCount;
@property _Bool shouldResponseScroll; // @synthesize shouldResponseScroll=_shouldResponseScroll;
@property(nonatomic) unsigned long long pageGapWidth; // @synthesize pageGapWidth=_pageGapWidth;
@property __weak id <QLPageNavigatorDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property __weak id <QLPageNavigatorDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)preLayoutPage:(long long)arg1;
- (void)layoutPage:(long long)arg1;
- (id)viewControllerForIndex:(long long)arg1;
- (void)handleViewTenseAppearByVC:(id)arg1;
- (long long)currentPageIndex;
- (void)setPageIndex:(long long)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
