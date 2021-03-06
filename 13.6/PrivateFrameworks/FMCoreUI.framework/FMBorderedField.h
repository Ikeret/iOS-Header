//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMHorizontalRule, UIColor;

@interface FMBorderedField : UIView
{
    _Bool _isConfigured;
    UIColor *_borderColor;
    FMHorizontalRule *_topRule;
    FMHorizontalRule *_bottomRule;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) FMHorizontalRule *bottomRule; // @synthesize bottomRule=_bottomRule;
@property(retain, nonatomic) FMHorizontalRule *topRule; // @synthesize topRule=_topRule;
@property(nonatomic) _Bool isConfigured; // @synthesize isConfigured=_isConfigured;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)commonSetup;
- (void)prepareForInterfaceBuilder;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

