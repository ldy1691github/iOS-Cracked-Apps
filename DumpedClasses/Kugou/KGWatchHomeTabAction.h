//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KGWatchHomeTabAction : UserActionRecord
{
    int _userActionID;
    NSString *defaultTab;
    unsigned long long errorCode;
    NSString *functionName;
    NSString *fromSource;
}

@property(nonatomic) int userActionID; // @synthesize userActionID=_userActionID;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode;
@property(nonatomic) NSString *defaultTab; // @synthesize defaultTab;
- (void)coding;
- (void)dealloc;

@end

