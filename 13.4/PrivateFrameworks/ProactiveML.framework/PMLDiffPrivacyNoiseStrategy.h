//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLNoiseStrategy-Protocol.h>

@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    unsigned long long _seed;
    _Bool _inplaceNorm;
    int _maxIterations;
    float _minimumMagnitude;
    CDStruct_cd4a7bf5 _noiseScaleFactors;
    long long _noiseMechanism;
}

+ (id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3;
@property long long noiseMechanism; // @synthesize noiseMechanism=_noiseMechanism;
@property float minimumMagnitude; // @synthesize minimumMagnitude=_minimumMagnitude;
@property CDStruct_cd4a7bf5 noiseScaleFactors; // @synthesize noiseScaleFactors=_noiseScaleFactors;
@property(readonly, copy) NSString *description;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (_Bool)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(_Bool)arg2 scaleFactor:(float *)arg3;
- (id)createSamplerByName:(id)arg1;
- (id)createDefaultSampler;
- (struct _PMLPreNoiseScaleFactorAndNoiseSampler)samplerWithScaleFactorFor:(id)arg1 usingNorm:(_Bool)arg2;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(CDStruct_cd4a7bf5)arg2 minimumMagnitude:(float)arg3 noiseMechanism:(long long)arg4 inplaceNorm:(_Bool)arg5;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(CDStruct_cd4a7bf5)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 noiseMechanism:(long long)arg5 inplaceNorm:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

