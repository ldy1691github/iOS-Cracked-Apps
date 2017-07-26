//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTDestMoveTableViewDataSource.h"
#import "CTDestMoveTableViewDelegate.h"
#import "CTDestWriteTravelTableViewCellDelegate.h"
#import "CTLocationDelegate.h"
#import "CTLoginWidgetDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class CTDestApplyProtocolView, CTDestMoveTableView, CTDestTravelAddNodeView, CTDestTravelsImagePickerController, CTDestWriteTravelAddLocationView, CTDestWriteTravelCacheModel, CTDestWriteTravelProgressView, CTDestWriteTravelTableHeadView, CTLocationClient, NSArray, NSData, NSIndexPath, NSMutableArray, NSString, UIButton, UIImageView, UIView, XTravelSearchPoiInfoModel;

@interface CTDestWriteTravelViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, CTDestMoveTableViewDataSource, CTDestMoveTableViewDelegate, CTDestWriteTravelTableViewCellDelegate, UITextViewDelegate, UIActionSheetDelegate, CTLoginWidgetDelegate, UIAlertViewDelegate, CTLocationDelegate>
{
    _Bool _isNotApply;
    _Bool _uploadStop;
    _Bool _userNeedSave;
    int _initType;
    int _status;
    float _count;
    NSString *_travelId;
    NSData *_travleInitData;
    XTravelSearchPoiInfoModel *_poiInfo;
    NSArray *_labels;
    CTDestWriteTravelCacheModel *_cacheModel;
    UIImageView *_shadownImageView;
    CTDestMoveTableView *_writeTravleTableView;
    CTDestWriteTravelTableHeadView *_writeTravelTableHeadView;
    CTDestWriteTravelAddLocationView *_addLocationView;
    UIView *_writeTravelTableFooterView;
    CTDestApplyProtocolView *_applyProtocolView;
    UIButton *_lastAddBtn;
    CTDestTravelAddNodeView *_lastAddNodeView;
    NSMutableArray *_writeTravelDataSource;
    NSIndexPath *_editIndexPath;
    NSString *_noteTitle;
    NSString *_noteInitTitle;
    NSString *_noteCacheFolder;
    CTDestWriteTravelProgressView *_progressView;
    unsigned long long _currentPhotoUploadIndex;
    NSString *_currentHTTPRequestId;
    unsigned long long _backtaskIdentifier;
    CTDestTravelsImagePickerController *_ipc;
    unsigned long long _submitTravelRepeatCount;
    unsigned long long _uploadPhotoRepeatCount;
    unsigned long long _uploadVideoRepeatCount;
    CTLocationClient *_locationClient;
}

@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(nonatomic) _Bool userNeedSave; // @synthesize userNeedSave=_userNeedSave;
@property(nonatomic) unsigned long long uploadVideoRepeatCount; // @synthesize uploadVideoRepeatCount=_uploadVideoRepeatCount;
@property(nonatomic) unsigned long long uploadPhotoRepeatCount; // @synthesize uploadPhotoRepeatCount=_uploadPhotoRepeatCount;
@property(nonatomic) unsigned long long submitTravelRepeatCount; // @synthesize submitTravelRepeatCount=_submitTravelRepeatCount;
@property(retain, nonatomic) CTDestTravelsImagePickerController *ipc; // @synthesize ipc=_ipc;
@property(nonatomic) unsigned long long backtaskIdentifier; // @synthesize backtaskIdentifier=_backtaskIdentifier;
@property(nonatomic) _Bool uploadStop; // @synthesize uploadStop=_uploadStop;
@property(copy, nonatomic) NSString *currentHTTPRequestId; // @synthesize currentHTTPRequestId=_currentHTTPRequestId;
@property(nonatomic) unsigned long long currentPhotoUploadIndex; // @synthesize currentPhotoUploadIndex=_currentPhotoUploadIndex;
@property(nonatomic) float count; // @synthesize count=_count;
@property(retain, nonatomic) CTDestWriteTravelProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSString *noteCacheFolder; // @synthesize noteCacheFolder=_noteCacheFolder;
@property(copy, nonatomic) NSString *noteInitTitle; // @synthesize noteInitTitle=_noteInitTitle;
@property(retain, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
@property(retain, nonatomic) NSIndexPath *editIndexPath; // @synthesize editIndexPath=_editIndexPath;
@property(retain, nonatomic) NSMutableArray *writeTravelDataSource; // @synthesize writeTravelDataSource=_writeTravelDataSource;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) CTDestTravelAddNodeView *lastAddNodeView; // @synthesize lastAddNodeView=_lastAddNodeView;
@property(retain, nonatomic) UIButton *lastAddBtn; // @synthesize lastAddBtn=_lastAddBtn;
@property(nonatomic) _Bool isNotApply; // @synthesize isNotApply=_isNotApply;
@property(retain, nonatomic) CTDestApplyProtocolView *applyProtocolView; // @synthesize applyProtocolView=_applyProtocolView;
@property(retain, nonatomic) UIView *writeTravelTableFooterView; // @synthesize writeTravelTableFooterView=_writeTravelTableFooterView;
@property(retain, nonatomic) CTDestWriteTravelAddLocationView *addLocationView; // @synthesize addLocationView=_addLocationView;
@property(retain, nonatomic) CTDestWriteTravelTableHeadView *writeTravelTableHeadView; // @synthesize writeTravelTableHeadView=_writeTravelTableHeadView;
@property(retain, nonatomic) CTDestMoveTableView *writeTravleTableView; // @synthesize writeTravleTableView=_writeTravleTableView;
@property(retain, nonatomic) UIImageView *shadownImageView; // @synthesize shadownImageView=_shadownImageView;
@property(retain, nonatomic) CTDestWriteTravelCacheModel *cacheModel; // @synthesize cacheModel=_cacheModel;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) XTravelSearchPoiInfoModel *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) NSData *travleInitData; // @synthesize travleInitData=_travleInitData;
@property(retain, nonatomic) NSString *travelId; // @synthesize travelId=_travelId;
@property(nonatomic) int initType; // @synthesize initType=_initType;
- (void).cxx_destruct;
- (void)loadView;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (_Bool)isHeadViewEditing;
- (_Bool)isNewTravelNote;
- (void)appWillTerminate;
- (void)fillH5CallBackString:(_Bool)arg1;
- (void)cleanTravelCache;
- (_Bool)cacheTravelNote;
- (void)keyboardWasChange:(id)arg1;
- (id)dictionaryWithPropertiesOfObject:(id)arg1;
- (void)processError:(id)arg1;
- (id)createWriteTravelParaDict;
- (void)submitTravelToServer;
- (void)uploadVideos:(id)arg1;
- (void)uploadPhotos:(id)arg1;
- (void)startUpload;
- (void)afterLoginSuccess:(id)arg1;
- (void)publishWriteTravel;
- (void)handleResponse:(id)arg1;
- (void)requestTravelDetailById:(long long)arg1;
- (void)clickDescLabel:(id)arg1;
- (void)refreshCellsAfterClickAddBtn:(id)arg1;
- (void)showVideo:(id)arg1;
- (void)showBigImage:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delTravelRecord:(id)arg1;
- (int)mediaCount;
- (unsigned long long)indexOfNode:(id)arg1;
- (void)addTravelVideoRecord:(id)arg1;
- (void)addTravelPhotoRecord:(id)arg1;
- (void)editTravelLabelRecord:(id)arg1;
- (void)addTravelLabelRecord:(id)arg1;
- (void)clickLastAddBtn:(id)arg1;
- (void)configSelectCityView;
- (void)finishEdit;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)moveTableClick:(id)arg1;
- (void)writeTravleTableViewReloadDataWithStatus:(int)arg1;
- (void)moveTableViewFinish:(id)arg1;
- (void)moveTableView:(id)arg1 moveRowFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)moveTableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)moveTableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)moveTableView:(id)arg1 willMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)didReceiveMemoryWarning;
- (void)conformHeadEdit;
- (void)cancelHeadEdit;
- (void)changeToEditHeadButton;
- (_Bool)isTravleNoteChanged;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissWriteTravel;
- (id)createRightViewNormalStatus;
- (void)rightSubmitNormalStatus;
- (void)rightSaveNormalStatus;
- (void)leftCancelNormalStatus;
- (void)changeToNormalButton;
- (void)showNewUserGuideView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)getLocation;
- (void)appendDataWithImageArray:(id)arg1 index:(long long)arg2;
- (void)fillTravelLabel:(id)arg1 labelName:(id)arg2 location:(id)arg3;
- (id)initWithLabels:(id)arg1 photoItemArray:(id)arg2 cacheFolder:(id)arg3;
- (id)initWithPhotoItemArray:(id)arg1 cacheFolder:(id)arg2;
- (id)initWithCacheModel:(id)arg1;
- (id)initWithTravelId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
