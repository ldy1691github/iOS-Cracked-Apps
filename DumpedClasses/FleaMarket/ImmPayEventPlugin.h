//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ImmPayEventHandler;

@interface ImmPayEventPlugin : NSObject
{
    ImmPayEventHandler *_eh;
}

@property(nonatomic) __weak ImmPayEventHandler *eh; // @synthesize eh=_eh;
- (void).cxx_destruct;
- (void)onCode:(id)arg1 Err:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end

