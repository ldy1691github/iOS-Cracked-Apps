//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTLocationTransform : NSObject
{
}

+ (struct CLLocationCoordinate2D)transformB09ToGCJ02WithLocation:(struct CLLocationCoordinate2D)arg1;
+ (double)transformLongitudeWithX:(double)arg1 andY:(double)arg2;
+ (double)transformLatitudeWithX:(double)arg1 andY:(double)arg2;
+ (struct CLLocationCoordinate2D)transformToGCJ02LocationWithWGS84Location:(struct CLLocationCoordinate2D)arg1;

@end

