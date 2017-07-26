//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class FioContentInformationModel, NSArray, NSString;

@interface CTAdInformation : CTViewModel
{
    _Bool _isShow;
    long long _pageType;
    long long _position;
    long long _frequency;
    NSString *_title;
    NSString *_imageUrl;
    NSString *_linkedUrl;
    NSString *_linkedH5Url;
    NSArray *_adDateInfoList;
    long long _urlType;
    long long _flag;
    long long _height;
    long long _width;
    long long _adType;
    long long _notiLevel;
    long long _notiType;
    long long _canClose;
    FioContentInformationModel *_noticeTitle;
    FioContentInformationModel *_noticeContent;
    NSString *_noticeBtn;
}

+ (id)adArrayWithInfoBean:(id)arg1;
@property(retain, nonatomic) NSString *noticeBtn; // @synthesize noticeBtn=_noticeBtn;
@property(retain, nonatomic) FioContentInformationModel *noticeContent; // @synthesize noticeContent=_noticeContent;
@property(retain, nonatomic) FioContentInformationModel *noticeTitle; // @synthesize noticeTitle=_noticeTitle;
@property(nonatomic) long long canClose; // @synthesize canClose=_canClose;
@property(nonatomic) long long notiType; // @synthesize notiType=_notiType;
@property(nonatomic) long long notiLevel; // @synthesize notiLevel=_notiLevel;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) long long urlType; // @synthesize urlType=_urlType;
@property(retain, nonatomic) NSArray *adDateInfoList; // @synthesize adDateInfoList=_adDateInfoList;
@property(copy, nonatomic) NSString *linkedH5Url; // @synthesize linkedH5Url=_linkedH5Url;
@property(copy, nonatomic) NSString *linkedUrl; // @synthesize linkedUrl=_linkedUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (_Bool)isValueEqual:(id)arg1;
- (_Bool)isHit:(id)arg1;
- (void)setDataWithInfoBean:(id)arg1;
- (void)setDateList:(id)arg1;
- (void)setDataWithContextBean:(id)arg1;

@end
