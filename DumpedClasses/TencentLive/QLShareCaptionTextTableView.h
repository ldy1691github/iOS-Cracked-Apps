//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLShareCaptionTextTableViewCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView;

@interface QLShareCaptionTextTableView : UIView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, QLShareCaptionTextTableViewCellDelegate>
{
    NSArray *_captionsArray;
    NSArray *_selectedCaptionsArray;
    id <QLShareCaptionTextTableViewDelegate> _delegate;
    UITableView *_tableView;
    unsigned long long _toggleNumber;
    NSMutableArray *_toggledCaptionsArray;
}

@property(retain, nonatomic) NSMutableArray *toggledCaptionsArray; // @synthesize toggledCaptionsArray=_toggledCaptionsArray;
@property(nonatomic) unsigned long long toggleNumber; // @synthesize toggleNumber=_toggleNumber;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <QLShareCaptionTextTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *selectedCaptionsArray; // @synthesize selectedCaptionsArray=_selectedCaptionsArray;
@property(retain, nonatomic) NSArray *captionsArray; // @synthesize captionsArray=_captionsArray;
- (void).cxx_destruct;
- (void)didClickCorrectButton:(id)arg1;
- (void)updateSelectedArray:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showTableViewWithIndex:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetTableViewMask;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

