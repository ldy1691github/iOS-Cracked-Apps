//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NBNetDownloadConnectDelegate.h"

@class NBNetDownloadConnect, NSData, NSMutableData, NSMutableDictionary, NSOutputStream, NSString, NSTimer;

@interface NBNetDownloadTask : NSObject <NBNetDownloadConnectDelegate>
{
    _Bool _isPic;
    _Bool _isGradual;
    _Bool _isNeedCrypto;
    _Bool _isKeyTask;
    _Bool _isRunning;
    _Bool _isPaused;
    _Bool _isHttpHeadReading;
    _Bool _isPrivHeadReading;
    _Bool _isFileDataReading;
    _Bool _lastConnIsHttp;
    float _progress;
    float _deltaProgress;
    NSString *_fromModel;
    NSString *_fileName;
    NSString *_taskId;
    NSString *_bizType;
    long long _commandType;
    long long _sourceType;
    NSString *_fileId;
    long long _returnType;
    NSString *_fileReturnPathName;
    NSString *_imageParamStr;
    NSData *_mmdpBizData;
    id <NBNetDownloadTaskDelegate> _delegate;
    NBNetDownloadConnect *_usedConn;
    NSMutableData *_tcpToSendData;
    long long _tcpSended;
    NSMutableData *_tcpRecvBufData;
    NSMutableData *_tcpRecvData;
    long long _fileTotalSize;
    NSString *_fileTotalMd5;
    long long _fileDownloadedSize;
    long long _fileRspLength;
    long long _fileRspRecved;
    NSMutableData *_tmpFileData;
    NSString *_tmpFileName;
    NSOutputStream *_fileStream;
    NSTimer *_connTimer;
    NSTimer *_readTimer;
    NSTimer *_writeTimer;
    long long _taskRetriedCount;
    long long _taskRecvedBytes;
    long long _taskFileSize;
    NSMutableDictionary *_taskErrorRecordDict;
    NSString *_lastConnHost;
    NSString *_lastTraceId;
    double _enqueueTime;
    double _taskStartTime;
    double _startConnectTime;
    double _connectSuccTime;
    double _firstDataTime;
    double _lastDataTime;
}

+ (id)buildDownloadTask:(id)arg1 fileName:(id)arg2 taskId:(id)arg3 commandType:(long long)arg4 sourceType:(long long)arg5 fileId:(id)arg6 resultType:(long long)arg7 filePathName:(id)arg8 isPic:(_Bool)arg9;
@property(nonatomic) double lastDataTime; // @synthesize lastDataTime=_lastDataTime;
@property(nonatomic) double firstDataTime; // @synthesize firstDataTime=_firstDataTime;
@property(nonatomic) double connectSuccTime; // @synthesize connectSuccTime=_connectSuccTime;
@property(nonatomic) double startConnectTime; // @synthesize startConnectTime=_startConnectTime;
@property(nonatomic) double taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property(nonatomic) double enqueueTime; // @synthesize enqueueTime=_enqueueTime;
@property(retain, nonatomic) NSString *lastTraceId; // @synthesize lastTraceId=_lastTraceId;
@property(retain, nonatomic) NSString *lastConnHost; // @synthesize lastConnHost=_lastConnHost;
@property(nonatomic) _Bool lastConnIsHttp; // @synthesize lastConnIsHttp=_lastConnIsHttp;
@property(retain, nonatomic) NSMutableDictionary *taskErrorRecordDict; // @synthesize taskErrorRecordDict=_taskErrorRecordDict;
@property(nonatomic) long long taskFileSize; // @synthesize taskFileSize=_taskFileSize;
@property(nonatomic) long long taskRecvedBytes; // @synthesize taskRecvedBytes=_taskRecvedBytes;
@property(nonatomic) long long taskRetriedCount; // @synthesize taskRetriedCount=_taskRetriedCount;
@property(retain, nonatomic) NSTimer *writeTimer; // @synthesize writeTimer=_writeTimer;
@property(retain, nonatomic) NSTimer *readTimer; // @synthesize readTimer=_readTimer;
@property(retain, nonatomic) NSTimer *connTimer; // @synthesize connTimer=_connTimer;
@property(retain, nonatomic) NSOutputStream *fileStream; // @synthesize fileStream=_fileStream;
@property(retain, nonatomic) NSString *tmpFileName; // @synthesize tmpFileName=_tmpFileName;
@property(retain, nonatomic) NSMutableData *tmpFileData; // @synthesize tmpFileData=_tmpFileData;
@property(nonatomic) long long fileRspRecved; // @synthesize fileRspRecved=_fileRspRecved;
@property(nonatomic) long long fileRspLength; // @synthesize fileRspLength=_fileRspLength;
@property(nonatomic) float deltaProgress; // @synthesize deltaProgress=_deltaProgress;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) long long fileDownloadedSize; // @synthesize fileDownloadedSize=_fileDownloadedSize;
@property(retain, nonatomic) NSString *fileTotalMd5; // @synthesize fileTotalMd5=_fileTotalMd5;
@property(nonatomic) long long fileTotalSize; // @synthesize fileTotalSize=_fileTotalSize;
@property(retain, nonatomic) NSMutableData *tcpRecvData; // @synthesize tcpRecvData=_tcpRecvData;
@property(retain, nonatomic) NSMutableData *tcpRecvBufData; // @synthesize tcpRecvBufData=_tcpRecvBufData;
@property(nonatomic) _Bool isFileDataReading; // @synthesize isFileDataReading=_isFileDataReading;
@property(nonatomic) _Bool isPrivHeadReading; // @synthesize isPrivHeadReading=_isPrivHeadReading;
@property(nonatomic) _Bool isHttpHeadReading; // @synthesize isHttpHeadReading=_isHttpHeadReading;
@property(nonatomic) long long tcpSended; // @synthesize tcpSended=_tcpSended;
@property(retain, nonatomic) NSMutableData *tcpToSendData; // @synthesize tcpToSendData=_tcpToSendData;
@property(nonatomic) __weak NBNetDownloadConnect *usedConn; // @synthesize usedConn=_usedConn;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool isKeyTask; // @synthesize isKeyTask=_isKeyTask;
@property(nonatomic) __weak id <NBNetDownloadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *mmdpBizData; // @synthesize mmdpBizData=_mmdpBizData;
@property(nonatomic) _Bool isNeedCrypto; // @synthesize isNeedCrypto=_isNeedCrypto;
@property(retain, nonatomic) NSString *imageParamStr; // @synthesize imageParamStr=_imageParamStr;
@property(nonatomic) _Bool isGradual; // @synthesize isGradual=_isGradual;
@property(nonatomic) _Bool isPic; // @synthesize isPic=_isPic;
@property(retain, nonatomic) NSString *fileReturnPathName; // @synthesize fileReturnPathName=_fileReturnPathName;
@property(nonatomic) long long returnType; // @synthesize returnType=_returnType;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long commandType; // @synthesize commandType=_commandType;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *fromModel; // @synthesize fromModel=_fromModel;
- (void).cxx_destruct;
- (unsigned long long)currentTimeStamp;
- (void)deleteTmpFile;
- (void)writeTmpFile:(id)arg1;
- (void)closeTmpFile;
- (_Bool)openTmpFile;
- (_Bool)tryParsePrivHead:(long long *)arg1 pb:(id *)arg2 isError:(_Bool *)arg3;
- (_Bool)tryParseHttpHead:(long long *)arg1 statusCode:(long long *)arg2 contentLen:(long long *)arg3 isError:(_Bool *)arg4;
- (void)tryReadSocket;
- (void)tryWriteSocket;
- (_Bool)buildTcpToSendData:(_Bool)arg1;
- (void)generateProgress;
- (void)handleWriteTimeout;
- (void)clearWriteTimer;
- (void)resetWriteTimer;
- (void)handleReadTimeout;
- (void)clearReadTimer;
- (void)resetReadTimer;
- (void)handleConnTimeout;
- (void)clearConnTimer;
- (void)resetConnTimer;
- (void)clearReq;
- (void)handleErrorForReq:(long long)arg1 errorCode:(long long)arg2 errorSubCode:(long long)arg3;
- (void)handleProgressForReq:(id)arg1;
- (_Bool)readyForReq;
- (_Bool)checkLocalFileIsFinished;
- (void)startReq;
- (id)getTaskLogInfo;
- (void)clear;
- (void)clearFinishedLocalFile;
- (void)stopTask;
- (_Bool)startTask;
- (void)dealloc;
- (id)init;
- (void)onDataCanSend;
- (void)onDataRecv;
- (void)onConnectClose:(long long)arg1;
- (void)onConnectOK;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

