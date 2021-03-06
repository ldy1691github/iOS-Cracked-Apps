//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface FXChartsListVLL : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isLivingStateRequestError;
    _Bool _isRequestingLivingStateData;
    UITableView *_view;
    long long _chartsType;
    unsigned long long _periodType;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _touchBlock;
    NSArray *_listDatas;
    NSArray *_listDatasForLivingState;
}

@property(retain, nonatomic) NSArray *listDatasForLivingState; // @synthesize listDatasForLivingState=_listDatasForLivingState;
@property _Bool isRequestingLivingStateData; // @synthesize isRequestingLivingStateData=_isRequestingLivingStateData;
@property(retain, nonatomic) NSArray *listDatas; // @synthesize listDatas=_listDatas;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool isLivingStateRequestError; // @synthesize isLivingStateRequestError=_isLivingStateRequestError;
@property(nonatomic) unsigned long long periodType; // @synthesize periodType=_periodType;
@property(nonatomic) long long chartsType; // @synthesize chartsType=_chartsType;
@property(retain, nonatomic) UITableView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshView;
- (void)getArtLiveLivingState;
- (void)configTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

