//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (WVUtility)
+ (id)wvGetUserDefaultsKey:(id)arg1;
+ (_Bool)wvCheckAndMark:(id)arg1 withInterval:(double)arg2;
+ (_Bool)wvCheckMark:(id)arg1 withInterval:(double)arg2;
+ (void)wvMarkNow:(id)arg1;
+ (id)wvGMTCalendar;
+ (id)wvDateWithRFC6265String:(id)arg1;
+ (id)wvDateWithRFC1123String:(id)arg1;
+ (double)wvCurrentMilliseconds;
+ (double)wvcurrentTimeInterval;
- (id)wvStringWithRFC1123Format;
- (id)wvStringWithISO8601Format;
- (long long)wvGetYear;
- (id)wvGetComponents;
- (double)wvMillisecondsSinceNow;
- (double)wvMillisecondsSince1970;
@end

