//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBModelStatusHandler;

@interface TBCErrorViewAdapter : NSObject
{
    TBModelStatusHandler *_handler;
    CDUnknownBlockType _errorReloadCallback;
}

+ (void)dismissFromView:(id)arg1;
+ (void)showInView:(id)arg1 frame:(struct CGRect)arg2 error:(id)arg3 domain:(id)arg4 errorReloadCallback:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType errorReloadCallback; // @synthesize errorReloadCallback=_errorReloadCallback;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)setup;
- (id)init;

@end

