//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSuggestionSearcher.h"

@class GMSPlacesClient;

@interface MMGoogleSuggestionSearcher : MMSuggestionSearcher
{
    GMSPlacesClient *_searcher;
}

@property(retain, nonatomic) GMSPlacesClient *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (void)notifySuggestionSearchWithOption:(id)arg1 result:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)suggestionSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
