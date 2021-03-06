//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCEmoticonDataSourceProtocol.h"
#import "TBIMEmoticonServiceDelegate.h"

@class NSString, YHMuticastDelegate<MCEmoticonDataSourceDelegate>;

@interface MCEmoticonDataSource : NSObject <TBIMEmoticonServiceDelegate, MCEmoticonDataSourceProtocol>
{
    id <TBIMSessionAdapter> _session;
    id <TBIMEmoticonServiceAdapter> _emoticonService;
    YHMuticastDelegate<MCEmoticonDataSourceDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<MCEmoticonDataSourceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
@property(retain, nonatomic) id <TBIMEmoticonServiceAdapter> emoticonService; // @synthesize emoticonService=_emoticonService;
@property(retain, nonatomic) id <TBIMSessionAdapter> session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)emoticonPackRemoved:(id)arg1;
- (void)emoticonPackAdd:(id)arg1;
- (void)reset;
- (void)start;
- (id)getProtocol;
- (id)getBizKey;
- (id)coverAMPPackageToMCPackage:(id)arg1;
- (id)getCustomEmoticonPackage;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

