//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTTrainTableViewRowModel, CTTrainTableViewSectionModel;

@interface CTTrainOrderDetailHeaderCacheBean : CTCacheBean
{
    CTTrainTableViewSectionModel *_sectionModel;
    CTTrainTableViewRowModel *_preHoldRowModel;
    CTTrainTableViewRowModel *_refundRowModel;
    CTTrainTableViewRowModel *_tipsRowModel;
    CTTrainTableViewRowModel *_jianLowRowModel;
}

@property(retain, nonatomic) CTTrainTableViewRowModel *jianLowRowModel; // @synthesize jianLowRowModel=_jianLowRowModel;
@property(retain, nonatomic) CTTrainTableViewRowModel *tipsRowModel; // @synthesize tipsRowModel=_tipsRowModel;
@property(retain, nonatomic) CTTrainTableViewRowModel *refundRowModel; // @synthesize refundRowModel=_refundRowModel;
@property(retain, nonatomic) CTTrainTableViewRowModel *preHoldRowModel; // @synthesize preHoldRowModel=_preHoldRowModel;
@property(retain, nonatomic) CTTrainTableViewSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
- (void).cxx_destruct;
- (id)init;

@end
