//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XMcChange : NSObject
{
    int _Changes;
    int _UnreadChange;
    int _McStateChange;
    int _MsgStateChange;
    int _PriorityChange;
}

@property(nonatomic) int PriorityChange; // @synthesize PriorityChange=_PriorityChange;
@property(nonatomic) int MsgStateChange; // @synthesize MsgStateChange=_MsgStateChange;
@property(nonatomic) int McStateChange; // @synthesize McStateChange=_McStateChange;
@property(nonatomic) int UnreadChange; // @synthesize UnreadChange=_UnreadChange;
@property(nonatomic) int Changes; // @synthesize Changes=_Changes;
- (void)setPriority:(int)arg1;
- (void)setMsgState:(int)arg1;
- (void)setMcState:(int)arg1;
- (void)setUnread:(int)arg1;
- (_Bool)haveChange;
- (void)reset;

@end

