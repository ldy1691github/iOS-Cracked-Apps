//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "RPPreviewPhotoControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSArray, NSMutableArray, NSString, RPCamFlashSwitchView, UIButton, UIImageView, UIView;

@interface RPTakePhotoController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, UIAlertViewDelegate, RPPreviewPhotoControllerDelegate>
{
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_input;
    AVCaptureVideoPreviewLayer *_previewLayer;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    _Bool isFrontCamera;
    double bottomViewHeight;
    double viewRatio;
    _Bool beOpen;
    NSArray *_imageUrlArray;
    NSArray *_takePhotoTypeArray;
    id <RPTakePhotoControllerDelegate> _delegate;
    UIView *_waitView;
    UIView *_videoPreviewView;
    UIView *_topView;
    UIView *_cameraView;
    UIImageView *_cameraImageView;
    RPCamFlashSwitchView *_flashView;
    long long _takePhotoType;
    long long _index;
    long long _urlIndex;
    NSMutableArray *_imageFileArray;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) NSMutableArray *imageFileArray; // @synthesize imageFileArray=_imageFileArray;
@property(nonatomic) long long urlIndex; // @synthesize urlIndex=_urlIndex;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long takePhotoType; // @synthesize takePhotoType=_takePhotoType;
@property(retain, nonatomic) RPCamFlashSwitchView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UIImageView *cameraImageView; // @synthesize cameraImageView=_cameraImageView;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) UIView *waitView; // @synthesize waitView=_waitView;
@property(nonatomic) __weak id <RPTakePhotoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *takePhotoTypeArray; // @synthesize takePhotoTypeArray=_takePhotoTypeArray;
@property(retain, nonatomic) NSArray *imageUrlArray; // @synthesize imageUrlArray=_imageUrlArray;
- (void).cxx_destruct;
- (void)exitController:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)saveImageToSandBox:(id)arg1;
- (id)getImageLocalPath:(id)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (id)cameraWithPosition:(long long)arg1;
- (void)takePicture;
- (_Bool)checkCamera;
- (void)switchFlash;
- (void)releaseCamera;
- (void)changeCamera;
- (void)initCamera:(_Bool)arg1;
- (void)didAcceptPhoto:(id)arg1;
- (void)closeBtnClick:(id)arg1;
- (void)changeGestureImage:(id)arg1;
- (void)changeCameraAction:(id)arg1;
- (void)doCancel:(id)arg1;
- (void)doCamera:(id)arg1;
- (void)showFailWarning;
- (void)setupViewWithPhotoType:(long long)arg1;
- (void)loadCameraViewWithPhotoType:(long long)arg1;
- (void)loadBottomViewWithPhotoType:(long long)arg1;
- (void)loadTopViewWithPhotoType:(long long)arg1;
- (void)hideWaitingView;
- (void)showWaitingView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)loadVideoPreview;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpParmas;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackgroundNotification;
- (void)viewDidLoad;
- (void)initTakePhotoType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
