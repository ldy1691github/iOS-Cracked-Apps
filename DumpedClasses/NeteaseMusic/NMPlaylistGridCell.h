//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseGridCell.h"

@class NMPlayCountView, UIImage, UIImageView, UILabel;

@interface NMPlaylistGridCell : NMBaseGridCell
{
    UIImageView *_creatorIconImageView;
    UILabel *_creatorLabel;
    UIImageView *_vMarkImageView;
    NMPlayCountView *_playCountView;
    UIImage *_darenMark;
    UIImage *_vMark;
    UIImage *_musicianMark;
}

+ (struct CGSize)size;
@property(readonly, nonatomic) UILabel *creatorLabel; // @synthesize creatorLabel=_creatorLabel;
@property(readonly, nonatomic) UIImageView *vMarkImageView; // @synthesize vMarkImageView=_vMarkImageView;
@property(readonly, nonatomic) UIImageView *creatorIconImageView; // @synthesize creatorIconImageView=_creatorIconImageView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setContent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

