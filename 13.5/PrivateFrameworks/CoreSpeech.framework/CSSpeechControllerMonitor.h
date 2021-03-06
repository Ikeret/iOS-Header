//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@class CSAudioRecordContext;

@interface CSSpeechControllerMonitor : CSEventMonitor
{
    unsigned long long _recordState;
    CSAudioRecordContext *_audioRecordContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(nonatomic) unsigned long long recordState; // @synthesize recordState=_recordState;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 withContext:(id)arg3;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;

@end

