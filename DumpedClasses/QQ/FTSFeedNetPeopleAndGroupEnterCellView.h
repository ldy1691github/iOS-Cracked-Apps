//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellView.h"

@class CALayer, UIImageView, UILabel;

@interface FTSFeedNetPeopleAndGroupEnterCellView : FTSBaseCellView
{
    UIImageView *_feedNetSearchEnterImgv;
    UILabel *_netSearchSummary;
    UIImageView *_feedMoreImgv;
    CALayer *_topLineLayer;
}

- (void).cxx_destruct;
- (id)summaryAttributedText:(id)arg1;
- (void)loadCellWithFTSFeedInfo:(id)arg1;
- (void)setShowTopLine:(_Bool)arg1;
- (void)initCellUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

