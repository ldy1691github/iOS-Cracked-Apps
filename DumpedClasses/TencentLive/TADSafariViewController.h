//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSafariViewController.h"

@interface TADSafariViewController : SFSafariViewController
{
    _Bool _ignoreStautsBarStatus;
    _Bool _statusBarHidden;
    long long _statusBarStyle;
}

@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool ignoreStautsBarStatus; // @synthesize ignoreStautsBarStatus=_ignoreStautsBarStatus;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithURL:(id)arg1;

@end

