//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id <_UIMotionEffectEventConsumer> _consumer;
}

@property id <_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;
- (double)slowUpdateIntervalForLogs;
- (double)fastUpdateIntervalForLogs;
- (_Bool)wantsSynchronizedUpdates;
- (_Bool)shouldLogEvents;
- (id)currentEvent;
- (void)setSlowUpdatesEnabled:(_Bool)arg1;
- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;

@end

