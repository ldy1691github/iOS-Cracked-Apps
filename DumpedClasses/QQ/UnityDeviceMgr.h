//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface UnityDeviceMgr : NSObject
{
    NSMutableArray *_deviceMgrs;
    NSMutableDictionary *_deviceDic;
    unsigned long long _selfUin;
}

+ (id)GetInstance;
- (id)GetDeviceViewController:(id)arg1;
- (id)GetDeviceModel:(id)arg1;
- (id)GetDeviceModel:(int)arg1 deviceType:(int)arg2;
- (int)GetOnlineDeviceCount:(int)arg1;
- (int)GetDeviceCount:(int)arg1;
- (_Bool)HasUin:(id)arg1;
- (_Bool)removeDevice:(id)arg1;
- (_Bool)addDevice:(id)arg1;
- (void)raiseModelUpdate:(id)arg1;
- (void)changeAccount;
- (void)dealloc;
- (id)init;

@end
