//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeImageView, KGThemeLabel;

@interface KTVEditUserInfoSelectCell : KFCommedTableViewCell
{
    KGThemeImageView *_checkImage;
    KGThemeImageView *_headImageView;
    KGThemeLabel *_txLabel;
}

@property(retain, nonatomic) KGThemeLabel *txLabel; // @synthesize txLabel=_txLabel;
@property(retain, nonatomic) KGThemeImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) KGThemeImageView *checkImage; // @synthesize checkImage=_checkImage;
- (void).cxx_destruct;
- (void)updateUILayoutWithSelected:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

