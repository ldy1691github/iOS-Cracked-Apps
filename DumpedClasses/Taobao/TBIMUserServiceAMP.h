//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMUserServiceBase.h"

#import "MCDataSourceProtocol.h"

@class NSString;

@interface TBIMUserServiceAMP : TBIMUserServiceBase <MCDataSourceProtocol>
{
}

- (void)setUserDisplayName:(id)arg1 userId:(id)arg2;
- (void)ampUserUpdated:(id)arg1;
- (id)getUser:(id)arg1 orTaobaoId:(id)arg2;
- (id)init;
- (void)reset;
- (void)start;
- (id)getProtocol;
- (id)getBizKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

