//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QRouteSearchError, RouteResult;

@protocol QSearchDelegate <NSObject>

@optional
- (void)notifyCancelNavRouteSearchRequestResult:(_Bool)arg1;
- (void)notifyNavRouteSearchDidFailWithError:(QRouteSearchError *)arg1;
- (void)notifyNavRouteSearchDidFail;
- (void)notifyNavRouteSearchResult:(RouteResult *)arg1;
@end

