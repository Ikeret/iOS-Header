//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface AR2DSkeletonDetectionPostProcessGPU : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _pipelineStateInterpolate;
    id <MTLComputePipelineState> _pipelineStateMaxFilter;
    id <MTLBuffer> _input;
    id <MTLBuffer> _intermediate;
    id <MTLBuffer> _output;
}

- (void).cxx_destruct;
- (float *)process:(float *)arg1 counter:(unsigned int *)arg2 shape:(struct CGSize)arg3;
- (void)_copyToInputAsFloat16:(float *)arg1 shape:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

@end

