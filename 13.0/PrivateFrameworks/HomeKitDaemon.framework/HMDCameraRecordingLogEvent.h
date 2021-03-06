//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMDLogEvent
{
    NSUUID *_sessionID;
    unsigned long long _sequenceNumber;
    NSUUID *_cameraID;
}

@property(readonly, copy) NSUUID *cameraID; // @synthesize cameraID=_cameraID;
@property unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)attributeDescriptions;
@property(readonly, copy) NSUUID *ephemeralCameraID;
@property(readonly) unsigned long long endTimestamp;
@property(readonly) unsigned long long startTimestamp;
- (id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(unsigned long long)arg4;

@end

