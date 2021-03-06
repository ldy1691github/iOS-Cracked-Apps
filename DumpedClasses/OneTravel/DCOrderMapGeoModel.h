//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCNoteInfoModel<Optional>, NSString<Optional>;

@interface DCOrderMapGeoModel : JSONModel
{
    NSString<Optional> *_lat;
    NSString<Optional> *_lng;
    NSString<Optional> *_text;
    NSString<Optional> *_text_color;
    NSString<Optional> *_level;
    NSString<Optional> *_collision_level;
    NSString<Optional> *_type;
    NSString<Optional> *_point_type;
    NSString<Optional> *_line_type;
    NSString<Optional> *_eta;
    NSString<Optional> *_image_url;
    DCNoteInfoModel<Optional> *_info_text;
}

@property(copy, nonatomic) DCNoteInfoModel<Optional> *info_text; // @synthesize info_text=_info_text;
@property(copy, nonatomic) NSString<Optional> *image_url; // @synthesize image_url=_image_url;
@property(copy, nonatomic) NSString<Optional> *eta; // @synthesize eta=_eta;
@property(copy, nonatomic) NSString<Optional> *line_type; // @synthesize line_type=_line_type;
@property(copy, nonatomic) NSString<Optional> *point_type; // @synthesize point_type=_point_type;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *collision_level; // @synthesize collision_level=_collision_level;
@property(copy, nonatomic) NSString<Optional> *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString<Optional> *text_color; // @synthesize text_color=_text_color;
@property(copy, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString<Optional> *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString<Optional> *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end

