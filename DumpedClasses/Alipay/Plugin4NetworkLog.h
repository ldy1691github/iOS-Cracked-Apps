//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginBase.h"

@class NSDictionary, NSString;

@interface Plugin4NetworkLog : PluginBase
{
    _Bool _disableRSA;
    NSDictionary *_canEnableNetWorkDiag;
    NSDictionary *_canEnableNetworkPerformance;
    long long _random;
    NSString *_diagAppIdRule;
    NSString *_diagPublicIdRule;
    NSString *_diagUrlRule;
    NSString *_perAppIdRule;
    NSString *_perPublicIdRule;
    NSString *_perUrlRule;
}

@property(copy, nonatomic) NSString *perUrlRule; // @synthesize perUrlRule=_perUrlRule;
@property(copy, nonatomic) NSString *perPublicIdRule; // @synthesize perPublicIdRule=_perPublicIdRule;
@property(copy, nonatomic) NSString *perAppIdRule; // @synthesize perAppIdRule=_perAppIdRule;
@property(copy, nonatomic) NSString *diagUrlRule; // @synthesize diagUrlRule=_diagUrlRule;
@property(copy, nonatomic) NSString *diagPublicIdRule; // @synthesize diagPublicIdRule=_diagPublicIdRule;
@property(copy, nonatomic) NSString *diagAppIdRule; // @synthesize diagAppIdRule=_diagAppIdRule;
@property(nonatomic) _Bool disableRSA; // @synthesize disableRSA=_disableRSA;
@property(nonatomic) long long random; // @synthesize random=_random;
@property(retain, nonatomic) NSDictionary *canEnableNetworkPerformance; // @synthesize canEnableNetworkPerformance=_canEnableNetworkPerformance;
@property(retain, nonatomic) NSDictionary *canEnableNetWorkDiag; // @synthesize canEnableNetWorkDiag=_canEnableNetWorkDiag;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (int)priority;
- (id)init;
- (void)dealloc;

@end

