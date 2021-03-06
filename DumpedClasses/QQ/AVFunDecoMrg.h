//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsynDownloadImageObserver.h"

@class NSMutableArray, NSString;

@interface AVFunDecoMrg : NSObject <IAsynDownloadImageObserver>
{
    id <MCTempManagerDelegate> _delegate;
    NSMutableArray *_decorateArray;
    NSMutableArray *_unShowDecorateArray;
}

+ (id)mulScreenDecorationConfigPath;
+ (id)decorationConfigPath;
+ (id)decorateItemArrayFrom:(id)arg1;
+ (id)getMulScreenDecorationConfigFromCache;
+ (id)getDecorationConfigFromCache;
+ (void)preDownload:(id)arg1;
+ (void)clearMulOldCache:(id)arg1;
+ (void)clearOldCache:(id)arg1;
+ (_Bool)cacheDataIsEmpty;
+ (void)saveMulScreenDecoConfigureation:(id)arg1;
+ (void)saveDecoConfigureation:(id)arg1;
+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *unShowDecorateArray; // @synthesize unShowDecorateArray=_unShowDecorateArray;
@property(retain, nonatomic) NSMutableArray *decorateArray; // @synthesize decorateArray=_decorateArray;
@property(nonatomic) id <MCTempManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)localDefaultConfig;
- (void)downloadImageFinished:(id)arg1;
- (id)getDecorationArrayIgnoreIcon;
- (id)getUnShowArray;
- (id)getDecorationArray;
- (void)removeDecorate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

