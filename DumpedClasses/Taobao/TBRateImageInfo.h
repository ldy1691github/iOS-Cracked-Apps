//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBRateImageInfo : TBJSONModel
{
    NSString *_url;
    NSString *_thumbnailUrl;
    NSString *_fileId;
    NSString *_tfsKey;
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *tfsKey; // @synthesize tfsKey=_tfsKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

