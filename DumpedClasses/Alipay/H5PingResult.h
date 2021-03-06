//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface H5PingResult : NSObject
{
    float _consumedTimeMs;
    float _loss;
    NSMutableArray *_timePerRound;
    NSString *_networkType;
    long long _timeStamp;
}

@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSMutableArray *timePerRound; // @synthesize timePerRound=_timePerRound;
@property(nonatomic) float loss; // @synthesize loss=_loss;
@property(nonatomic) float consumedTimeMs; // @synthesize consumedTimeMs=_consumedTimeMs;
- (void).cxx_destruct;
- (id)pingResult;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

