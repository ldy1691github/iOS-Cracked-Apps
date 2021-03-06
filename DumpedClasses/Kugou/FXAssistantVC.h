//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "FXAssistantTurnToPayDelegate.h"
#import "KGMessageCenterSuperBLLDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGMessageCenterWatchBLL, NSMutableArray, NSString, UITableView;

@interface FXAssistantVC : KGViewController <UITableViewDelegate, UITableViewDataSource, FXAssistantTurnToPayDelegate, KGMessageCenterSuperBLLDelegate>
{
    int _msgSourceType;
    UITableView *_tableView;
    NSMutableArray *_assArray;
    NSString *_nickName;
    NSString *_offlineTag;
    KGMessageCenterWatchBLL *_watchBLL;
}

@property(retain, nonatomic) KGMessageCenterWatchBLL *watchBLL; // @synthesize watchBLL=_watchBLL;
@property(copy, nonatomic) NSString *offlineTag; // @synthesize offlineTag=_offlineTag;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSMutableArray *assArray; // @synthesize assArray=_assArray;
@property(nonatomic) int msgSourceType; // @synthesize msgSourceType=_msgSourceType;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)KGUsingControllerState:(int)arg1;
- (long long)showPlayBarWay;
- (void)payForTheVipCardWithType:(long long)arg1;
- (void)payForTheStarCard;
- (void)toPayButtonDidClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)ifWifiOnly;
- (void)KGMessageCenterDidReceiveOriginData:(id)arg1 messageBLL:(id)arg2;
- (void)loadMoreData;
- (void)getData;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

