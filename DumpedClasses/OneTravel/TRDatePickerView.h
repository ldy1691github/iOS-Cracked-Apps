//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEPopupDatePickerView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString;

@interface TRDatePickerView : ONEPopupDatePickerView <UIPickerViewDataSource, UIPickerViewDelegate, UIGestureRecognizerDelegate>
{
}

- (void)showInView:(id)arg1 withStartDate:(id)arg2 initialDate:(id)arg3 hasPresent:(_Bool)arg4 reservationDays:(unsigned long long)arg5 selectDate:(CDUnknownBlockType)arg6 cancel:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

