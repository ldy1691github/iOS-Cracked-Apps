//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TADPlotAdReport;

@interface TADPlotItemParser : NSObject
{
    TADPlotAdReport *_reportor;
}

@property(nonatomic) __weak TADPlotAdReport *reportor; // @synthesize reportor=_reportor;
- (void).cxx_destruct;
- (id)parseMediaItemList:(id)arg1 anchors:(id)arg2 extra:(id)arg3;
- (id)parseOrderItemList:(id)arg1 anchors:(id)arg2 extra:(id)arg3;
- (id)parseAdInfo:(id)arg1;

@end

