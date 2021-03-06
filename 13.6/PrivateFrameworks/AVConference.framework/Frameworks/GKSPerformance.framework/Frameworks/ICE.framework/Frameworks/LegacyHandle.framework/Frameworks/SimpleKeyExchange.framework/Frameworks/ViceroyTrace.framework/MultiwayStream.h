//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MultiwayStream : NSObject
{
    NSString *_streamID;
    int _interval;
    int _frequency;
    double _lastReceivedVideoStallTime;
    double _currentStallTime;
    double _totalVideoStallTime;
    double _maxVideoStallTime;
    unsigned short _significantVideoStallCount;
    unsigned short _audioErasureCount;
    double _totalAudioErasureTime;
    double _averageFramerateSum;
    unsigned short _averageFramerateReportCounter;
    double _averageJitterLengthSum;
    unsigned short _averageJitterReportCounter;
    int _totalVideoPacketsReceived;
    int _oooPacketCount;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameImcompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
    unsigned int _evictedFramesLikelyRecoverableCount;
    unsigned int _evictedFramesTrackedCount;
    unsigned int _evictedFramesAnalysisValidIntervals;
    double _evictedFramesAverageLatePacketDelay;
}

@property(readonly) double totalAudioErasureTime; // @synthesize totalAudioErasureTime=_totalAudioErasureTime;
@property(readonly) double currentStallTime; // @synthesize currentStallTime=_currentStallTime;
- (unsigned int)evictedFramesTrackedCount;
- (unsigned int)evictedFramesLikelyRecoverableCount;
- (double)evictedFramesAnalysisValidIntervals;
- (double)evictedFramesAverageLatePacketDelay;
- (unsigned int)decodedVideoFrameEnqueueCounter;
- (unsigned int)videoFrameTotalIncompleteCounter;
- (unsigned int)videoFrameImcompleteNextTSCounter;
- (unsigned int)videoFrameDecodedButSkippedCounter;
- (unsigned int)totalFIRCounter;
- (unsigned int)totalFIRDemandCounter;
- (unsigned int)totalVideoPacketsReceived;
- (unsigned int)oooPacketCount;
- (unsigned short)averageJitterReportCounter;
- (double)averageJitterLengthSum;
- (unsigned short)averageFramerateReportCounter;
- (double)averageFramerateSum;
- (double)audioErasureTotalTime;
- (unsigned short)audioErasureCount;
- (double)videoStallTotalTime;
- (unsigned short)significantVideoStallCount;
- (unsigned int)RTPeriod;
- (void)processData:(id)arg1;
- (void)dealloc;
- (id)initStreamWithID:(id)arg1;

@end

