//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface LBSUploadServerEngine : NSObject <IEngineDispatchDelegate>
{
    long long _nLat;
    long long _nLon;
    long long _nAlt;
    long long _nAccuracy;
    long long _remandLat;
    long long _remandLon;
    long long _uploadTimeInterval;
    double _uploadTime;
    double _updateTime;
    NSString *_blueBannerWebUrl;
    NSString *_blueBannerNativeUrl;
    int _xo;
}

+ (id)sharedInstance;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)sendLocationToServer;
- (void)notifyLBSEndUpdateLocation:(id)arg1;
- (void)startUploadLocation;
- (void)handleAccountLogout;
- (void)handleMessageReceiveFinished;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *blueBannerNativeUrl; // @dynamic blueBannerNativeUrl;
@property(retain, nonatomic) NSString *blueBannerWebUrl; // @dynamic blueBannerWebUrl;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long nAccuracy; // @dynamic nAccuracy;
@property(nonatomic) long long nAlt; // @dynamic nAlt;
@property(nonatomic) long long nLat; // @dynamic nLat;
@property(nonatomic) long long nLon; // @dynamic nLon;
@property(nonatomic) long long remandLat; // @dynamic remandLat;
@property(nonatomic) long long remandLon; // @dynamic remandLon;
@property(readonly) Class superclass;
@property(nonatomic) long long uploadTimeInterval; // @dynamic uploadTimeInterval;

@end

