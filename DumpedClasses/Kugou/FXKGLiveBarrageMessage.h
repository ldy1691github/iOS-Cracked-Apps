//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface FXKGLiveBarrageMessage : NSObject
{
    long long _msgType;
    NSDictionary *_msgDic;
}

@property(copy, nonatomic) NSDictionary *msgDic; // @synthesize msgDic=_msgDic;
@property(nonatomic) long long msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;
- (void)parserMsg;

@end
