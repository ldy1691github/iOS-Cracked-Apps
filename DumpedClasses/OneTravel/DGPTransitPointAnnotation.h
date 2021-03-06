//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONESBasePointAnnotation.h"

@class DGPStopModel, DGPTransitStopCardView, NSString;

@interface DGPTransitPointAnnotation : ONESBasePointAnnotation
{
    _Bool _isSwitchStopAnnotation;
    _Bool _isTransitMiddleDeparture;
    unsigned long long _annotationType;
    NSString *_lineId;
    NSString *_stopId;
    DGPStopModel *_stopModel;
    DGPTransitStopCardView *_cardView;
}

@property(retain, nonatomic) DGPTransitStopCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) DGPStopModel *stopModel; // @synthesize stopModel=_stopModel;
@property(retain, nonatomic) NSString *stopId; // @synthesize stopId=_stopId;
@property(retain, nonatomic) NSString *lineId; // @synthesize lineId=_lineId;
@property(nonatomic) _Bool isTransitMiddleDeparture; // @synthesize isTransitMiddleDeparture=_isTransitMiddleDeparture;
@property(nonatomic) _Bool isSwitchStopAnnotation; // @synthesize isSwitchStopAnnotation=_isSwitchStopAnnotation;
@property(nonatomic) unsigned long long annotationType; // @synthesize annotationType=_annotationType;
- (void).cxx_destruct;
- (void)resetTitle:(id)arg1;
- (id)initWithStopModel:(id)arg1 withETA:(id)arg2;
- (id)initWithStopModel:(id)arg1;

@end

