//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTActivityContentItemShareProtocol.h"

@class NSDictionary, NSString, UIImage;

@interface TTSinaWeiboContentItem : NSObject <TTActivityContentItemShareProtocol>
{
    long long _shareType;
    UIImage *_image;
    NSString *_imageUrl;
    NSString *_webPageUrl;
    NSString *_title;
    NSString *_desc;
    UIImage *_thumbImage;
    NSDictionary *_callbackUserInfo;
    NSString *_contentTitle;
    NSString *_activityImageName;
}

@property(copy, nonatomic) NSString *activityImageName; // @synthesize activityImageName=_activityImageName;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(copy, nonatomic) NSDictionary *callbackUserInfo; // @synthesize callbackUserInfo=_callbackUserInfo;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *webPageUrl; // @synthesize webPageUrl=_webPageUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentItemType;
- (id)initWithDesc:(id)arg1 webPageUrl:(id)arg2 image:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

