//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HotelDetailRequestUtil : NSObject
{
}

+ (void)obtainGeneralCouponService:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)sendGeneralCouponService:(id)arg1 completion:(CDUnknownBlockType)arg2 withUtil:(id)arg3;
+ (void)transformLiteralsOfResponse:(id)arg1;
+ (void)fillDataDetailWithDeailResponse:(id)arg1 responseEntity:(id)arg2;
+ (id)createHotelDetailRequest:(id)arg1;
+ (int)buildControlBitMap:(id)arg1;
+ (void)fillDataModifyWithDeailResponse:(id)arg1 responseEntity:(id)arg2;
+ (id)createModifyHotelDetailRequest:(id)arg1;

@end
