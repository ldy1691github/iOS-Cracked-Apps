//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidAppInfo : NSObject
{
    NSString *appId;
    NSString *qqNum;
    NSString *wxNum;
}

@property(retain, nonatomic) NSString *wxNum; // @synthesize wxNum;
@property(retain, nonatomic) NSString *qqNum; // @synthesize qqNum;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (id)description;
- (void)dealloc;
- (id)init;

@end

