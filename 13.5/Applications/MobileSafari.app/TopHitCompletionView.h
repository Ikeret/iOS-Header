//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIColor;

@interface TopHitCompletionView : UIView
{
    NSAttributedString *_attributedText;
    unsigned long long _highlightStartIndex;
    UIColor *_highlightColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1 highlightStartIndex:(unsigned long long)arg2;

@end

