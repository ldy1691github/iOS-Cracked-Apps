//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MRecognizerDelegate.h"
#import "TBAsrBoardDelegate.h"

@class MRecognizer, NSString, NSTimer, TBASRLabelView, TBAsrBoard, UIButton, UIView;

@interface TBASRViewController : UIViewController <MRecognizerDelegate, TBAsrBoardDelegate>
{
    struct CGRect m_thisvc_rect;
    float m_curr_floatversion;
    NSTimer *m_current_timer;
    _Bool m_is_resign_active_currently;
    _Bool m_is_become_active_from_mic_availability_chk;
    _Bool m_users_mic_availability_choice;
    unsigned int m_soundurlpool[5];
    int p_currstatus;
    int p_searchtype;
    MRecognizer *p_recognizer;
    TBAsrBoard *p_micview;
    UIButton *p_btnquit;
    id <TBASRDelegate> p_delegate;
    NSString *p_keywords;
    TBASRLabelView *p_lblview;
    UIView *pWaitingMask;
}

@property(retain, nonatomic) UIView *pWaitingMask; // @synthesize pWaitingMask;
@property(nonatomic) int p_searchtype; // @synthesize p_searchtype;
@property(retain, nonatomic) TBASRLabelView *p_lblview; // @synthesize p_lblview;
@property(copy, nonatomic) NSString *p_keywords; // @synthesize p_keywords;
@property(retain, nonatomic) id <TBASRDelegate> p_delegate; // @synthesize p_delegate;
@property(nonatomic) int p_currstatus; // @synthesize p_currstatus;
@property(retain, nonatomic) UIButton *p_btnquit; // @synthesize p_btnquit;
@property(retain, nonatomic) TBAsrBoard *p_micview; // @synthesize p_micview;
@property(retain, nonatomic) MRecognizer *p_recognizer; // @synthesize p_recognizer;
- (void).cxx_destruct;
- (void)asrMicClicked:(id)arg1;
- (void)serviceStatusChanged:(_Bool)arg1;
- (void)recognizerDidStartRecognizing:(id)arg1;
- (void)recognizerDidStopRecording:(id)arg1;
- (void)recognizerDidStartRecording:(id)arg1;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)searchJumpDelay:(id)arg1;
- (void)haltNetworking:(id)arg1;
- (void)pauseRecording:(id)arg1;
- (void)startRecording:(id)arg1;
- (void)dismissDelay:(id)arg1;
- (void)btndismiss_ontapped:(id)arg1;
- (void)engineStartCallback:(id)arg1;
- (void)tbasrModalDidBecomeActive:(id)arg1;
- (void)tbasrModalWillResignActive:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithDelegate:(id)arg1:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
