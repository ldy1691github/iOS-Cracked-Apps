//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, UIImage;

@interface TBHuoyanResult : NSObject <NSCoding>
{
    long long _resultType;
    UIImage *_image;
    NSString *_imageURL;
    NSString *_resultString;
    NSString *_rawString;
    NSString *_onlinePrice;
    NSString *_offlinePrice;
    NSString *_timeStamp;
    NSString *_nonetsave;
}

@property(copy, nonatomic) NSString *nonetsave; // @synthesize nonetsave=_nonetsave;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *offlinePrice; // @synthesize offlinePrice=_offlinePrice;
@property(copy, nonatomic) NSString *onlinePrice; // @synthesize onlinePrice=_onlinePrice;
@property(copy, nonatomic) NSString *rawString; // @synthesize rawString=_rawString;
@property(copy, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
