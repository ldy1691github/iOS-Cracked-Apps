//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SwarmPeroidActionService.h"

@class NSString;

@interface SwarmPeroidActionServiceImpl : NSObject <SwarmPeroidActionService>
{
    _Bool _isServiceRunning;
}

@property(nonatomic) _Bool isServiceRunning; // @synthesize isServiceRunning=_isServiceRunning;
- (void)addBatteryInfoCollectAction;
- (void)requestStop;
- (void)requestStart;
- (_Bool)isRunning;
- (_Bool)isBatteryCollectAllowd;
- (_Bool)isServiceAllowed;
- (id)getApolloValueWithKey:(id)arg1;
- (id)getApolloExperiment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
