//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTPayment : NSObject
{
}

+ (void)parseThirdAuthorizeResult:(id)arg1;
+ (id)thirdPartyAuthorizeDelegate;
+ (void)setThirdPartyAuthorizeDelegate:(id)arg1;
+ (void)showPasswordControlWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)showRefundProcessWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)parseAlipayAuthorize:(id)arg1;
+ (void)parseWechatResp:(id)arg1;
+ (void)thirdPartyCancel;
+ (void)exitPayment;
+ (void)rapidPaymentBindCardWithInfo:(id)arg1 bindCardBlock:(CDUnknownBlockType)arg2;
+ (void)rapidPaymentCheckBindCardStatusWithInfo:(id)arg1 statusBlock:(CDUnknownBlockType)arg2;
+ (void)rapidPaymentWithInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
+ (void)refreshPaymentWidget;
+ (void)callPay:(id)arg1 inViewController:(id)arg2 getPayInfoFailedBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6 thirdCancelBlock:(CDUnknownBlockType)arg7;

@end
