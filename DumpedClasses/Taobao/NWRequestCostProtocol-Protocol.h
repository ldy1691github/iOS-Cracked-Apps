//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL, NSURLRequest;

@protocol NWRequestCostProtocol <NSObject>
- (void)requestDidFinish:(NSURLRequest *)arg1 ext:(NSDictionary *)arg2;
- (void)requestDidStart:(NSURLRequest *)arg1 ext:(NSDictionary *)arg2;

@optional
- (void)requestDidFinish:(NSURL *)arg1 exitDict:(NSDictionary *)arg2;
- (void)requestDidStart:(NSURL *)arg1 exitDict:(NSDictionary *)arg2;
@end

