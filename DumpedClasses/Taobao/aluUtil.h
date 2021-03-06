//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface aluUtil : NSObject
{
}

+ (id)getHostAppVersion;
+ (_Bool)isAliYunApp:(id)arg1;
+ (_Bool)isCbuApp:(id)arg1;
+ (_Bool)isBuildForIPad;
+ (_Bool)isTaobao4iPhone;
+ (id)getBaseHelpPageUrl:(id)arg1;
+ (id)getHelpPageUrlWithCode:(id)arg1;
+ (id)allPropertiesOfClass:(Class)arg1;
+ (id)getAppProductName;
+ (id)generateSignWithKey:(id)arg1 timestamp:(id)arg2 havanaId:(id)arg3 needSdkVersion:(_Bool)arg4;
+ (long long)getSystemTimeStamp;
+ (id)getSecurityData;
+ (id)buildRiskControlInfo;
+ (id)getSecurityDataString;
+ (id)getUmidToken;
+ (id)getApdId;
+ (void)setupBaseInfo:(id)arg1;
+ (id)labelWithFont:(id)arg1 multiLines:(_Bool)arg2 text:(id)arg3 color:(id)arg4 frame:(struct CGRect)arg5;
+ (id)stringWithPartHidden:(id)arg1;
+ (_Bool)isChinaMobileNumber:(id)arg1;
+ (id)callbackUrlFromUrl:(id)arg1;
+ (id)getMultiLanguageString:(id)arg1;
+ (id)actionFromParams:(id)arg1;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3 postion:(int)arg4;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2 disableRefresh:(_Bool)arg3;
+ (void)pushWebViewController:(id)arg1 url:(id)arg2;
+ (id)colorWithRGB:(int)arg1 alpha:(double)arg2;
+ (id)colorWithRGBA:(int)arg1;
+ (id)getCurrentView;
+ (id)getTopViewController;
+ (id)getUIWindow;
+ (void)becomeFirstResponderWithTextField:(id)arg1;
+ (id)urlWith:(id)arg1 parameters:(id)arg2;
+ (id)addParameter:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)orderedParameters:(id)arg1;
+ (id)parametersFromURL:(id)arg1;
+ (_Bool)isIPhone;
+ (_Bool)isIPAD;
+ (_Bool)iOS8OrLater;
+ (_Bool)iOS9OrLater;
+ (id)imageByApplyingAlpha:(double)arg1 image:(id)arg2;
+ (id)bgImageFromColors:(id)arg1 withFrame:(struct CGRect)arg2;
+ (void)imageWithUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)imageInBundle:(id)arg1;
+ (id)image:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithColor:(id)arg1;

@end

