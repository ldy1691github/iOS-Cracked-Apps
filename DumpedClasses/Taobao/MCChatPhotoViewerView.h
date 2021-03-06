//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class MCChatPhotoModel, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView;

@interface MCChatPhotoViewerView : UIView <UIScrollViewDelegate>
{
    MCChatPhotoModel *_photoModel;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    UILabel *_placeHoldFontLabel;
    UILabel *_placeHoldTipsLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_failFontLabel;
    UILabel *_failTipsLabel;
    id <SDWebImageOperation> _imageDownload;
    id _associatePhotoViewerContainerViewContext;
}

+ (id)photoViewerViewWithAssociatePhotoViewerContainerViewContext:(id)arg1;
@property(nonatomic) __weak id associatePhotoViewerContainerViewContext; // @synthesize associatePhotoViewerContainerViewContext=_associatePhotoViewerContainerViewContext;
@property(retain, nonatomic) id <SDWebImageOperation> imageDownload; // @synthesize imageDownload=_imageDownload;
@property(retain, nonatomic) UILabel *failTipsLabel; // @synthesize failTipsLabel=_failTipsLabel;
@property(retain, nonatomic) UILabel *failFontLabel; // @synthesize failFontLabel=_failFontLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *placeHoldTipsLabel; // @synthesize placeHoldTipsLabel=_placeHoldTipsLabel;
@property(retain, nonatomic) UILabel *placeHoldFontLabel; // @synthesize placeHoldFontLabel=_placeHoldFontLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MCChatPhotoModel *photoModel; // @synthesize photoModel=_photoModel;
- (void).cxx_destruct;
- (void)modifyImageViewFrame:(struct CGRect)arg1;
- (struct CGRect)normalImageViewFrame;
- (void)updatePhotoModel:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 associatePhotoViewerContainerViewContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

