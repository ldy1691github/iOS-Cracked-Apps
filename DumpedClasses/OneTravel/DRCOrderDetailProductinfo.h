//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface DRCOrderDetailProductinfo : JSONModel
{
    NSString *_productPicUrl;
    NSString *_productType;
    NSString *_productLevel;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *productLevel; // @synthesize productLevel=_productLevel;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *productPicUrl; // @synthesize productPicUrl=_productPicUrl;
- (void).cxx_destruct;

@end

