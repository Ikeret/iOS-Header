//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EARCaesuraSilencePosteriorGeneratorDelegate, OS_dispatch_queue;

@interface EARCaesuraSilencePosteriorGenerator : NSObject
{
    struct shared_ptr<quasar::SilencePosteriorGenerator> _silenceGenerator;
    NSObject<OS_dispatch_queue> *_spgQueue;
    id <EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <EARCaesuraSilencePosteriorGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)endAudio;
- (void)_startComputeTask;
- (long long)getFrameDurationMs;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3;
- (id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2;
- (id)initWithConfigFile:(id)arg1;

@end

