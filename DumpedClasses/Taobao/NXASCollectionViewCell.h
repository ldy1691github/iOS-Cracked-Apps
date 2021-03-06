//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NXASCellNode, UICollectionViewLayoutAttributes;

@interface NXASCollectionViewCell : UICollectionViewCell
{
    NXASCellNode *_node;
    UICollectionViewLayoutAttributes *_layoutAttributes;
}

@property(retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) __weak NXASCellNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end

