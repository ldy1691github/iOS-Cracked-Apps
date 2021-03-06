//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface QQVIPFunctionComicTabBarView : UIView
{
    unsigned long long _selectedIndex;
    id <QQVIPFunctionComicTabBarViewDelegate> _delegate;
    NSArray *_items;
    UIView *_topLine;
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <QQVIPFunctionComicTabBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)dealRedPointLogicIfNeedAtInedx:(unsigned long long)arg1;
- (void)reportRedPointDataIfNeed;
- (void)layoutItems;
- (void)onClickItem:(id)arg1;
- (void)addActionToItems;
- (void)addItemsAndOberservers;
- (void)addIndexToItems;
- (void)removeItemsAndOberservers;
- (void)selectItemAtIndex:(long long)arg1;
- (void)dealloc;

@end

