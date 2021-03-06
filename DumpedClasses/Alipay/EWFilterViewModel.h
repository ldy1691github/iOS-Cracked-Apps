//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EWFilterViewModel : NSObject
{
    NSString *_searchText;
    NSMutableArray *_menuItemList;
    NSMutableArray *_selectedSubMenuItemList;
    NSMutableDictionary *_selectedFilterArgs;
}

@property(retain, nonatomic) NSMutableDictionary *selectedFilterArgs; // @synthesize selectedFilterArgs=_selectedFilterArgs;
@property(retain, nonatomic) NSMutableArray *selectedSubMenuItemList; // @synthesize selectedSubMenuItemList=_selectedSubMenuItemList;
@property(retain, nonatomic) NSMutableArray *menuItemList; // @synthesize menuItemList=_menuItemList;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)clearSelectedInfo;
- (void)matchSelectedMenu;
- (void)handleTabMenuModel:(id)arg1;
- (id)init;

@end

