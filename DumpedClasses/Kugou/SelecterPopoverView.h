//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UIColor, UITableView;

@interface SelecterPopoverView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _shouldShowArrow;
    UIColor *_borderColor;
    CDUnknownBlockType _selectRowAtIndex;
    CDUnknownBlockType _dismissBlock;
    long long _defaultSelectedRow;
    UITableView *_tableView;
    NSArray *_titleArray;
    NSArray *_imageArray;
    UIButton *_handerView;
    struct CGPoint _showPoint;
}

@property(retain, nonatomic) UIButton *handerView; // @synthesize handerView=_handerView;
@property(nonatomic) struct CGPoint showPoint; // @synthesize showPoint=_showPoint;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long defaultSelectedRow; // @synthesize defaultSelectedRow=_defaultSelectedRow;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool shouldShowArrow; // @synthesize shouldShowArrow=_shouldShowArrow;
@property(copy, nonatomic) CDUnknownBlockType selectRowAtIndex; // @synthesize selectRowAtIndex=_selectRowAtIndex;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismiss:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (struct CGRect)getViewFrame;
- (void)changeTheme:(id)arg1;
- (void)registerNoti;
- (id)initWithPoint:(struct CGPoint)arg1 titles:(id)arg2 images:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
