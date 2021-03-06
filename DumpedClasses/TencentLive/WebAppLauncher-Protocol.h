//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LaunchSession, NSDictionary, NSString, ServiceSubscription;

@protocol WebAppLauncher <NSObject>
- (ServiceSubscription *)subscribeIsWebAppPinned:(NSString *)arg1 success:(void (^)(_Bool))arg2 failure:(void (^)(NSError *))arg3;
- (void)isWebAppPinned:(NSString *)arg1 success:(void (^)(_Bool))arg2 failure:(void (^)(NSError *))arg3;
- (void)unPinWebApp:(NSString *)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)pinWebApp:(NSString *)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)closeWebApp:(LaunchSession *)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)joinWebAppWithId:(NSString *)arg1 success:(void (^)(WebAppSession *))arg2 failure:(void (^)(NSError *))arg3;
- (void)joinWebApp:(LaunchSession *)arg1 success:(void (^)(WebAppSession *))arg2 failure:(void (^)(NSError *))arg3;
- (void)launchWebApp:(NSString *)arg1 params:(NSDictionary *)arg2 relaunchIfRunning:(_Bool)arg3 success:(void (^)(WebAppSession *))arg4 failure:(void (^)(NSError *))arg5;
- (void)launchWebApp:(NSString *)arg1 relaunchIfRunning:(_Bool)arg2 success:(void (^)(WebAppSession *))arg3 failure:(void (^)(NSError *))arg4;
- (void)launchWebApp:(NSString *)arg1 params:(NSDictionary *)arg2 success:(void (^)(WebAppSession *))arg3 failure:(void (^)(NSError *))arg4;
- (void)launchWebApp:(NSString *)arg1 success:(void (^)(WebAppSession *))arg2 failure:(void (^)(NSError *))arg3;
- (int)webAppLauncherPriority;
- (id <WebAppLauncher>)webAppLauncher;
@end

