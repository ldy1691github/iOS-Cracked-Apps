//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NMDjRadioCategory;

@interface NMDjRadioHotRequest : NMBaseRequest
{
    unsigned long long _limit;
    unsigned long long _offset;
    NMDjRadioCategory *_category;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NMDjRadioCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)initWithCategory:(id)arg1 type:(unsigned long long)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4;

@end

