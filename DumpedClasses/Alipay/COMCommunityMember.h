//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding.h"

@class NSString;

@interface COMCommunityMember : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *haedImgUrl; // @dynamic haedImgUrl;
@property(readonly) _Bool hasHaedImgUrl; // @dynamic hasHaedImgUrl;
@property(readonly) _Bool hasLoginId; // @dynamic hasLoginId;
@property(readonly) _Bool hasRole; // @dynamic hasRole;
@property(readonly) _Bool hasShowName; // @dynamic hasShowName;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *loginId; // @dynamic loginId;
@property(retain, nonatomic) NSString *role; // @dynamic role;
@property(retain, nonatomic) NSString *showName; // @dynamic showName;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

