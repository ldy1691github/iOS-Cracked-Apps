//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCardUpdatePlugin.h"

@class NSString;

@interface CBOptionChangedCardUpdatePlugin : NSObject <CCardUpdatePlugin>
{
}

+ (int)convertFromSocialOptionState:(int)arg1;
- (void)updateCardCount:(id)arg1 option:(id)arg2 state:(int)arg3 params:(id)arg4;
- (_Bool)updateCard:(id)arg1 updateNotification:(id)arg2;
- (_Bool)canHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

