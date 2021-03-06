//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBaseModel.h"

@class TGDetailAuthorModel, TGDetailContentModel, TGDetailContextModel;

@interface TGDetailPageModel : TGBaseModel
{
    TGDetailAuthorModel *_author;
    TGDetailContentModel *_content;
    TGDetailContextModel *_context;
}

@property(retain, nonatomic) TGDetailContextModel *context; // @synthesize context=_context;
@property(retain, nonatomic) TGDetailContentModel *content; // @synthesize content=_content;
@property(retain, nonatomic) TGDetailAuthorModel *author; // @synthesize author=_author;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

