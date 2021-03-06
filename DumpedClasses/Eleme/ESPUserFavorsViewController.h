//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ESPUserFavorsLoadOutSideCell, NSMutableArray, NSString, NSURLSessionDataTask, NVMEmptyHintView, NVMTableView;

@interface ESPUserFavorsViewController : NVMViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _fromPrintFavor;
    _Bool _showOutRangeRestaurants;
    _Bool _needLoadOutSideData;
    NVMTableView *_tableView;
    NSMutableArray *_tableData;
    NSMutableArray *_insideRestaurants;
    NSMutableArray *_outsideRestaurants;
    NVMEmptyHintView *_emptyView;
    NVMEmptyHintView *_networkErrorView;
    NSURLSessionDataTask *_lastDataTask;
    ESPUserFavorsLoadOutSideCell *_outSideCell;
    unsigned long long _currentFetchType;
}

@property(nonatomic) _Bool needLoadOutSideData; // @synthesize needLoadOutSideData=_needLoadOutSideData;
@property(nonatomic, getter=isShowOutRangeRestaurants) _Bool showOutRangeRestaurants; // @synthesize showOutRangeRestaurants=_showOutRangeRestaurants;
@property(nonatomic) unsigned long long currentFetchType; // @synthesize currentFetchType=_currentFetchType;
@property(retain, nonatomic) ESPUserFavorsLoadOutSideCell *outSideCell; // @synthesize outSideCell=_outSideCell;
@property(nonatomic) __weak NSURLSessionDataTask *lastDataTask; // @synthesize lastDataTask=_lastDataTask;
@property(retain, nonatomic) NVMEmptyHintView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(retain, nonatomic) NVMEmptyHintView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableArray *outsideRestaurants; // @synthesize outsideRestaurants=_outsideRestaurants;
@property(retain, nonatomic) NSMutableArray *insideRestaurants; // @synthesize insideRestaurants=_insideRestaurants;
@property(retain, nonatomic) NSMutableArray *tableData; // @synthesize tableData=_tableData;
@property(retain, nonatomic) NVMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic, getter=isFromPrintFavor) _Bool fromPrintFavor; // @synthesize fromPrintFavor=_fromPrintFavor;
- (void).cxx_destruct;
- (void)showEmptyFavoredRestaurantsView;
- (void)showErrorView;
- (void)showTableview;
- (void)removeEmptyView;
- (void)loadTableView;
- (void)cancelLastTask;
- (void)fetchFavoriteRestaurants:(long long)arg1 serviceType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMore;
- (void)doInitialOutSideFetch;
- (void)doInitialFetch;
- (void)updateOutsideRestaurants:(id)arg1;
- (void)updateInsideRestaurants:(id)arg1;
- (void)alertBankruptcyAtIndexPath:(id)arg1;
- (void)deleteFavoredRestarantWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

