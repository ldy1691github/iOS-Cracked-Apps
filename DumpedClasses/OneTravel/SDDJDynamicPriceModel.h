//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface SDDJDynamicPriceModel : JSONModel
{
    double _dpRatio;
    long long _dpReasonId;
    NSString<Optional> *_dpTitle;
}

@property(copy, nonatomic) NSString<Optional> *dpTitle; // @synthesize dpTitle=_dpTitle;
@property(nonatomic) long long dpReasonId; // @synthesize dpReasonId=_dpReasonId;
@property(nonatomic) double dpRatio; // @synthesize dpRatio=_dpRatio;
- (void).cxx_destruct;

@end

