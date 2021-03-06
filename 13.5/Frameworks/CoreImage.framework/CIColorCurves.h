//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSData;

__attribute__((visibility("hidden")))
@interface CIColorCurves : CIFilter
{
    CIImage *inputImage;
    NSData *inputCurvesData;
    CIVector *inputCurvesDomain;
    id inputColorSpace;
    CIImage *_curvesImage;
}

+ (id)customAttributes;
@property(retain, nonatomic) id inputColorSpace; // @synthesize inputColorSpace;
@property(copy, nonatomic) NSData *inputCurvesData; // @synthesize inputCurvesData;
@property(retain, nonatomic) CIVector *inputCurvesDomain; // @synthesize inputCurvesDomain;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_checkInputs;
- (id)curvesImage;
- (id)_kernel;
- (void)dealloc;

@end

