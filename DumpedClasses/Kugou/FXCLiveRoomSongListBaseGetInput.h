//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXCLiveRoomSongListBaseGetInput : FXBaseJSONModel
{
    long long _pid;
    long long _times;
    long long _appId;
    NSString *_device;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) long long appId; // @synthesize appId=_appId;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(nonatomic) long long pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)generateGetUrlParams;
- (id)init;

@end

