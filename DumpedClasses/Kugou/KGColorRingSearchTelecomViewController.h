//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGTelecomColorRingTableViewViewController.h"

@class KGColorRingSearchView, KGThemeLine, NSString, UIButton, UITextField, UIView;

@interface KGColorRingSearchTelecomViewController : KGTelecomColorRingTableViewViewController
{
    NSString *_keyword;
    KGColorRingSearchView *_searchView;
    UIView *_noResultView;
    UIView *_searchBg;
    KGThemeLine *_searchBgImageView;
    UITextField *_searchTextField;
    UIButton *_cancelBtn;
}

- (void).cxx_destruct;
- (void)onChangeTheme:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)hideSearchView:(id)arg1;
- (void)registerNotify;
- (void)removeNotify;
- (void)cancelSearchView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didReceiveMemoryWarning;
- (long long)showPlayBarWay;
- (void)reConnectEvent;
- (void)showSearchViewWithColorRingType:(long long)arg1 KeyWord:(id)arg2;
- (void)addNoResultView;
- (void)tapClicked:(id)arg1;
- (void)newSearchView;
- (void)showDisAppearAnimationAndPopSelf;
- (void)showAppearAnimation;
- (void)dealloc;
- (void)viewDidLoad;

@end
