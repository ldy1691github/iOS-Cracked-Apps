//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGCellElementController.h"

@interface SGCellElementControllerSection : SGCellElementController
{
    int _alignment;
}

+ (id)identifier;
+ (id)cellClassName;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
- (void)formatCell:(id)arg1;
- (void)setElementValue:(id)arg1 forKey:(id)arg2;
- (double)_calculateTextHeight;
- (id)init;

@end

