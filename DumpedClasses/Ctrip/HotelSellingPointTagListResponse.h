//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelSellingPointTagListResponse : CTBusinessBean
{
    int _result;
    int _defaultShowCount;
    NSString *_resultMessage;
    NSString *_tagListDescription;
    NSMutableArray *_tagInfoList;
}

@property(retain, nonatomic) NSMutableArray *tagInfoList; // @synthesize tagInfoList=_tagInfoList;
@property(copy, nonatomic) NSString *tagListDescription; // @synthesize tagListDescription=_tagListDescription;
@property(nonatomic) int defaultShowCount; // @synthesize defaultShowCount=_defaultShowCount;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

