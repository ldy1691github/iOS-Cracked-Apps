//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHTTPClient;

@interface CTSearchNetManager : NSObject
{
    CTHTTPClient *_client;
}

+ (id)manager;
@property(retain, nonatomic) CTHTTPClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)getPlaceWithRegion:(id)arg1 keyword:(id)arg2 completedBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)autocompletekeywordJzip:(id)arg1 completedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)recommendAutocomplete:(id)arg1 completedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3 isHasCancelRequest:(_Bool)arg4;
- (void)autocomplete:(id)arg1 completedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3 isHasCancelRequest:(_Bool)arg4;
- (id)init;

@end
