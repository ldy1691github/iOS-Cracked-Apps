//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALBBTradeTaokeParams;

@interface ALBBTradeManager : NSObject
{
    ALBBTradeTaokeParams *_taokeParams;
    CDUnknownBlockType _onCartSuccess;
    CDUnknownBlockType _onCartCancel;
    CDUnknownBlockType _onTradeSuccess;
    CDUnknownBlockType _onTradeFailure;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType onTradeFailure; // @synthesize onTradeFailure=_onTradeFailure;
@property(copy, nonatomic) CDUnknownBlockType onTradeSuccess; // @synthesize onTradeSuccess=_onTradeSuccess;
@property(copy, nonatomic) CDUnknownBlockType onCartCancel; // @synthesize onCartCancel=_onCartCancel;
@property(copy, nonatomic) CDUnknownBlockType onCartSuccess; // @synthesize onCartSuccess=_onCartSuccess;
@property(retain, nonatomic) ALBBTradeTaokeParams *taokeParams; // @synthesize taokeParams=_taokeParams;
- (void).cxx_destruct;
- (void)setTradeOnSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (void)setCartOnSuccess:(CDUnknownBlockType)arg1 onCancel:(CDUnknownBlockType)arg2;

@end
