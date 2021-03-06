//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLVideoSeriesBaseTableViewCell.h"

@class NSArray, NSMutableArray, UIImageView;

@interface QLDownloadPanelTVCell : QLVideoSeriesBaseTableViewCell
{
    NSMutableArray *episodeButtons;
    UIImageView *_separator;
    _Bool _bottomPadding;
    NSArray *_episodesInfo;
    id <QLDownloadPanelTVEpisodeDelegate> _delegate;
    id _item;
}

+ (double)bottomPaddingHeight;
+ (double)cellHeight;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) _Bool bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) __weak id <QLDownloadPanelTVEpisodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *episodesInfo; // @synthesize episodesInfo=_episodesInfo;
- (void).cxx_destruct;
- (id)getButtonForPoint:(struct CGPoint)arg1;
- (double)getRightPoint;
- (double)getLeftPoint;
- (void)updateAllEpisodeButtonState;
- (void)buttonTapped:(id)arg1;
- (double)getPaddingH;
- (double)paddingViewX;
- (long long)numberOfColumnsInPlayerViewStyle;
- (void)deselectEpisodes;
- (_Bool)selectForEpisodeIndex:(long long)arg1 withTrailer:(_Bool)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (unsigned long long)countOfTableViewCell;
- (void)updateSepatorLineView:(id)arg1;
- (void)dealloc;
- (void)addSeparatorLineWithCunt:(unsigned long long)arg1;
- (void)updateCellSepeLineImage;
- (id)initWithDelegata:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

