//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPDataRequest.h"

@interface AMPTabMenuRequest : AMPDataRequest
{
}

- (id)parseMtopData:(id)arg1;
- (_Bool)isExpired:(id)arg1;
- (void)memorySave:(id)arg1;
- (id)memoryRead:(_Bool *)arg1;
- (Class)getDataTypeClass;
- (id)generatePacket;

@end

