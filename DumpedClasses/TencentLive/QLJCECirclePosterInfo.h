//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCECirclePosterInfo : JceObjectV2
{
    unsigned int jcev2_p_1_o_timestamp;
    NSString *jcev2_p_0_o_Url;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_timestamp, setter=setJce_timestamp:) unsigned int jcev2_p_1_o_timestamp; // @synthesize jcev2_p_1_o_timestamp;
@property(retain, nonatomic, getter=jce_Url, setter=setJce_Url:) NSString *jcev2_p_0_o_Url; // @synthesize jcev2_p_0_o_Url;
- (void).cxx_destruct;
- (id)init;

@end
