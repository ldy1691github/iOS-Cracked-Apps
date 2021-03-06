//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMComponentViewProtocol.h"

@class FMCellComponent, NSIndexPath, NSString;

@protocol FMComponentCellProtocol <FMComponentViewProtocol>

@optional
+ (NSString *)IdentifierForComponent:(FMCellComponent *)arg1;
- (void)didEndDisplayingForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)willDisplayForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)didSelectCell;
@end

