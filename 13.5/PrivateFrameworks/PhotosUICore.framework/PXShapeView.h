//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (id)shapeLayer;

@end

