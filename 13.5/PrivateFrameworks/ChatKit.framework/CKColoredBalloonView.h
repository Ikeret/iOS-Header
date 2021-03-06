//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView, UIView;
@protocol CKGradientReferenceView;

@interface CKColoredBalloonView : CKBalloonView
{
    BOOL _color;
    _Bool _wantsGradient;
    CKBalloonImageView *_mask;
    CKBalloonImageView *_effectViewMask;
    CKGradientView *_gradientView;
    struct CGRect _gradientOverrideFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) CKBalloonImageView *effectViewMask; // @synthesize effectViewMask=_effectViewMask;
@property(retain, nonatomic) CKBalloonImageView *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGRect gradientOverrideFrame; // @synthesize gradientOverrideFrame=_gradientOverrideFrame;
@property(nonatomic) _Bool wantsGradient; // @synthesize wantsGradient=_wantsGradient;
@property(nonatomic) BOOL color; // @synthesize color=_color;
- (void)setEffectViewMaskImage:(id)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (void)updateWantsGradient;
@property(readonly, nonatomic) _Bool hasBackground;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
- (id)overlayColor;
- (_Bool)needsGroupOpacity;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (void)setHasTail:(_Bool)arg1;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

@end

