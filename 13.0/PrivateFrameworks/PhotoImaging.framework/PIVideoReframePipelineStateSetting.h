//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIVideoReframePipelineStateSetting : NSObject
{
    long long _sampleMode;
    CDStruct_1b6d18a9 _time;
}

@property(nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;

@end

