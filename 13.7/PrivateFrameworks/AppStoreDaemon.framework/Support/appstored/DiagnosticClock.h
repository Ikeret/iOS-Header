//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Clock-Protocol.h"

@class NSDate, NSString;

@interface DiagnosticClock : NSObject <Clock>
{
    int _notifyToken;
    double _timeOffset;
}

+ (id)defaultClock;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)_updateTimeOffset;
@property(readonly) NSDate *now;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

