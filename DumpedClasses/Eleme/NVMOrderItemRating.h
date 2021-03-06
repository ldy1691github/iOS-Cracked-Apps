//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NVMOrderItemRatingReply;

@interface NVMOrderItemRating : NVMModel
{
    long long _isSatisfied;
    NSString *_ratingText;
    NVMOrderItemRatingReply *_reply;
    NSString *_imageHash;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(retain, nonatomic) NVMOrderItemRatingReply *reply; // @synthesize reply=_reply;
@property(copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(nonatomic) long long isSatisfied; // @synthesize isSatisfied=_isSatisfied;
- (void).cxx_destruct;
- (id)normalImageURL;
- (id)smallImageURL;
- (_Bool)hasReply;

@end

