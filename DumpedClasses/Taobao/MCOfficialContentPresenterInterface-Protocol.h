//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBasePresenterProtocol.h"

@class MCChatPageConfig, NSMutableArray, NSString, UIView<MCChatPageDisplayViewProtocol>, UIView<MCOfficialHeaderViewProtocol>;

@protocol MCOfficialContentPresenterInterface <MCBasePresenterProtocol>
@property(retain, nonatomic) MCChatPageConfig *config;
@property(nonatomic) _Bool isViewDidLoad;
@property(nonatomic) __weak id <MCInputPresenterProtocol> inputPresenter;
@property(nonatomic) __weak id <MCOfficialContentEmptyViewProtocol> emptyViewDelegate;
@property(retain, nonatomic) UIView<MCOfficialHeaderViewProtocol> *headerView;
@property(retain, nonatomic) id <MCOfficialContentModelProtocol> officialContentModel;
@property(nonatomic) _Bool isHistoryMessage;
@property(retain, nonatomic) NSMutableArray *msgVOList;
@property(retain, nonatomic) UIView<MCChatPageDisplayViewProtocol> *officialContentView;
@property(nonatomic) unsigned long long sortRules;
@property(nonatomic) __weak id <MCOfficialContentPresenterHeaderViewDelegate> headerViewDelegate;
@property(retain, nonatomic) NSString *officialID;
- (void)reloadMessageFromFistMessage;
@end

