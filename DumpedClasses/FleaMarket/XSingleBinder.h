//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XSingleBinder : NSObject
{
    id _target;
    NSMutableDictionary *_bindables;
}

- (void).cxx_destruct;
- (void)clearAllConnections;
- (void)clearConnectionForKey:(id)arg1;
- (void)singleBindTo:(id)arg1 inKey:(id)arg2 withObserverSels:(id)arg3;
- (void)forceSingleBindTo:(id)arg1 inKey:(id)arg2 withObserverSels:(id)arg3;
- (void)internalSingleBindTo:(id)arg1 inKey:(id)arg2 withObserverSels:(id)arg3 inForce:(_Bool)arg4;
- (id)initWithTarget:(id)arg1;

@end
