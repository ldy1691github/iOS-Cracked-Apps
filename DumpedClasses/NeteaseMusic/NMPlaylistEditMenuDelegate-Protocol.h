//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMPlaylistEditMenu;

@protocol NMPlaylistEditMenuDelegate <NSObject>
- (void)playlistEditMenu:(NMPlaylistEditMenu *)arg1 changeOrder:(id)arg2;
- (void)playlistEditMenu:(NMPlaylistEditMenu *)arg1 informPlaylist:(id)arg2;
- (void)playlistEditMenu:(NMPlaylistEditMenu *)arg1 publicPlaylistInfo:(id)arg2;
- (void)playlistEditMenu:(NMPlaylistEditMenu *)arg1 clearDownload:(id)arg2;
- (void)playlistEditMenu:(NMPlaylistEditMenu *)arg1 editPlaylistInfo:(id)arg2;
@end

