//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceGeometryEstimator : VNDetector
{
}

- (_Bool)_buildCalibrationMatrix:(id)arg1 calibrationMatrix:(float *)arg2 error:(id *)arg3;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

