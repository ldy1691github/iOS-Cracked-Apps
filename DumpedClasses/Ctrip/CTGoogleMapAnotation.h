//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTGoogleMapAnotation : NSObject
{
    _Bool _isCityCenter;
    _Bool _isScaleLatLong;
    double _latitude;
    double _longitude;
    NSString *_title;
    NSString *_subTitle;
    NSString *_iconPath;
    NSString *_highlightIconPath;
    NSString *_customMarker;
    NSString *_contentJSString;
    NSString *_contentJSStringForMutiInfoWindowStyle;
    struct CGSize _iconSize;
    struct CGSize _highlightIconSize;
}

+ (id)cth_annotationWithTypeName:(id)arg1;
+ (id)cth_createAnnotationBaseInfoGroup;
+ (id)cth_createAnnotationBaseInfoWithIconName:(id)arg1;
+ (struct CGSize)cth_fetchIconSizeWithPath:(id)arg1;
@property(copy, nonatomic) NSString *contentJSStringForMutiInfoWindowStyle; // @synthesize contentJSStringForMutiInfoWindowStyle=_contentJSStringForMutiInfoWindowStyle;
@property(copy, nonatomic) NSString *contentJSString; // @synthesize contentJSString=_contentJSString;
@property(nonatomic) _Bool isScaleLatLong; // @synthesize isScaleLatLong=_isScaleLatLong;
@property(nonatomic) _Bool isCityCenter; // @synthesize isCityCenter=_isCityCenter;
@property(copy, nonatomic) NSString *customMarker; // @synthesize customMarker=_customMarker;
@property(nonatomic) struct CGSize highlightIconSize; // @synthesize highlightIconSize=_highlightIconSize;
@property(copy, nonatomic) NSString *highlightIconPath; // @synthesize highlightIconPath=_highlightIconPath;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier;
- (void)updateSelectedIconPath:(id)arg1;

@end
