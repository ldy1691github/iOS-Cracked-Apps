//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSNumber, NSString;

@interface UserSummaryHobbyItemModel : QQModel
{
    NSString *_strTitle;
    NSString *_strCoverUrl;
    NSString *_strJmpUrl;
    NSString *_strSubInfo;
    NSString *_strDesc;
    NSNumber *_serviceType;
    NSString *_strTitleIconUrl;
    NSArray *_labelsList;
    long long _uint64_group_code;
}

@property(nonatomic) long long uint64_group_code; // @synthesize uint64_group_code=_uint64_group_code;
@property(retain, nonatomic) NSArray *labelsList; // @synthesize labelsList=_labelsList;
@property(copy, nonatomic) NSString *strTitleIconUrl; // @synthesize strTitleIconUrl=_strTitleIconUrl;
@property(retain, nonatomic) NSNumber *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *strDesc; // @synthesize strDesc=_strDesc;
@property(copy, nonatomic) NSString *strSubInfo; // @synthesize strSubInfo=_strSubInfo;
@property(copy, nonatomic) NSString *strJmpUrl; // @synthesize strJmpUrl=_strJmpUrl;
@property(copy, nonatomic) NSString *strCoverUrl; // @synthesize strCoverUrl=_strCoverUrl;
@property(copy, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
- (void).cxx_destruct;

@end

