//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PirateElfFAB.h"

@class UIImageView;

@interface PirateElfFrameImageFAB : PirateElfFAB
{
    UIImageView *_logoImageView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)imageViewOnClick:(id)arg1;
- (void)disappear;
- (void)loadAnimations;
- (void)loadImage;
- (void)show;

@end

