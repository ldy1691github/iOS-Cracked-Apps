//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXAlternateSocketInfo;

@interface FXLiveSocketHostManager : NSObject
{
    FXAlternateSocketInfo *_mainSocketInfo;
    FXAlternateSocketInfo *_alternateSocketInfo;
    FXAlternateSocketInfo *_currentSocketInfo;
}

+ (void)resetSockeInfoState;
+ (void)reloadSocketInfoConfig;
+ (void)setCurrentSocketInfoFaild;
+ (id)checkSocketCurrentInfo;
+ (id)sharedInstance;
@property(retain, nonatomic) FXAlternateSocketInfo *currentSocketInfo; // @synthesize currentSocketInfo=_currentSocketInfo;
@property(retain, nonatomic) FXAlternateSocketInfo *alternateSocketInfo; // @synthesize alternateSocketInfo=_alternateSocketInfo;
@property(retain, nonatomic) FXAlternateSocketInfo *mainSocketInfo; // @synthesize mainSocketInfo=_mainSocketInfo;
- (void).cxx_destruct;
- (void)resetSocketHostConfigState;
- (void)updateCurrentSocketInfoRetryNum;
- (id)checkCurrentSocketInfo;
- (void)loadHostConfig;
- (id)processingConfigList;
- (id)init;

@end

