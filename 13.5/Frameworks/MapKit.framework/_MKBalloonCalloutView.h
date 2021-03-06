//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKCalloutView.h>

@class CALayer, CAShapeLayer, UIColor, UIImage, UIImageView, UIView;

@interface _MKBalloonCalloutView : MKCalloutView
{
    UIView *_shadowView;
    UIView *_containerView;
    UIColor *_balloonTintColor;
    UIColor *_strokeColor;
    UIColor *_innerStrokeColor;
    CAShapeLayer *_balloonShape;
    CALayer *_balloonInnerStrokeLayer;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    struct CGSize _intrinsicSize;
    struct CGSize _shadowSize;
    _Bool _originatesAsSmallBalloon;
    double _croppedImageScale;
    UIImageView *_contentViewMaskView;
    UIView *_contentView;
    long long _style;
    UIImage *_image;
    double _smallBalloonScale;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double smallBalloonScale; // @synthesize smallBalloonScale=_smallBalloonScale;
@property(nonatomic) _Bool originatesAsSmallBalloon; // @synthesize originatesAsSmallBalloon=_originatesAsSmallBalloon;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) UIColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)hideCalloutAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showCalloutAnimated:(_Bool)arg1;
- (void)_updateCroppedImage;
- (void)didMoveToWindow;
- (id)_generateInnerStrokeImage;
- (void)layoutSubviews;
- (double)_innerDiameter;
- (struct CGRect)_centerFrame;
- (struct CGSize)intrinsicContentSize;
- (void)_handleTapOnCallout:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1;
- (id)initWithAnnotationView:(id)arg1;

@end

