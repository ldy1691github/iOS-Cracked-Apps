//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHSingleBranchTag : XYRKModel
{
    NSString *_oid;
    NSString *_link;
    NSString *_name;
    NSString *_transformDisplayName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *transformDisplayName; // @synthesize transformDisplayName=_transformDisplayName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *oid; // @synthesize oid=_oid;
- (id)generateTagToServer;

@end
