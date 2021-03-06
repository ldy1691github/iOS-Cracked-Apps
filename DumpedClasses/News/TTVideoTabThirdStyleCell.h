//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellBase.h"

#import "ExploreMovieViewCellProtocol.h"

@class NSString, TTVideoTabThirdStyleCellView;

@interface TTVideoTabThirdStyleCell : ExploreCellBase <ExploreMovieViewCellProtocol>
{
    TTVideoTabThirdStyleCellView *_videoCellView;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
+ (Class)cellViewClass;
@property(retain, nonatomic) TTVideoTabThirdStyleCellView *videoCellView; // @synthesize videoCellView=_videoCellView;
- (void).cxx_destruct;
- (struct CGRect)movieViewFrameRect;
- (struct CGRect)logoViewFrame;
- (void)attachMovieView:(id)arg1;
- (id)detachMovieView;
- (id)movieView;
- (_Bool)isMovieFullScreen;
- (_Bool)isPlayingMovie;
- (_Bool)hasMovieView;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)didEndDisplaying;
- (id)createCellView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

