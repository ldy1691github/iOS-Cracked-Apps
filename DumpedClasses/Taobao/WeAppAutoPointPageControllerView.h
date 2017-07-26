//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppPointPageControllerView.h"

@class NSTimer;

@interface WeAppAutoPointPageControllerView : WeAppPointPageControllerView
{
    NSTimer *_timer;
    long long _seconds;
}

@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTimer;
- (void)timerProc:(id)arg1;
- (void)pageTurn:(unsigned long long)arg1 withAnimated:(_Bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setTimeInterval:(long long)arg1;

@end
