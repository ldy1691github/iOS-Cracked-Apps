//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAMobileLiveClientViewModel;

@interface FAMobileLiveReconnectManger : NSObject
{
    FAMobileLiveClientViewModel *_liveModel;
    unsigned long long _socketStatus;
    unsigned long long _roomInfoStatus;
}

+ (id)sharedReconnectManager;
@property(nonatomic) unsigned long long roomInfoStatus; // @synthesize roomInfoStatus=_roomInfoStatus;
@property(nonatomic) unsigned long long socketStatus; // @synthesize socketStatus=_socketStatus;
@property(nonatomic) __weak FAMobileLiveClientViewModel *liveModel; // @synthesize liveModel=_liveModel;
- (void).cxx_destruct;
- (void)resetData;
- (void)reconnectRoomInfo;
- (void)reGetSocketInfoOrReconnectSocket;

@end

