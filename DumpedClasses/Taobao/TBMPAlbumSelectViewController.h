//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAAnimationDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, UITableView;

@interface TBMPAlbumSelectViewController : UIViewController <CAAnimationDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_assetsGroup;
    NSObject<OS_dispatch_queue> *_queueForAssetsGroup;
}

+ (id)defaultAssetsLibrary;
- (void).cxx_destruct;
- (void)updateAssetsGroup;
- (void)loadAssetsGroup;
- (void)provideTBMPAlbumAuthorityViewController:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toCameraAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)dealloc;
- (void)handleAssetChangedNotifiation:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

