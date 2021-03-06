//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTVoIPInquireSender, NSString;

@interface CTCallRepeater : NSObject
{
    NSString *mutexTokenString_;
    CTVoIPInquireSender *_voipInquireSender;
}

@property(retain, nonatomic) CTVoIPInquireSender *voipInquireSender; // @synthesize voipInquireSender=_voipInquireSender;
- (void).cxx_destruct;
- (void)cancelSenderWithViewController:(id)arg1;
- (id)getVoIPInfoWithSpecialUserID:(id)arg1;
- (id)JSONDictionaryWithStatistics:(id)arg1;
- (void)getVoIPDecisionResultWithViewController:(id)arg1 qualityCriterion:(id)arg2 qualityStatistics:(id)arg3 expectedDecisionStrategy:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getVoIPInfoWithWithViewController:(id)arg1 viewModel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)goToInsideWithModel:(id)arg1 viewController:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failedHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

