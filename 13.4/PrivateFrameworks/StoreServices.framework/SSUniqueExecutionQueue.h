//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSPromise;
@protocol OS_dispatch_queue;

@interface SSUniqueExecutionQueue : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_callBlockQueue;
    NSObject<OS_dispatch_queue> *_executeBlockQueue;
    SSPromise *_promise;
    NSObject<OS_dispatch_queue> *_promiseAccessQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue; // @synthesize promiseAccessQueue=_promiseAccessQueue;
@property(retain, nonatomic) SSPromise *promise; // @synthesize promise=_promise;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // @synthesize executeBlockQueue=_executeBlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue; // @synthesize callBlockQueue=_callBlockQueue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

