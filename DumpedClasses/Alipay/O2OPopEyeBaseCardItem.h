//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistListItem.h"

@interface O2OPopEyeBaseCardItem : O2OMistListItem
{
    _Bool _canAnimation;
    _Bool _isImageCardShowing;
    _Bool _hotScoreAnimitable;
    _Bool _hasLightShowCard;
    unsigned long long _type;
    unsigned long long _lightShowState;
    unsigned long long _normalCardState;
    long long _infoCardCount;
    long long _showingIndex;
    struct CGSize _size;
}

@property(nonatomic) _Bool hasLightShowCard; // @synthesize hasLightShowCard=_hasLightShowCard;
@property(nonatomic) _Bool hotScoreAnimitable; // @synthesize hotScoreAnimitable=_hotScoreAnimitable;
@property(nonatomic) _Bool isImageCardShowing; // @synthesize isImageCardShowing=_isImageCardShowing;
@property(nonatomic) long long showingIndex; // @synthesize showingIndex=_showingIndex;
@property(nonatomic) long long infoCardCount; // @synthesize infoCardCount=_infoCardCount;
@property(nonatomic) unsigned long long normalCardState; // @synthesize normalCardState=_normalCardState;
@property(nonatomic) unsigned long long lightShowState; // @synthesize lightShowState=_lightShowState;
@property(nonatomic) _Bool canAnimation; // @synthesize canAnimation=_canAnimation;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (long long)randomShowingIndex;
- (id)init;

@end
