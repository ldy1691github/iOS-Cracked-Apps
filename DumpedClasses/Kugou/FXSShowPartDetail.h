//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSShowPartDetail : FXBaseJSONModel
{
    int _status;
    int _roomId;
    NSString *_title;
    NSString *_guest;
    long long _showId;
}

@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) long long showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *guest; // @synthesize guest=_guest;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

