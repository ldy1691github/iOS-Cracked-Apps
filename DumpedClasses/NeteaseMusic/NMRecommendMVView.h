//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMDiscoveryContentViewProtocol.h"

@class NMDiscoveryContent, NMMV, NMPlayCountView, NSString, UIButton, UIImageView, UILabel;

@interface NMRecommendMVView : UIView <NMDiscoveryContentViewProtocol>
{
    UIButton *_imageView;
    UIImageView *_imageCoverView;
    NMPlayCountView *_playCountView;
    UILabel *_mvTitleLabel;
    UILabel *_mvAuthorLabel;
    NMDiscoveryContent *_content;
    id <NMRecommendMVViewDelegate> _delegate;
    NMMV *_mv;
}

+ (struct CGSize)coverSize;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(nonatomic) __weak id <NMRecommendMVViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMDiscoveryContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)imageButtonTouched:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
