//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface VCSettings : NSObject
{
    NSMutableDictionary *_data;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)useFrontCameraMirror;
- (void)addSettingData:(id)arg1;
- (id)init;

@end

