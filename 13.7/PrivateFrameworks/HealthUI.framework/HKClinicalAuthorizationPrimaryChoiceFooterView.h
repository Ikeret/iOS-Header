//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView
{
    UIButton *_primaryButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateMetricsWithTraitCollection:(id)arg1;
- (double)_bottomMarginForTraitCollection:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

