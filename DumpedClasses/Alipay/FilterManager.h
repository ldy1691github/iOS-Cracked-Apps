//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FilterManager : NSObject
{
    NSMutableArray *_before_filters;
    NSMutableArray *_after_filters;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)doAfter:(id)arg1 response:(id)arg2;
- (id)doBefore:(id)arg1 startFilter:(id)arg2;
- (id)doBefore:(id)arg1;
- (void)addAfterFilter:(id)arg1;
- (void)addBeforeFilter:(id)arg1;
- (void)dealloc;
- (id)init;

@end

