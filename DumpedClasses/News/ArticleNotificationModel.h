//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSBaseModel.h"

@class ArticleMomentGroupModel, NSString, PGCAccount, SSUserModel;

@interface ArticleNotificationModel : SSBaseModel
{
    double _cursor;
    unsigned long long _type;
    double _createTime;
    SSUserModel *_user;
    NSString *_content;
    ArticleMomentGroupModel *_group;
    PGCAccount *_pgcAccount;
    NSString *_openURL;
    NSString *_extraOpenURL;
}

+ (id)notificationsWithArray:(id)arg1;
@property(copy, nonatomic) NSString *extraOpenURL; // @synthesize extraOpenURL=_extraOpenURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) PGCAccount *pgcAccount; // @synthesize pgcAccount=_pgcAccount;
@property(retain, nonatomic) ArticleMomentGroupModel *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) SSUserModel *user; // @synthesize user=_user;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end
