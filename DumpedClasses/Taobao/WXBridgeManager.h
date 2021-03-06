//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WXBridgeContext, WXSDKInstance;

@interface WXBridgeManager : NSObject
{
    _Bool _stopRunning;
    WXBridgeContext *_bridgeCtx;
    NSMutableArray *_instanceIdStack;
}

+ (void)_performBlockOnBridgeThread:(CDUnknownBlockType)arg1;
+ (id)jsThread;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *instanceIdStack; // @synthesize instanceIdStack=_instanceIdStack;
@property(nonatomic) _Bool stopRunning; // @synthesize stopRunning=_stopRunning;
@property(retain, nonatomic) WXBridgeContext *bridgeCtx; // @synthesize bridgeCtx=_bridgeCtx;
- (void).cxx_destruct;
- (void)executeJsMethod:(id)arg1;
- (void)resetEnvironment;
- (void)logToWebSocket:(id)arg1 message:(id)arg2;
- (void)connectToWebSocket:(id)arg1;
- (void)connectToDevToolWithUrl:(id)arg1;
- (void)callBack:(id)arg1 funcId:(id)arg2 params:(id)arg3;
- (void)callBack:(id)arg1 funcId:(id)arg2 params:(id)arg3 keepAlive:(_Bool)arg4;
- (void)fireEvent:(id)arg1 ref:(id)arg2 type:(id)arg3 params:(id)arg4 domChanges:(id)arg5;
- (void)fireEvent:(id)arg1 ref:(id)arg2 type:(id)arg3 params:(id)arg4;
- (void)registerComponents:(id)arg1;
- (void)registerModules:(id)arg1;
- (void)unregisterService:(id)arg1;
- (void)registerService:(id)arg1 withService:(id)arg2 withOptions:(id)arg3;
- (void)registerService:(id)arg1 withServiceUrl:(id)arg2 withOptions:(id)arg3;
- (void)callJsMethod:(id)arg1;
- (void)executeJsFramework:(id)arg1;
- (void)updateState:(id)arg1 data:(id)arg2;
- (void)refreshInstance:(id)arg1 data:(id)arg2;
- (void)forceGarbageCollection;
- (void)destroyInstance:(id)arg1;
- (id)getInstanceIdStack;
- (void)createInstance:(id)arg1 template:(id)arg2 options:(id)arg3 data:(id)arg4;
- (void)_runLoopThread;
- (void)dealloc;
- (void)unload;
@property(readonly, nonatomic) __weak WXSDKInstance *topInstance;
- (id)init;

@end

