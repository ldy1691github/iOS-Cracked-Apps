//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGWalletDAO : NSObject
{
}

+ (id)clientTimeString;
+ (id)userID;
+ (id)token;
+ (id)clientver;
+ (id)mid;
+ (id)appKey;
+ (id)appID;
+ (id)signWithParameterString:(id)arg1;
+ (id)encodedExtraParameterWithServiceStruct:(id)arg1 serviceType:(long long)arg2;
+ (id)extraParameterWithServiceStruct:(id)arg1 serviceType:(long long)arg2;
+ (id)postDataWithServiceStruct:(id)arg1 serviceType:(long long)arg2;
- (id)userAgentWithServiceType:(long long)arg1;
- (id)URLKeyWithServiceType:(long long)arg1;
- (void)sendError:(id)arg1 AndEZhttp:(id)arg2;
- (id)errorWithCode:(long long)arg1;
- (id)entityDataWithDictionary:(id)arg1 serviceType:(long long)arg2;
- (id)handleHttpRequestResponse:(id)arg1 serviceType:(long long)arg2 error:(id *)arg3;
- (id)httpSynchronousRequestRechargingOrderNumberWithParameters:(id)arg1 URL:(id)arg2 error:(id *)arg3;
- (id)httpSynchronousRequestWithServiceStruct:(id)arg1 serviceType:(long long)arg2 error:(id *)arg3;
- (id)httpSynchronousRequestWithServiceType:(long long)arg1 error:(id *)arg2;
- (id)synchronouslyConsumeOrder:(id)arg1 storekey:(id)arg2 goodsList:(id)arg3 currency:(long long)arg4 message:(id)arg5 password:(id)arg6 sourceId:(id)arg7 songHash:(id)arg8 error:(id *)arg9;
- (id)synchronouslyGetRechargeOrderNumberWithSourceId:(id)arg1 songHash:(id)arg2 error:(id *)arg3;
- (id)synchronouslyReqortOrderState:(id)arg1 error:(id *)arg2;
- (id)synchronouslySaveStoreKey:(id)arg1 error:(id *)arg2;
- (id)synchronouslyRequestRechargingWithPaymentMethod:(long long)arg1 totalFee:(float)arg2 message:(id)arg3 error:(id *)arg4;
- (id)synchronouslyRequestConsumptionWithGoodsList:(id)arg1 currency:(long long)arg2 message:(id)arg3 password:(id)arg4 error:(id *)arg5;
- (id)synchronouslyRequestUserBalance:(id *)arg1;

@end
