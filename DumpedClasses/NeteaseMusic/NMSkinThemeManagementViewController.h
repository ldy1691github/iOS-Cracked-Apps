//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMSkinThemeCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMBarButtonItem, NMSkinTheme, NSArray, NSString, UITableView;

@interface NMSkinThemeManagementViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NMSkinThemeCellDelegate>
{
    _Bool _isManaging;
    NMBarButtonItem *_manageButton;
    NMSkinTheme *_changeToSkin;
    UITableView *_tableView;
    NSArray *_downloadedArray;
}

@property(retain, nonatomic) NSArray *downloadedArray; // @synthesize downloadedArray=_downloadedArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)backAction:(id)arg1;
- (void)deleteTheme:(id)arg1;
- (void)deleteDownloadedSkinTheme:(id)arg1;
- (void)clickCell:(id)arg1 contentClicked:(id)arg2 index:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)changeSkinFinished:(id)arg1;
- (void)changeSkinBegin:(id)arg1;
- (id)getThemesArrayForIndexPath:(id)arg1;
- (id)themesArrayWithRange:(struct _NSRange)arg1;
- (void)_manageButtonClicked:(id)arg1;
- (void)_refreshRightBarButton;
- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

