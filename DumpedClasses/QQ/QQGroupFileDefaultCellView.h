//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupFileCellView.h"

@class QQProgressBar, UIImageView, UILabel;

@interface QQGroupFileDefaultCellView : QQGroupFileCellView
{
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_sizeLabel;
    UILabel *_statusLabel;
    QQProgressBar *_progressView;
}

- (void).cxx_destruct;
- (void)refreshProgress;
- (void)refreshStatus;
- (void)preparePaopao:(id)arg1;
- (void)willDrawBubble;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

