//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSToastStyle;

@interface CSToastManager : NSObject
{
    _Bool _tapToDismissEnabled;
    _Bool _queueEnabled;
    CSToastStyle *_sharedStyle;
    double _defaultDuration;
    id _defaultPosition;
}

+ (id)defaultPosition;
+ (void)setDefaultPosition:(id)arg1;
+ (double)defaultDuration;
+ (void)setDefaultDuration:(double)arg1;
+ (_Bool)isQueueEnabled;
+ (void)setQueueEnabled:(_Bool)arg1;
+ (_Bool)isTapToDismissEnabled;
+ (void)setTapToDismissEnabled:(_Bool)arg1;
+ (id)sharedStyle;
+ (void)setSharedStyle:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) id defaultPosition; // @synthesize defaultPosition=_defaultPosition;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(nonatomic, getter=isQueueEnabled) _Bool queueEnabled; // @synthesize queueEnabled=_queueEnabled;
@property(nonatomic, getter=isTapToDismissEnabled) _Bool tapToDismissEnabled; // @synthesize tapToDismissEnabled=_tapToDismissEnabled;
@property(retain, nonatomic) CSToastStyle *sharedStyle; // @synthesize sharedStyle=_sharedStyle;
- (void).cxx_destruct;
- (id)init;

@end

