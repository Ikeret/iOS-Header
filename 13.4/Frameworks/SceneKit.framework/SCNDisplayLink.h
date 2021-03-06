//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, SCNRecursiveLock;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    CADisplayLink *_caDisplayLink;
    _Bool _supportTargetTimestamp;
    CDUnknownBlockType _block;
    CDUnknownBlockType _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    // Error parsing type: Ai, name: _queuedFrameCount
}

- (_Bool)_isInvalidated;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)_cleanup;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property(nonatomic) float preferredFrameRate;
@property(copy, nonatomic) CDUnknownBlockType adaptativeFrameRate;
- (_Bool)setPaused:(_Bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

