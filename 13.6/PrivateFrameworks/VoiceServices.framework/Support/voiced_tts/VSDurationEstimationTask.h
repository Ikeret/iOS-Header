//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <voiced_tts/VSSpeechTaskProtocol-Protocol.h>

@class NSError, NSString, VSDeviceTTSCore, VSSpeechRequest;

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol>
{
    VSSpeechRequest *_request;
    NSError *_error;
    double _estimatedDuration;
    VSDeviceTTSCore *_deviceCore;
}

+ (id)shortTermCachedEngineForVoice:(id)arg1 voiceResource:(id)arg2;
+ (id)shortTermCachedEngines;
- (void).cxx_destruct;
@property(retain, nonatomic) VSDeviceTTSCore *deviceCore; // @synthesize deviceCore=_deviceCore;
@property(readonly, nonatomic) double estimatedDuration; // @synthesize estimatedDuration=_estimatedDuration;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
- (void)suspend;
- (void)resume;
- (id)md5hash;
- (id)delegate;
- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

