//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RqdStrategyQueryHandler : NSObject
{
    int queryInterval;
}

+ (id)sharedInstance;
@property(nonatomic) int queryInterval; // @synthesize queryInterval;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failQuery:(id)arg1;
- (void)startStrategyQuery;
- (void)checkStrategyQuery:(double)arg1;
- (id)init;

@end
