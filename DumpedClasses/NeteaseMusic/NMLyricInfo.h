//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMLyricInfo : NSObject
{
    _Bool _isPureMusic;
    _Bool _uncollected;
    _Bool _needTranslation;
    _Bool _needSaveUpdate;
    _Bool _isUserCloudLyric;
    NSString *_songId;
    long long _lyricVersion;
    NSString *_lyricContent;
    NSString *_translateContent;
    long long _translateVersion;
    NSString *_userId;
    NSString *_lyricUser;
    NSString *_transUser;
}

@property(retain, nonatomic) NSString *transUser; // @synthesize transUser=_transUser;
@property(retain, nonatomic) NSString *lyricUser; // @synthesize lyricUser=_lyricUser;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool isUserCloudLyric; // @synthesize isUserCloudLyric=_isUserCloudLyric;
@property(nonatomic) _Bool needSaveUpdate; // @synthesize needSaveUpdate=_needSaveUpdate;
@property(nonatomic) long long translateVersion; // @synthesize translateVersion=_translateVersion;
@property(retain, nonatomic) NSString *translateContent; // @synthesize translateContent=_translateContent;
@property(retain, nonatomic) NSString *lyricContent; // @synthesize lyricContent=_lyricContent;
@property(nonatomic) long long lyricVersion; // @synthesize lyricVersion=_lyricVersion;
@property(nonatomic) _Bool needTranslation; // @synthesize needTranslation=_needTranslation;
@property(nonatomic) _Bool uncollected; // @synthesize uncollected=_uncollected;
@property(nonatomic) _Bool isPureMusic; // @synthesize isPureMusic=_isPureMusic;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (id)initCloudLyricWithSongId:(id)arg1 dictionary:(id)arg2;
- (id)initWithSongId:(id)arg1 dictionary:(id)arg2;
- (void)fillWithSong:(id)arg1;
- (id)initWithSong:(id)arg1;
- (id)initWithSongId:(id)arg1;
- (id)proxyForJson;

@end
