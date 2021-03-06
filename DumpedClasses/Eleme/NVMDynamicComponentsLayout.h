//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NVMDynamicComponentsJSONArrayStore;

@interface NVMDynamicComponentsLayout : UICollectionViewLayout
{
    NVMDynamicComponentsJSONArrayStore *_componentsStore;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NVMDynamicComponentsJSONArrayStore *componentsStore; // @synthesize componentsStore=_componentsStore;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithComponentsStore:(id)arg1 width:(double)arg2;

@end

