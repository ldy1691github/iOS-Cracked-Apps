//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KABAOPRODToString.h"

@class NSString;

@interface KABAOPRODListCardMerchantReq : KABAOPRODToString
{
    _Bool _needPaging;
    int _pageNum;
    int _pageSize;
    NSString *_cityName;
}

@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) _Bool needPaging; // @synthesize needPaging=_needPaging;
- (void).cxx_destruct;

@end
