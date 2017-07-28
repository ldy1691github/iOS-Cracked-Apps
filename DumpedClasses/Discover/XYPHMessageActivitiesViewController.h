//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "XYPHMessageActivitiesCellDelegate.h"
#import "XYPHMessageBannerCellDelegate.h"

@class NSMutableArray, NSString, UILabel, UITableView, XYPHMessageActivitiesCellAdapter, XYPHMessageBanner, XYPHMessageBannerCellAdapter;

@interface XYPHMessageActivitiesViewController : XYPHBaseViewController <UITableViewDataSource, UITableViewDelegate, XYPHMessageBannerCellDelegate, XYPHMessageActivitiesCellDelegate, TTTAttributedLabelDelegate>
{
    _Bool _isLoading;
    UITableView *_tableView;
    UILabel *_footerLabel;
    XYPHMessageBannerCellAdapter *_bannerCellAdapter;
    XYPHMessageActivitiesCellAdapter *_activitiesCellAdapter;
    XYPHMessageBanner *_banner;
    NSMutableArray *_dataArray;
    NSMutableArray *_dateArray;
    NSMutableArray *_categorizedDataArray;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *categorizedDataArray; // @synthesize categorizedDataArray=_categorizedDataArray;
@property(retain, nonatomic) NSMutableArray *dateArray; // @synthesize dateArray=_dateArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) XYPHMessageBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) XYPHMessageActivitiesCellAdapter *activitiesCellAdapter; // @synthesize activitiesCellAdapter=_activitiesCellAdapter;
@property(retain, nonatomic) XYPHMessageBannerCellAdapter *bannerCellAdapter; // @synthesize bannerCellAdapter=_bannerCellAdapter;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)messageActivitiesBoardCellDidTapBoard:(id)arg1;
- (void)messageActivitiesNoteCell:(id)arg1 didTapNoteAtIndex:(unsigned long long)arg2;
- (void)messageActivitiesCellDidTapAvatar:(id)arg1;
- (void)messageBannerCellDidTapDismissButton:(id)arg1;
- (void)messageBannerCellDidTapActionButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setRead;
- (void)categorizeData;
- (void)requestMessagesWithStart:(_Bool)arg1;
- (void)loadMoreData;
- (void)refresh;
- (void)showRecommendUserBanner;
- (void)showRecommendContactsBanner;
- (void)showRecommendWeiboBanner;
- (void)requestBanner;
- (void)scrollToTop;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
