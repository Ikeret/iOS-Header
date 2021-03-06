//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLTexture;

@interface ARGPUImageUndistortion : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _pipelineState;
    id <MTLComputePipelineState> _lutGenerationPipelineState;
    id <MTLTexture> _lut;
    // Error parsing type: {?="columns"[3]}, name: _fisheyeIntrinsics
    // Error parsing type: , name: _fisheyeRadialCoefficients
    // Error parsing type: {?="columns"[3]}, name: _rectilinearIntrinsics
}

- (void).cxx_destruct;
-     // Error parsing type: v144@0:8^{__CVBuffer=}16{?=[3]}2472^^{__CVBuffer}88{?=[3]}96, name: undistortFisheyeImage:withFisheyeIntrinsics:withFisheyeRadialCoefficients:toRectilinearImage:withRectilinearIntrinsics:
- (id)init;

@end

