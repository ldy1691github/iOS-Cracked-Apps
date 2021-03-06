//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBAccsFilter, TBAccsUploadStrategy;

@interface TBAccsInstructContent : TBJSONModel
{
    NSString *_debugId;
    long long _duration;
    long long _retryTimes;
    TBAccsUploadStrategy *_uploadStrategy;
    TBAccsFilter *_filter;
}

@property(retain, nonatomic) TBAccsFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) TBAccsUploadStrategy *uploadStrategy; // @synthesize uploadStrategy=_uploadStrategy;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
- (void).cxx_destruct;

@end

