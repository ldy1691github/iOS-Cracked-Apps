//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface TTAdSiteWebPreloadManager : NSObject
{
    NSMutableSet *_preloadURLSet;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableSet *preloadURLSet; // @synthesize preloadURLSet=_preloadURLSet;
- (void).cxx_destruct;
- (void)adSiteWebPreload:(id)arg1 listView:(id)arg2;

@end
