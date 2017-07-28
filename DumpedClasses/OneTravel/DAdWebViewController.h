//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAAnimationDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView, UIWebView;

@interface DAdWebViewController : UIViewController <UIWebViewDelegate, CAAnimationDelegate>
{
    NSString *_url;
    UILabel *_titleLbl;
    UIWebView *_webView;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_webErrorView;
    UIImageView *_webErrorImage;
    UILabel *_webErrorLabel;
    long long _errorType;
    UIView *_titleView;
}

@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) UILabel *webErrorLabel; // @synthesize webErrorLabel=_webErrorLabel;
@property(retain, nonatomic) UIImageView *webErrorImage; // @synthesize webErrorImage=_webErrorImage;
@property(retain, nonatomic) UIView *webErrorView; // @synthesize webErrorView=_webErrorView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)back:(id)arg1;
- (id)errorImageName:(long long)arg1;
- (id)errorLabelText:(long long)arg1;
- (void)showErrorViewWithType:(long long)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)onClickWebErrorView:(id)arg1;
- (void)loadRequest;
- (void)adTitleBar;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
