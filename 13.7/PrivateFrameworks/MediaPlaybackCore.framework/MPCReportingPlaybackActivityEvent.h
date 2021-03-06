//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCReportingEvent-Protocol.h>

@class NSString, SSVPlayActivityEvent;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent>
{
    _Bool _shouldReportToStore;
    SSVPlayActivityEvent *_playActivityEvent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReportToStore; // @synthesize shouldReportToStore=_shouldReportToStore;
@property(copy, nonatomic) SSVPlayActivityEvent *playActivityEvent; // @synthesize playActivityEvent=_playActivityEvent;
- (unsigned long long)reportingEventType;
- (_Bool)isValidReportingEvent;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

