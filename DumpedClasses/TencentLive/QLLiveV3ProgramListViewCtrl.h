//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

@class NSArray, QLJCELiveShowBillResponse, QLLiveV3ProgramListModel, QLLiveV3SubTabItem;

@interface QLLiveV3ProgramListViewCtrl : QLBaseTableViewController
{
    QLLiveV3SubTabItem *_tabItem;
    NSArray *_dataArray;
    QLLiveV3ProgramListModel *_programListModel;
    QLJCELiveShowBillResponse *_programListInfo;
}

@property(retain, nonatomic) QLJCELiveShowBillResponse *programListInfo; // @synthesize programListInfo=_programListInfo;
@property(retain, nonatomic) QLLiveV3ProgramListModel *programListModel; // @synthesize programListModel=_programListModel;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) QLLiveV3SubTabItem *tabItem; // @synthesize tabItem=_tabItem;
- (void).cxx_destruct;
- (id)titleForEmpty;
- (unsigned long long)pageViewUIStyle;
- (_Bool)showShadowOffsetOfScrollView;
- (struct CGRect)frameOfPageStatusView;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pageChineseName;
- (_Bool)shouldShowStarTheme;
- (_Bool)hasFootterDragRefresh;
- (void)retryDown:(id)arg1;
- (void)showError:(_Bool)arg1 error:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)leavePage;
- (void)enterPage;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

