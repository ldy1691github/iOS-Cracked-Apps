//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBaseModel.h"

#import "MCVGroupSubGroupModelProtocol.h"
#import "TBIMGroupServiceDelegate.h"

@class NSString;

@interface MCVGroupSubGroupModel : MCBaseModel <TBIMGroupServiceDelegate, MCVGroupSubGroupModelProtocol>
{
    id <MCVGroupSubGroupModelDelegate> _delegate;
    id <TBIMGroupServiceAdapter> _groupChatService;
}

@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupChatService; // @synthesize groupChatService=_groupChatService;
@property(retain, nonatomic) id <MCVGroupSubGroupModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)groupInfoDeleted:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (id)getGroupsWithGroupIDs:(id)arg1;
- (id)getVGroupInfoByVGroupID:(id)arg1;
- (id)initWithBizKey:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

