//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "ActionSheetDataDelegate.h"
#import "PAPhotoRecommandViewDelegate.h"
#import "PAPhotoViewDelegate.h"
#import "PAPhtotoCommentViewDelegate.h"
#import "QQPbCommentDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, PAAlbumTableView, PAPhotoRecommandView, PAPhotoTipView, PAPhtotoCommentView, PAPublicAccountAlbumModel, QQPublicAccountLikeCommentBoxView, QQWebShareActionSheet, UIButton, UITapGestureRecognizer, UIView;

@interface QQPAAlbumViewController : QQViewController <QQPbCommentDelegate, UITableViewDataSource, UITableViewDelegate, PAPhotoRecommandViewDelegate, UIViewControllerTransitioningDelegate, ActionSheetDataDelegate, UIGestureRecognizerDelegate, PAPhotoViewDelegate, PAPhtotoCommentViewDelegate>
{
    _Bool _isInit;
    double _initTime;
    double _lastClickTime;
    _Bool _isCoverVisible;
    _Bool _isSingleImageMode;
    int _sourceFromType;
    unsigned long long _recommendIndex;
    _Bool _isReportedGalleryInfo;
    _Bool _isReportedGalleryClickEvent;
    _Bool _isPreDownloadRecommend;
    int _detailSourceFromType;
    int _shareOpenType;
    NSString *_albumId;
    PAAlbumTableView *_tableView;
    UIButton *_leftBackBtn;
    UIButton *_enterRecentBtn;
    UIButton *_rightShareBtn;
    PAPhtotoCommentView *_commentView;
    QQWebShareActionSheet *_shareSheet;
    NSIndexPath *_startDraggingMiddleIndex;
    NSIndexPath *_currentMiddleIndexPath;
    NSString *_articleId;
    NSString *_echoInfo;
    PAPhotoTipView *_tipView;
    PAPublicAccountAlbumModel *_albumModel;
    UIView *_pbCommentBoxScreenMask;
    QQPublicAccountLikeCommentBoxView *_pbCommentBoxView;
    UIView *_parentView;
    PAPhotoRecommandView *_recommandView;
    UITapGestureRecognizer *_commentBoxtapGesture;
    NSMutableArray *_needToSaveWhenPopVCArrs;
    NSString *_uniqueViewID;
    unsigned long long _thirdLineHeight;
    double _scrollLastTime;
    unsigned long long _viewedImages;
}

@property(nonatomic) int shareOpenType; // @synthesize shareOpenType=_shareOpenType;
@property(nonatomic) _Bool isPreDownloadRecommend; // @synthesize isPreDownloadRecommend=_isPreDownloadRecommend;
@property(nonatomic) _Bool isReportedGalleryClickEvent; // @synthesize isReportedGalleryClickEvent=_isReportedGalleryClickEvent;
@property(nonatomic) _Bool isReportedGalleryInfo; // @synthesize isReportedGalleryInfo=_isReportedGalleryInfo;
@property(nonatomic) int detailSourceFromType; // @synthesize detailSourceFromType=_detailSourceFromType;
@property(nonatomic) unsigned long long viewedImages; // @synthesize viewedImages=_viewedImages;
@property(nonatomic) double scrollLastTime; // @synthesize scrollLastTime=_scrollLastTime;
@property(nonatomic) unsigned long long thirdLineHeight; // @synthesize thirdLineHeight=_thirdLineHeight;
@property(retain, nonatomic) NSString *uniqueViewID; // @synthesize uniqueViewID=_uniqueViewID;
@property(retain, nonatomic) NSMutableArray *needToSaveWhenPopVCArrs; // @synthesize needToSaveWhenPopVCArrs=_needToSaveWhenPopVCArrs;
@property(retain, nonatomic) UITapGestureRecognizer *commentBoxtapGesture; // @synthesize commentBoxtapGesture=_commentBoxtapGesture;
@property(retain, nonatomic) PAPhotoRecommandView *recommandView; // @synthesize recommandView=_recommandView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) QQPublicAccountLikeCommentBoxView *pbCommentBoxView; // @synthesize pbCommentBoxView=_pbCommentBoxView;
@property(retain, nonatomic) UIView *pbCommentBoxScreenMask; // @synthesize pbCommentBoxScreenMask=_pbCommentBoxScreenMask;
@property(retain, nonatomic) PAPublicAccountAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
@property(retain, nonatomic) PAPhotoTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSString *echoInfo; // @synthesize echoInfo=_echoInfo;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSIndexPath *currentMiddleIndexPath; // @synthesize currentMiddleIndexPath=_currentMiddleIndexPath;
@property(retain, nonatomic) NSIndexPath *startDraggingMiddleIndex; // @synthesize startDraggingMiddleIndex=_startDraggingMiddleIndex;
@property(retain, nonatomic) QQWebShareActionSheet *shareSheet; // @synthesize shareSheet=_shareSheet;
@property(retain, nonatomic) PAPhtotoCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIButton *rightShareBtn; // @synthesize rightShareBtn=_rightShareBtn;
@property(retain, nonatomic) UIButton *enterRecentBtn; // @synthesize enterRecentBtn=_enterRecentBtn;
@property(retain, nonatomic) UIButton *leftBackBtn; // @synthesize leftBackBtn=_leftBackBtn;
@property(retain, nonatomic) PAAlbumTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (_Bool)ignoreThisClick:(double)arg1;
- (_Bool)showNetworkErrorTips;
- (_Bool)isAlbumDataAndCoverInCache:(id)arg1;
- (void)preDownloadNextPhotos:(long long)arg1;
- (void)onJuBao;
- (void)actionSheetClickedAtIndex:(int)arg1 sender:(id)arg2;
- (id)getDataForConfig:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (void)onShowTipsInWeb:(id)arg1;
- (void)openPbCommentInputView;
- (id)getpbCommentContextQuery;
- (void)onKeyBoardStatus:(id)arg1 isShowKeyBoard:(_Bool)arg2 isAnonymous:(_Bool)arg3;
- (void)onCommentSend:(id)arg1 isAnonymous:(_Bool)arg2;
- (void)maskViewPbCommentTap:(id)arg1;
- (void)removeGestureTopbCommentBoxScreenMask;
- (void)addGestureTopbCommentBoxScreenMask;
- (void)reloadInputView;
- (void)onWriteComment;
- (void)onClickCommentRstBtn;
- (void)onClickCommentShareBtn;
- (void)onClickCommentLikeBtn;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickPARecommandItem:(unsigned long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showClickAnimate;
- (void)showClickAnimate:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 changeCellAlphaAccordingToPoint:(struct CGPoint)arg2 atIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (double)getExtraHeight:(double)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollToIndexPath:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)setPAAlbumRecommendExtraInfo:(unsigned long long)arg1 echoInfo:(id)arg2;
- (void)setPAAlbumID:(id)arg1 sourceType:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)onMoreShare:(id)arg1;
- (void)onQQVIPFunctionTipsViewHasRemoved:(id)arg1;
- (void)onBackToRecentList:(id)arg1;
- (void)onleftBack:(id)arg1;
- (void)addHeaderBar;
- (void)addFooterBar;
- (void)showHeaderAndFooterBarAmimate:(_Bool)arg1 andIsAnimate:(_Bool)arg2;
- (void)QQImageViewDownloadAndAnimateFinished:(id)arg1;
- (void)QQImageViewSingleTapDetected:(id)arg1;
- (void)reportGalleryClickEvent;
- (void)reportGalleryInfo;
- (void)checkArticleLike;
- (void)likeArticle:(unsigned int)arg1;
- (void)requestLikeCount;
- (void)requestCommentCount;
- (void)requestArticleReadCount;
- (void)initContorllerWhenGetAlbumData:(id)arg1 albumModel:(id)arg2;
- (void)requestAlbumData;
- (void)requestRecommendInfo;
- (void)reportZoomImageEvent:(id)arg1 zoomType:(unsigned long long)arg2;
- (void)QQImageViewScrollViewWillBeginZooming:(id)arg1;
- (void)QQImageViewScrollViewDidEndZooming:(id)arg1 andScale:(double)arg2;
- (long long)preferredStatusBarStyle;
- (void)addTipView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)hideNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

