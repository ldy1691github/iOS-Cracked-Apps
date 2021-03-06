//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NMDjRadioCategory;

@interface NMDjRadioNewRequest : NMBaseRequest
{
    unsigned long long _limit;
    unsigned long long _offset;
    NMDjRadioCategory *_category;
}

@property(readonly, nonatomic) NMDjRadioCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)initWithCategory:(id)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3;

@end

