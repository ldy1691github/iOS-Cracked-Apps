//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DGPUpdateCenterCallback : NSObject
{
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    CDUnknownBlockType _didUpdateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didUpdateBlock; // @synthesize didUpdateBlock=_didUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
