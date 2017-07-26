//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface TGMenuItem : NSObject
{
    NSString *_title;
    UIImage *_iconImage;
    UIColor *_glowColor;
    long long _index;
}

+ (id)initWithTitle:(id)arg1 iconName:(id)arg2 glowColor:(id)arg3 index:(long long)arg4;
+ (id)initWithTitle:(id)arg1 iconName:(id)arg2 index:(long long)arg3;
+ (id)itemWithTitle:(id)arg1 iconName:(id)arg2 glowColor:(id)arg3;
+ (id)itemWithTitle:(id)arg1 iconName:(id)arg2;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIColor *glowColor; // @synthesize glowColor=_glowColor;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 glowColor:(id)arg3 index:(long long)arg4;
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 index:(long long)arg3;
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 glowColor:(id)arg3;
- (id)initWithTitle:(id)arg1 iconName:(id)arg2;

@end
