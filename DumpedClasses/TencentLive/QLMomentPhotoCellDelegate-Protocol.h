//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QLMomentPhoto, QLMomentPhotoCell;

@protocol QLMomentPhotoCellDelegate <NSObject>

@optional
- (void)photoCellDidPressAddButtonAction:(QLMomentPhotoCell *)arg1;
- (void)photoCell:(QLMomentPhotoCell *)arg1 didUpdatePhoto:(QLMomentPhoto *)arg2 index:(unsigned long long)arg3;
- (NSArray *)photoCell:(QLMomentPhotoCell *)arg1 overallPhoto:(QLMomentPhoto *)arg2;
- (_Bool)photoCell:(QLMomentPhotoCell *)arg1 didDeletePhoto:(QLMomentPhoto *)arg2;
- (void)photoCell:(QLMomentPhotoCell *)arg1 didSelectPhoto:(QLMomentPhoto *)arg2;
@end
