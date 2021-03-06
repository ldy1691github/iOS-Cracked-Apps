//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUDialogDelegate.h"

@class AUNoticeDialog, NSArray, NSString, SPGroupPayeeDetailViewModel, TRANSFERPRODBatchDetailInfoQueryResult;

@interface SPBatchDetailViewModel : NSObject <AUDialogDelegate>
{
    SPGroupPayeeDetailViewModel *_payeeDetailVM;
    AUNoticeDialog *_alertView;
    NSArray *_batchList;
    TRANSFERPRODBatchDetailInfoQueryResult *_batchRet;
}

@property(retain, nonatomic) TRANSFERPRODBatchDetailInfoQueryResult *batchRet; // @synthesize batchRet=_batchRet;
@property(retain, nonatomic) NSArray *batchList; // @synthesize batchList=_batchList;
@property(retain, nonatomic) AUNoticeDialog *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) SPGroupPayeeDetailViewModel *payeeDetailVM; // @synthesize payeeDetailVM=_payeeDetailVM;
- (void).cxx_destruct;
- (void)reset;
- (void)finish;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dispatchBiz;
- (void)queryBatchDetail;
- (id)contaienrView;
- (id)getPayeeDetailViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

