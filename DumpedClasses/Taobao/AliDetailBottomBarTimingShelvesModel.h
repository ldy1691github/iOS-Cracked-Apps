//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailBottomBarItemModel.h"

@class NSString;

@interface AliDetailBottomBarTimingShelvesModel : AliDetailBottomBarItemModel
{
    _Bool _needHideTips;
    long long _startTime;
    NSString *_itemID;
    NSString *_bgColor;
}

@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool needHideTips; // @synthesize needHideTips=_needHideTips;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

