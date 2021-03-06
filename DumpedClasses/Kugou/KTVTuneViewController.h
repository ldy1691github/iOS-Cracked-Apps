//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "AVAudioSessionDelegate.h"
#import "KGViewControllerDelegate.h"
#import "KTVPlayProgressDelegate.h"
#import "KTVReRecordViewDelegate.h"
#import "KTVShareCompleteViewControllerDelagate.h"
#import "KTVTuneEffectViewDelegate.h"
#import "KTVTuneViewDelegate.h"
#import "KrcShowPlaneDelegate.h"
#import "RemoteControl.h"
#import "UIAlertViewDelegate.h"

@class KFMovingTextView, KGKTVManager, KTVGuidanceView, KTVKZoneHttpDAO, KTVKrcPitchModel, KTVMergeProgressPopView, KTVOpusShareVC, KTVPlayProgressView, KTVPlayerBaseInfo, KTVReRecordView, KTVScoreResultsView, KTVSelectingAccVM, KTVSingerInfoDM, KTVSingleScoreView, KTVTuneView, KTV_LocalWorksInfo, KTV_SongInfo, KTV_SoundInfo, KtvKrcModel, KtvRecordToolBar, KtvToneConfigureSetting, NSMutableArray, NSMutableString, NSString, NSTimer, UIAlertView, UIImageView;

@interface KTVTuneViewController : KTVBaseViewController <KTVTuneViewDelegate, KTVTuneEffectViewDelegate, UIAlertViewDelegate, KTVPlayProgressDelegate, KrcShowPlaneDelegate, KGViewControllerDelegate, RemoteControl, AVAudioSessionDelegate, KTVShareCompleteViewControllerDelagate, KTVReRecordViewDelegate>
{
    double playTime;
    _Bool isSaved;
    int curShareType;
    NSString *weiboContent;
    long long updateTimes;
    _Bool _isFromFragmentRecord;
    _Bool _isFromSingleReRecord;
    _Bool _isFragSingleReRecord;
    _Bool _isSingleReRecordToWholeReRecord;
    _Bool _isTouneEdit;
    _Bool _isChangedOrder;
    _Bool _isChorus;
    _Bool _isFragmentRecord;
    _Bool _isSingRecordTiHuan;
    _Bool _isFirstAppear;
    _Bool _isRePlay;
    _Bool _timerAble;
    float _recordVolumeRate;
    float _playVolumeRate;
    int _opusType;
    KTV_LocalWorksInfo *_old_opusInfo;
    CDUnknownBlockType _reRecordedBlock;
    double _totalPalyDuration;
    double _krcEndTime;
    KTVPlayerBaseInfo *_invitedPlayer;
    long long _inviteId;
    long long _channelId;
    NSString *_channelText;
    NSString *_shareAdsContext;
    long long _krcFragmentStartTime;
    long long _krcFragmentEndTime;
    KtvKrcModel *_krcFragmentKrcModel;
    long long _opusParentId;
    NSString *_opusParentPlayerBase;
    NSString *_vocalOpusHash;
    KTV_SoundInfo *_soundInfo;
    KtvToneConfigureSetting *_toneSetting;
    KtvToneConfigureSetting *_preToneSetting;
    long long _singleReRecordStartTime;
    long long _singleReRecordEndTime;
    KtvKrcModel *_singleReRecordKrcModel;
    long long _tempFilePathEndTime;
    CDUnknownBlockType _singleSelectedBlock;
    NSString *_pitch;
    long long _recordEndTime;
    KTVKrcPitchModel *_pitchModel;
    long long _actionSeekTo;
    NSMutableString *_recordTraceEventValue;
    KTV_SongInfo *_m_songInfo;
    KtvKrcModel *_m_krc;
    NSTimer *_updateTimer;
    NSString *_filePath;
    NSString *_accompanyPath;
    NSString *_krcIdString;
    KTV_LocalWorksInfo *_m_opusInfo;
    KTVTuneView *_tuneScrollView;
    KTVScoreResultsView *_scoreResultsView;
    KTVSingleScoreView *_singleScoreView;
    KGKTVManager *_audioPlayer;
    KGKTVManager *_audioTranslator;
    KTVPlayProgressView *_playController;
    KTVKZoneHttpDAO *_kShareOpusHttp;
    KTVOpusShareVC *_shareVC;
    long long _krcAdjustTime;
    KFMovingTextView *_titleView;
    KTVSelectingAccVM *_seletingAccVM;
    UIAlertView *_alertview;
    UIImageView *_bgView;
    UIImageView *_bgHud;
    KtvRecordToolBar *_toolBar;
    KTVSingerInfoDM *_singerInfoDM;
    KTVGuidanceView *_dragGuidanceView;
    long long _type;
    KTVReRecordView *_reRecordView;
    KTVMergeProgressPopView *_progressPopView;
    NSMutableArray *_tempTimeArray;
}

@property(retain, nonatomic) NSMutableArray *tempTimeArray; // @synthesize tempTimeArray=_tempTimeArray;
@property(retain, nonatomic) KTVMergeProgressPopView *progressPopView; // @synthesize progressPopView=_progressPopView;
@property(retain, nonatomic) KTVReRecordView *reRecordView; // @synthesize reRecordView=_reRecordView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) KTVGuidanceView *dragGuidanceView; // @synthesize dragGuidanceView=_dragGuidanceView;
@property(retain, nonatomic) KTVSingerInfoDM *singerInfoDM; // @synthesize singerInfoDM=_singerInfoDM;
@property(retain, nonatomic) KtvRecordToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIImageView *bgHud; // @synthesize bgHud=_bgHud;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIAlertView *alertview; // @synthesize alertview=_alertview;
@property(retain, nonatomic) KTVSelectingAccVM *seletingAccVM; // @synthesize seletingAccVM=_seletingAccVM;
@property(retain, nonatomic) KFMovingTextView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long krcAdjustTime; // @synthesize krcAdjustTime=_krcAdjustTime;
@property(retain, nonatomic) KTVOpusShareVC *shareVC; // @synthesize shareVC=_shareVC;
@property(retain, nonatomic) KTVKZoneHttpDAO *kShareOpusHttp; // @synthesize kShareOpusHttp=_kShareOpusHttp;
@property(retain, nonatomic) KTVPlayProgressView *playController; // @synthesize playController=_playController;
@property(retain, nonatomic) KGKTVManager *audioTranslator; // @synthesize audioTranslator=_audioTranslator;
@property(retain, nonatomic) KGKTVManager *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) KTVSingleScoreView *singleScoreView; // @synthesize singleScoreView=_singleScoreView;
@property(retain, nonatomic) KTVScoreResultsView *scoreResultsView; // @synthesize scoreResultsView=_scoreResultsView;
@property(retain, nonatomic) KTVTuneView *tuneScrollView; // @synthesize tuneScrollView=_tuneScrollView;
@property(retain, nonatomic) KTV_LocalWorksInfo *m_opusInfo; // @synthesize m_opusInfo=_m_opusInfo;
@property(retain, nonatomic) NSString *krcIdString; // @synthesize krcIdString=_krcIdString;
@property(nonatomic) _Bool timerAble; // @synthesize timerAble=_timerAble;
@property(nonatomic) _Bool isRePlay; // @synthesize isRePlay=_isRePlay;
@property(retain, nonatomic) NSString *accompanyPath; // @synthesize accompanyPath=_accompanyPath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) KtvKrcModel *m_krc; // @synthesize m_krc=_m_krc;
@property(retain, nonatomic) KTV_SongInfo *m_songInfo; // @synthesize m_songInfo=_m_songInfo;
@property(retain, nonatomic) NSMutableString *recordTraceEventValue; // @synthesize recordTraceEventValue=_recordTraceEventValue;
@property(nonatomic) long long actionSeekTo; // @synthesize actionSeekTo=_actionSeekTo;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) _Bool isSingRecordTiHuan; // @synthesize isSingRecordTiHuan=_isSingRecordTiHuan;
@property(nonatomic) _Bool isFragmentRecord; // @synthesize isFragmentRecord=_isFragmentRecord;
@property(retain, nonatomic) KTVKrcPitchModel *pitchModel; // @synthesize pitchModel=_pitchModel;
@property(nonatomic) long long recordEndTime; // @synthesize recordEndTime=_recordEndTime;
@property(nonatomic) _Bool isChorus; // @synthesize isChorus=_isChorus;
@property(retain, nonatomic) NSString *pitch; // @synthesize pitch=_pitch;
@property(nonatomic) _Bool isChangedOrder; // @synthesize isChangedOrder=_isChangedOrder;
@property(nonatomic) _Bool isTouneEdit; // @synthesize isTouneEdit=_isTouneEdit;
@property(copy, nonatomic) CDUnknownBlockType singleSelectedBlock; // @synthesize singleSelectedBlock=_singleSelectedBlock;
@property(nonatomic) _Bool isSingleReRecordToWholeReRecord; // @synthesize isSingleReRecordToWholeReRecord=_isSingleReRecordToWholeReRecord;
@property(nonatomic) long long tempFilePathEndTime; // @synthesize tempFilePathEndTime=_tempFilePathEndTime;
@property(retain, nonatomic) KtvKrcModel *singleReRecordKrcModel; // @synthesize singleReRecordKrcModel=_singleReRecordKrcModel;
@property(nonatomic) long long singleReRecordEndTime; // @synthesize singleReRecordEndTime=_singleReRecordEndTime;
@property(nonatomic) long long singleReRecordStartTime; // @synthesize singleReRecordStartTime=_singleReRecordStartTime;
@property(nonatomic) _Bool isFragSingleReRecord; // @synthesize isFragSingleReRecord=_isFragSingleReRecord;
@property(nonatomic) _Bool isFromSingleReRecord; // @synthesize isFromSingleReRecord=_isFromSingleReRecord;
@property(retain, nonatomic) KtvToneConfigureSetting *preToneSetting; // @synthesize preToneSetting=_preToneSetting;
@property(retain, nonatomic) KtvToneConfigureSetting *toneSetting; // @synthesize toneSetting=_toneSetting;
@property(retain, nonatomic) KTV_SoundInfo *soundInfo; // @synthesize soundInfo=_soundInfo;
@property(retain, nonatomic) NSString *vocalOpusHash; // @synthesize vocalOpusHash=_vocalOpusHash;
@property(retain, nonatomic) NSString *opusParentPlayerBase; // @synthesize opusParentPlayerBase=_opusParentPlayerBase;
@property(nonatomic) long long opusParentId; // @synthesize opusParentId=_opusParentId;
@property(nonatomic) int opusType; // @synthesize opusType=_opusType;
@property(retain, nonatomic) KtvKrcModel *krcFragmentKrcModel; // @synthesize krcFragmentKrcModel=_krcFragmentKrcModel;
@property(nonatomic) long long krcFragmentEndTime; // @synthesize krcFragmentEndTime=_krcFragmentEndTime;
@property(nonatomic) long long krcFragmentStartTime; // @synthesize krcFragmentStartTime=_krcFragmentStartTime;
@property(nonatomic) _Bool isFromFragmentRecord; // @synthesize isFromFragmentRecord=_isFromFragmentRecord;
@property(copy, nonatomic) NSString *shareAdsContext; // @synthesize shareAdsContext=_shareAdsContext;
@property(retain, nonatomic) NSString *channelText; // @synthesize channelText=_channelText;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) long long inviteId; // @synthesize inviteId=_inviteId;
@property(retain, nonatomic) KTVPlayerBaseInfo *invitedPlayer; // @synthesize invitedPlayer=_invitedPlayer;
@property(nonatomic) float playVolumeRate; // @synthesize playVolumeRate=_playVolumeRate;
@property(nonatomic) float recordVolumeRate; // @synthesize recordVolumeRate=_recordVolumeRate;
@property(nonatomic) double krcEndTime; // @synthesize krcEndTime=_krcEndTime;
@property(nonatomic) double totalPalyDuration; // @synthesize totalPalyDuration=_totalPalyDuration;
@property(copy, nonatomic) CDUnknownBlockType reRecordedBlock; // @synthesize reRecordedBlock=_reRecordedBlock;
@property(retain, nonatomic) KTV_LocalWorksInfo *old_opusInfo; // @synthesize old_opusInfo=_old_opusInfo;
- (void).cxx_destruct;
- (void)configureToneBoardStageKrcTime;
- (void)receivesStopAudioPlayerMsg:(id)arg1;
- (void)endInteruption:(id)arg1;
- (void)beginInteruption:(id)arg1;
- (void)DealEffectChange;
- (id)getCurSaveLocalWorksInfo;
- (long long)showPlayBarWay;
- (void)locationPlayTime:(double)arg1;
- (void)reRecordedAll;
- (void)reRecordView:(id)arg1 didClickWithType:(long long)arg2;
- (_Bool)kgRemoteControlReceivedWithEvent:(id)arg1;
- (void)dismissProgressPopupView;
- (void)showProgressPopupViewForProgressValue:(double)arg1;
- (void)actionProgress:(float)arg1;
- (void)actionPause;
- (void)actionSeek;
- (void)actionPlay;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)showGuidanceView;
- (_Bool)tuneView:(id)arg1 beShowEffect:(int)arg2;
- (void)tuneViewStatisticTuneSelect:(id)arg1;
- (_Bool)tuneView:(id)arg1 beSupporttEffect:(int)arg2;
- (void)tuneView:(id)arg1 didSelectEffectBtn:(id)arg2;
- (void)showSingleRecord;
- (void)tuneView:(id)arg1 didClickScoreBtn:(id)arg2;
- (void)showScoreResult;
- (double)achieveTotalPlayDuration;
- (void)reRecordButtonPressed;
- (void)uploadOpus;
- (void)showCompetitionAlertViewWithTitle:(id)arg1 message:(id)arg2 rightTitle:(id)arg3 leftTitle:(id)arg4 tag:(unsigned long long)arg5;
- (void)shareOpus;
- (void)reset;
- (void)cancelCurrentOpusUpload:(id)arg1;
- (_Bool)isSamepreToneConfigureWithCompereToneConfigure;
- (_Bool)isSameWithCompereToneConfigureForWork:(id)arg1;
- (void)statisticTuneSelectedWithType:(unsigned long long)arg1;
- (_Bool)saveToneEditConfiture;
- (_Bool)save;
- (void)saveOpusToLocal:(CDUnknownBlockType)arg1;
- (_Bool)updateSoundEffectAndVolume;
- (void)pause;
- (void)loadSetting;
- (void)update:(id)arg1;
- (void)handleForRecordToolBarEvent:(int)arg1;
- (void)handleforLivePlayer:(long long)arg1 ext1:(int)arg2 ext2:(int)arg3;
- (void)KGUsingControllerState:(int)arg1;
- (void)backEvent:(id)arg1;
- (void)interruptionNotifyCallback:(id)arg1;
- (void)unRegisterNotification;
- (void)beginActiveFromBackground;
- (void)registerNotification;
- (id)shareSingerInfoDM;
- (void)configureToneSetting;
- (void)setKrcWithKrcPath:(id)arg1 adjustTime:(long long)arg2;
- (void)configureKrcRef;
- (void)viewDidLoad;
- (id)takeAudioTranslator;
- (id)initWithOpusInfo:(id)arg1;
- (void)configueKrcWithStartTime:(long long)arg1 endTime:(long long)arg2;
- (void)configueFilePath;
- (id)initWithSongInfo:(id)arg1 krcModel:(id)arg2 andKrcId:(id)arg3 andKrcAdjustTime:(long long)arg4 isChorus:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

