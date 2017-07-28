//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface NMHttpDnsManager : NSObject
{
    _Bool _isFunctionOn;
    NSMutableDictionary *_HttpDNSFailedCountDic;
    NSMutableSet *_blackIpSet;
    double _lastRefreshTime;
}

+ (void)_addBILogForDeleteIp:(id)arg1 domain:(id)arg2 count:(long long)arg3;
+ (void)_BILogForHttpDnsIpFailQuery:(id)arg1 domains:(id)arg2 error:(id)arg3;
+ (void)_BILogForHttpDnsIpQuerry:(id)arg1 domainsToIPs:(id)arg2;
+ (_Bool)_isServerActivity:(id)arg1;
+ (id)defaultManager;
- (void).cxx_destruct;
- (void)_DNSHttpRequestFailed:(id)arg1;
- (void)_DNSHttpRequestSuccess:(id)arg1;
- (void)refreshHTTPDNSCacheIfNeeded:(id)arg1;
- (id)domainFromIp:(id)arg1;
- (id)URLStringByReplaceDomainInURL:(id)arg1 withIp:(id)arg2;
- (id)_bestSortedIpArrayForOriginIpArray:(id)arg1;
- (id)ipByDomain:(id)arg1;
- (_Bool)_shouldRefreshBlackList;
- (void)refreshIpBlackList;
- (void)setNoneEncryption;
@property(nonatomic) _Bool isFunctinEnabled;
@property(readonly, nonatomic) _Bool httpdnsEnabled;
- (void)_checkToOpen;
- (void)detectAvailabelForIpBlacklist;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end
