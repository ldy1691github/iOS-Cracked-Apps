//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CCFeatureFilter : NSObject
{
    double _accAngle;
    double _cutoff;
}

@property(nonatomic) double cutoff; // @synthesize cutoff=_cutoff;
@property(nonatomic) double accAngle; // @synthesize accAngle=_accAngle;
- (_Bool)featureFilteringWithAccs:(id)arg1;
- (id)init;

@end

