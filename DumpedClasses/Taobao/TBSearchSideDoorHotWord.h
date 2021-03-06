//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBSearchSideDoorClickable.h"

@class NSString;

@interface TBSearchSideDoorHotWord : TBJSONModel <TBSearchSideDoorClickable>
{
    NSString *_showtext;
    NSString *_searchtext;
    NSString *_subtype;
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(retain, nonatomic) NSString *searchtext; // @synthesize searchtext=_searchtext;
@property(retain, nonatomic) NSString *showtext; // @synthesize showtext=_showtext;
- (void).cxx_destruct;
- (id)subType;
- (id)wordForSearch;
- (id)titleForShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

