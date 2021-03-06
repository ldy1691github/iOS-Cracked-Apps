//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FlareAnimationCallbackProtocol.h"
#import "FlareJSAnimationActionProtocol.h"
#import "FlareJSLifeCycleProtocol.h"
#import "FlareJSMethodProtocol.h"

@class FlareAdapter, FlareJS, JSContext, NSString;

@interface FlareJSService : NSObject <FlareJSLifeCycleProtocol, FlareJSAnimationActionProtocol, FlareJSMethodProtocol, FlareAnimationCallbackProtocol>
{
    JSContext *_jsContext;
    FlareJS *_flareJS;
    FlareAdapter *_fAdapter;
    NSString *_instanceName;
}

@property(retain, nonatomic) NSString *instanceName; // @synthesize instanceName=_instanceName;
@property(nonatomic) __weak FlareAdapter *fAdapter; // @synthesize fAdapter=_fAdapter;
@property(retain, nonatomic) FlareJS *flareJS; // @synthesize flareJS=_flareJS;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (void)animationDidStopWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)animationDidStartWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1 animationData:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1 animationID:(id)arg2 after:(id)arg3;
- (void)playAnimationWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1 after:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1;
- (void)addAnimationDescriptionData:(id)arg1;
- (void)invokeCustomMethod:(id)arg1 withArguments:(id)arg2;
- (void)moduleRefresh;
- (void)moduleDidAppear;
- (void)moduleDidLoad;
- (void)moduleInit;
- (id)getComponentBindMap;
- (id)animationIDForComponentKey:(id)arg1;
- (void)reload;
- (void)loadJSData:(id)arg1;
- (void)evaluateScriptWithFilePath:(id)arg1;
- (void)loadJSWithFileNames:(id)arg1;
- (void)loadJSWithFileName:(id)arg1;
- (void)loadJSScript;
- (void)loadContext;
- (void)setup;
- (id)initWithInstanceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

