//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString;

@interface SelectImageController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    unsigned long long _selectSource;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)selectImageByAlbum:(CDUnknownBlockType)arg1;
- (void)selectImageByCameraWithBlock:(CDUnknownBlockType)arg1;
- (void)selectImageControllerWithSource:(unsigned long long)arg1 WithTitle:(id)arg2 WithBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
