//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCalloutLayer : _MKResizingLayer
{
    struct CGImage *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    long long _arrowPosition;
    double _arrowOffset;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
- (void)layoutSublayers;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (struct CGImage *)_newContentImage;
- (struct CGSize)_contentSize;

@end

