//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

@interface ESPSearchTypingOperation : NSOperation
{
    NSString *_text;
    CDUnknownBlockType _callback;
}

+ (id)operationWithText:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)main;

@end

