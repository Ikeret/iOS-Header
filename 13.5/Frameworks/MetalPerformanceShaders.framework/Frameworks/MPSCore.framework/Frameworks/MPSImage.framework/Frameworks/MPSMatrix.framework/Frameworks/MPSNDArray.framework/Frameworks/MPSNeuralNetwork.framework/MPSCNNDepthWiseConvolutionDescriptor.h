//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNConvolutionDescriptor.h>

@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor
{
}

- (id)debugDescription;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
- (id)init;
@property(readonly, nonatomic) unsigned long long channelMultiplier;

@end

