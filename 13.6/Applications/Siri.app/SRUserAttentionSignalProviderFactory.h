//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRUserAttentionSignalProviderFactory : NSObject
{
    double _samplingInterval;
    double _attentionLossTimeout;
    unsigned long long _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (unsigned long long)_faceAttentionAwarenessEventMask;
- (id)wakeGestureManager;
- (id)touchAttentionAwarenessClient;
- (id)faceAttentionAwarenessClient;
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3;

@end

