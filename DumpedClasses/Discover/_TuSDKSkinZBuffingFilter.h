//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface _TuSDKSkinZBuffingFilter : GPUImageTwoInputFilter
{
    int usmIntensityUniform;
    int mixUniform;
    int contrastUniform;
    int saturationUniform;
    int shadowsUniform;
    int temperatureUniform;
    double _intensity;
    double _mix;
    double _contrast;
    double _saturation;
    double _shadows;
    double _temperature;
}

@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) double shadows; // @synthesize shadows=_shadows;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) double mix; // @synthesize mix=_mix;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (id)init;

@end
