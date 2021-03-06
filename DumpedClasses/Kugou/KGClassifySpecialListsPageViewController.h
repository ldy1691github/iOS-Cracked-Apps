//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "RefreshControlDelegate.h"
#import "TagSpecialTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGClassifySpecialListsBLL, KGDefaultNetErrorView, KGRefreshController, KGTableView, NSMutableArray, NSString;

@interface KGClassifySpecialListsPageViewController : KGScrollPageViewController <UITableViewDelegate, UITableViewDataSource, TagSpecialTableViewCellDelegate, RefreshControlDelegate>
{
    KGClassifySpecialListsBLL *_bll;
    _Bool _isSearchTagInterceptView;
    _Bool _isEnd;
    _Bool _isLoading;
    long long _tagID;
    long long _specialListsID;
    long long _sort;
    NSString *_fromPath;
    id <KGClassifyScorllPageDelegate> _classifyDelegate;
    double _screenShotY;
    KGTableView *_tableView;
    NSMutableArray *_data;
    KGRefreshController *_refreshController;
    KGDefaultNetErrorView *_errorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) KGRefreshController *refreshController; // @synthesize refreshController=_refreshController;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double screenShotY; // @synthesize screenShotY=_screenShotY;
@property(nonatomic) __weak id <KGClassifyScorllPageDelegate> classifyDelegate; // @synthesize classifyDelegate=_classifyDelegate;
@property(nonatomic) _Bool isSearchTagInterceptView; // @synthesize isSearchTagInterceptView=_isSearchTagInterceptView;
@property(copy, nonatomic) NSString *fromPath; // @synthesize fromPath=_fromPath;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(nonatomic) long long specialListsID; // @synthesize specialListsID=_specialListsID;
@property(nonatomic) long long tagID; // @synthesize tagID=_tagID;
- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)clickSpecialMusicPaly:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadingFinishAndRefresh;
- (void)p_showLoading;
- (void)p_hideErrorView;
- (void)p_showErrorView;
- (void)p_requestData;
- (void)viewDidInitialize;
- (void)p_requestAgain;
- (void)p_initUI;
- (void)viewDidEnter;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

