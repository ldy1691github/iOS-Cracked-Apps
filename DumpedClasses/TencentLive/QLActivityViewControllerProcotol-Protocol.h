//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "QLActivityViewControllerBaseProcotol.h"

@class NSString;

@protocol QLActivityViewControllerProcotol <NSObject, QLActivityViewControllerBaseProcotol>
@property(copy, nonatomic) CDUnknownBlockType activityStatusChangeBlock;
- (void)clearSource;
- (void)loadActivityContentURL:(NSString *)arg1;
- (void)setActivityStatusBlock:(void (^)(long long))arg1;
@end
