//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARDualGuidedFilter;
@protocol MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture;

@interface ARMatteGenerator : NSObject
{
    id <MTLDevice> _device;
    ARDualGuidedFilter *_dualGuidedFilter;
    unsigned long long _uncertaintyRadius;
    unsigned long long _erodeRadius;
    unsigned long long _dilationRadius;
    float _depthScale;
    id <MTLLibrary> _mattingLibrary;
    id <MTLComputePipelineState> _mattingDual;
    id <MTLComputePipelineState> _resampleAlpha;
    id <MTLComputePipelineState> _depthDilation;
    id <MTLTexture> _overlayCoefficientsFG;
    id <MTLTexture> _overlayCoefficientsBG;
    id <MTLTexture> _cameraImageTexture;
    id <MTLTexture> _alphaTexture;
    id <MTLTexture> _occluderDepthDilatedTexture;
    id <MTLTexture> _stencilTexture;
    long long _matteResolution;
    _Bool _enableDoubleMLResolutionMatting;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dilationRadius; // @synthesize dilationRadius=_dilationRadius;
@property(nonatomic) unsigned long long erosionRadius; // @synthesize erosionRadius=_erodeRadius;
@property(nonatomic) unsigned long long uncertaintyRadius; // @synthesize uncertaintyRadius=_uncertaintyRadius;
- (id)generateDilatedDepthFromFrame:(id)arg1 commandBuffer:(id)arg2;
- (id)generateMatteFromFrame:(id)arg1 commandBuffer:(id)arg2;
- (void)encodeCoefficients:(id)arg1 frame:(id)arg2 coefficientsForeground:(id)arg3 coefficientsBackground:(id)arg4;
- (void)setupBuffersForFrame:(id)arg1;
- (void)setupDepthBufferForFrame:(id)arg1;
- (void)setupAlphaBufferForFrame:(id)arg1;
- (void)_commonInitWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 matteResolution:(long long)arg2;
- (id)initWithDevice:(id)arg1 matteResolution:(long long)arg2 useSmoothing:(_Bool)arg3;

@end

