//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface ODRDataSampler : NSObject
{
    NSTimer *_timer;
    NSMutableArray *_samples;
    _Bool _isRunning;
    double _samplingInterval;
}

@property(readonly) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (void).cxx_destruct;
- (id)currentStatsString;
- (id)max;
- (id)min;
- (id)average;
- (id)takeSample;
- (void)_recordSample;
- (void)stop;
- (void)start;
- (id)initWithSamplingRate:(double)arg1;

@end

