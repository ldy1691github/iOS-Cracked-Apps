//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightListSearchV3Response : CTBusinessBean
{
    long long flag;
    int result;
    int resultStatus;
    NSString *resultMessage;
    NSString *transactionNo;
    NSString *messageToken;
    int flightTotal;
    NSMutableArray *flightList;
    NSMutableArray *flightListNoteList;
    NSMutableArray *tagStyleList;
    NSMutableArray *notificationList;
    NSMutableArray *aBTInfoList;
    NSMutableArray *flightTransportCityList;
}

@property(retain, nonatomic) NSMutableArray *flightTransportCityList; // @synthesize flightTransportCityList;
@property(retain, nonatomic) NSMutableArray *aBTInfoList; // @synthesize aBTInfoList;
@property(retain, nonatomic) NSMutableArray *notificationList; // @synthesize notificationList;
@property(retain, nonatomic) NSMutableArray *tagStyleList; // @synthesize tagStyleList;
@property(retain, nonatomic) NSMutableArray *flightListNoteList; // @synthesize flightListNoteList;
@property(retain, nonatomic) NSMutableArray *flightList; // @synthesize flightList;
@property(nonatomic) int flightTotal; // @synthesize flightTotal;
@property(copy, nonatomic) NSString *messageToken; // @synthesize messageToken;
@property(copy, nonatomic) NSString *transactionNo; // @synthesize transactionNo;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) int resultStatus; // @synthesize resultStatus;
@property(nonatomic) int result; // @synthesize result;
@property(nonatomic) long long flag; // @synthesize flag;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
