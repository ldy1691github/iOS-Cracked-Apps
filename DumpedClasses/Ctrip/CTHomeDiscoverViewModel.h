//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTDiscoverRouteModel, CTHomeGuideDiscoverBottomView, CTHomeGuideDiscoverView;

@interface CTHomeDiscoverViewModel : NSObject
{
    CTHomeGuideDiscoverView *_view;
    CTHomeGuideDiscoverBottomView *_bottomView;
    CTDiscoverRouteModel *_model;
}

@property(nonatomic) __weak CTDiscoverRouteModel *model; // @synthesize model=_model;
@property(nonatomic) __weak CTHomeGuideDiscoverBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak CTHomeGuideDiscoverView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)fetchDataWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isXingQian;
- (void)update;

@end
