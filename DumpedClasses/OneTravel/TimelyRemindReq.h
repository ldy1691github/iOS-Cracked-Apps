//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface TimelyRemindReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cancelBtnText; // @dynamic cancelBtnText;
@property(copy, nonatomic) NSString *confirmBtnText; // @dynamic confirmBtnText;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool hasCancelBtnText; // @dynamic hasCancelBtnText;
@property(nonatomic) _Bool hasConfirmBtnText; // @dynamic hasConfirmBtnText;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasMsgId; // @dynamic hasMsgId;
@property(nonatomic) _Bool hasMsgType; // @dynamic hasMsgType;
@property(nonatomic) _Bool hasMsgValue; // @dynamic hasMsgValue;
@property(nonatomic) _Bool hasOrderId; // @dynamic hasOrderId;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(copy, nonatomic) NSString *msgValue; // @dynamic msgValue;
@property(copy, nonatomic) NSString *orderId; // @dynamic orderId;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
