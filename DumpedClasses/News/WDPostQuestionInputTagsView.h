//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITextFieldDelegate.h"

@class NSString, SSThemedImageView, SSThemedLabel, SSThemedTextField, WDModifyTagViewModel, WDPostQuestionSuggestionTagsView, WDPostQuestionTagsCollectionView, WDPostQuestionViewModel;

@interface WDPostQuestionInputTagsView : SSThemedView <UITextFieldDelegate>
{
    WDPostQuestionViewModel *_viewModel;
    WDModifyTagViewModel *_tagViewModel;
    SSThemedTextField *_textField;
    SSThemedImageView *_closeImage;
    SSThemedView *_bottomLine;
    WDPostQuestionSuggestionTagsView *_suggestionView;
    WDPostQuestionTagsCollectionView *_collectionView;
    SSThemedView *_emptyHintView;
    SSThemedImageView *_promptImageView;
    SSThemedLabel *_emptyLabel;
}

@property(retain, nonatomic) SSThemedLabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) SSThemedImageView *promptImageView; // @synthesize promptImageView=_promptImageView;
@property(retain, nonatomic) SSThemedView *emptyHintView; // @synthesize emptyHintView=_emptyHintView;
@property(retain, nonatomic) WDPostQuestionTagsCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WDPostQuestionSuggestionTagsView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedImageView *closeImage; // @synthesize closeImage=_closeImage;
@property(retain, nonatomic) SSThemedTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) WDModifyTagViewModel *tagViewModel; // @synthesize tagViewModel=_tagViewModel;
@property(retain, nonatomic) WDPostQuestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textChangedExt;
- (struct CGRect)frameForEmptyLabel;
- (struct CGRect)frameForPromptImageView;
- (struct CGRect)frameForEmptyHintView;
- (struct CGRect)frameForCollectionView;
- (struct CGRect)frameForSuggestionView;
- (struct CGRect)frameForBottomLine;
- (struct CGRect)frameForCloseImage;
- (struct CGRect)frameForTextField;
- (void)refrshFrame;
- (void)closeButtonTaped;
- (void)hidekeyboard;
- (void)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1 tagViewModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
