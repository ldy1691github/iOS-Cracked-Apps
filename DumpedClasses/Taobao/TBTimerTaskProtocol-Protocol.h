//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TBTimerTaskProtocol <NSObject>
- (_Bool)removeTimerTask:(id)arg1;
- (id)addTimerTask:(void (^)(void))arg1 timeInterval:(double)arg2 leeway:(long long)arg3 repeat:(_Bool)arg4;
- (id)addTimerTask:(void (^)(void))arg1 timeInterval:(double)arg2 repeat:(_Bool)arg3;
@end

