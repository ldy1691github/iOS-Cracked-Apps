//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

@class NSMutableDictionary, NSString;

@interface QZVideoCheckVideoIllegalEngine : QZBaseEngine
{
    NSMutableDictionary *_videosIllegalInfo;
    NSString *_illegalMsg;
}

+ (id)instance;
@property(retain, nonatomic) NSString *illegalMsg; // @synthesize illegalMsg=_illegalMsg;
@property(retain, nonatomic) NSMutableDictionary *videosIllegalInfo; // @synthesize videosIllegalInfo=_videosIllegalInfo;
- (void).cxx_destruct;
- (id)init;
- (long long)checkIllegalWithVideoVids:(id)arg1;

@end

