//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMDiscoveryPlaylistRequest : NMBaseRequest
{
    NSString *_categoryName;
}

@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (id)initWithCategory:(id)arg1 limit:(long long)arg2;

@end

