//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class KGThemeButton, KGThemeImageView;

@interface KQGChatMemberListFooterCollectionReusableView : UICollectionReusableView
{
    id <KQGChatMemberListFooterCollectionReusableViewDelegate> _delegate;
    KGThemeButton *_moreMemberBtn;
    KGThemeImageView *_arrowheadImageView;
}

+ (id)identifier;
@property(retain, nonatomic) KGThemeImageView *arrowheadImageView; // @synthesize arrowheadImageView=_arrowheadImageView;
@property(retain, nonatomic) KGThemeButton *moreMemberBtn; // @synthesize moreMemberBtn=_moreMemberBtn;
@property(nonatomic) __weak id <KQGChatMemberListFooterCollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreMemberBtnClicked:(id)arg1;
- (void)createView;

@end
