//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOFeedTilesView.h"

@class TBONodeView, TBOTopicDetailTilesPicItem;

@interface TBOFeedTilesPicItemView : TBOFeedTilesView
{
    TBONodeView *_itemView;
    TBOTopicDetailTilesPicItem *_picItem;
}

@property(retain, nonatomic) TBOTopicDetailTilesPicItem *picItem; // @synthesize picItem=_picItem;
- (void).cxx_destruct;
- (struct CGSize)getViewSize;
- (void)layoutSubviews;
- (void)refreshDataForView:(id)arg1;

@end
