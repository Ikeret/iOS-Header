//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFWatchdogTimer : NSObject <NSCopying>
{
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _timeoutHandler;
    _Bool _isStopped;
    double _remainingInterval;
    double _startTime;
}

- (void).cxx_destruct;
- (void)reset;
- (_Bool)cancelIfNotAlreadyCanceled;
- (void)cancel;
- (_Bool)isStopped;
- (void)stop;
- (void)start;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

