//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSNumber<Optional>, NSString, NSString<Optional>, TTIMHttpDeliveSilenceModel<Optional>;

@interface TTIMHttpSendMessageResponseModel : JSONModel
{
    NSNumber *_cmd;
    NSString *_seqId;
    NSNumber<Optional> *_statusCode;
    NSString<Optional> *_svrMsgId;
    TTIMHttpDeliveSilenceModel<Optional> *_deliveSilence;
}

+ (id)keyMapper;
@property(retain, nonatomic) TTIMHttpDeliveSilenceModel<Optional> *deliveSilence; // @synthesize deliveSilence=_deliveSilence;
@property(copy, nonatomic) NSString<Optional> *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(retain, nonatomic) NSNumber<Optional> *statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *seqId; // @synthesize seqId=_seqId;
@property(retain, nonatomic) NSNumber *cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (id)transformToPBModel;
- (id)init;

@end

