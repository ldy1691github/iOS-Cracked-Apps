//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface MSOAWeexFoundationModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *_weexInstance;
}

+ (id)wx_export_method_21;
+ (id)wx_export_method_20;
+ (id)wx_export_method_19;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
- (void).cxx_destruct;
- (void)inContainerPush:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)inContainerPop:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)disappear:(CDUnknownBlockType)arg1;
- (id)viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

