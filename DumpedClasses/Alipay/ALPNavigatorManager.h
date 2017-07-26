//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class ALPNavigator, NSString;

@interface ALPNavigatorManager : NSObject <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    ALPNavigator *_navigator;
    ALPNavigator *_topNavigator;
}

+ (_Bool)containsCJK:(id)arg1;
+ (void)tryOpen:(id)arg1;
+ (void)openH5Url:(id)arg1;
+ (void)openNativeUrl:(id)arg1;
+ (void)openUrl:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) ALPNavigator *topNavigator; // @synthesize topNavigator=_topNavigator;
- (void).cxx_destruct;
- (void)registUrl4ViewController;
@property(readonly, nonatomic) ALPNavigator *navigator; // @synthesize navigator=_navigator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
