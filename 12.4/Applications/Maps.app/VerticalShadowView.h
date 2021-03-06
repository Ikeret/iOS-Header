//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface VerticalShadowView : UIView
{
    _Bool _isDimmed;
    CAGradientLayer *_gradientLayer;
}

@property(nonatomic) _Bool isDimmed; // @synthesize isDimmed=_isDimmed;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void).cxx_destruct;
- (void)updateGradientColorsForTheme;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

