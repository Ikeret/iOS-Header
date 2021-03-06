//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitDirectionsCell.h"

#import "TransitDirectionsCell-Protocol.h"

@class MKArtworkImageView, NSLayoutConstraint, NSString, TransitDirectionsColoredLine, TransitDirectionsListItem, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface TransitDirectionsIconCell : TransitDirectionsCell <TransitDirectionsCell>
{
    MKArtworkImageView *_iconImageView;
    TransitDirectionsColoredLine *_topLink;
    TransitDirectionsColoredLine *_bottomLink;
    UIView *_iconLinksGroupingView;
    NSLayoutConstraint *_topLinkToImageViewCenterConstraint;
    NSLayoutConstraint *_topLinkToContentViewTopConstraint;
    NSLayoutConstraint *_bottomLinkToImageViewCenterConstraint;
    NSLayoutConstraint *_bottomLinkToContentViewBottomConstraint;
}

+ (struct CGRect)defaultIconImageViewFrameForImage:(id)arg1 superviewWidth:(double)arg2 withLeadingInset:(double)arg3 isRTL:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) MKArtworkImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) long long navigationState;
- (unsigned long long)_preferredStyle;
- (void)_updateForParentExpansionOrCollapse;
- (void)_updateArtwork;
- (void)_configureArtwork;
- (void)configureWithItem:(id)arg1;
@property(retain, nonatomic) UIColor *bottomLinkColor;
@property(retain, nonatomic) UIColor *topLinkColor;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_updateLinkColors;
- (id)_lineColorViewWithStyle:(unsigned long long)arg1;
- (double)_bottomLinkExtensionHeight;
- (double)_topLinkExtensionHeight;
- (double)_calculatedSeparatorHeight;
- (double)_distanceToImageCenterForImageSource:(id)arg1;
- (id)_imageViewPositionConstraints;
- (id)_initialConstraints;
- (id)_mkView;
- (id)_createImageView;
- (void)_createSubviews;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double leadingInstructionMargin;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *trailingView;
@property(readonly, nonatomic) TransitDirectionsListItem *transitListItem;
@property(nonatomic) _Bool useLeadingInstructionMarginAsLeadingSeparatorInset;

@end

