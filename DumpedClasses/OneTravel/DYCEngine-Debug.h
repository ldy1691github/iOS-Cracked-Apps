//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYCEngine.h"

@class NSArray, NSString;

@interface DYCEngine (Debug)
+ (void)load;
- (void)setBreakpointForSymbolName:(id)arg1 action:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *operatingStatusForAllModules;
@property(readonly, nonatomic) NSString *callStackSymbols;
@property(nonatomic) unsigned long long debugLogLevel; // @dynamic debugLogLevel;
@property(copy, nonatomic) CDUnknownBlockType debugLogger; // @dynamic debugLogger;
@end
