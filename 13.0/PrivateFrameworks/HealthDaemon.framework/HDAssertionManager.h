//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDAssertionManager : NSObject
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_assertionExpirationQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionExpirationQueue; // @synthesize assertionExpirationQueue=_assertionExpirationQueue;
- (void).cxx_destruct;
- (void)_postNotification:(id)arg1 forAssertion:(id)arg2;
- (void)_lock_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_releaseAssertion:(id)arg1;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;
- (_Bool)takeAssertion:(id)arg1;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (_Bool)hasActiveAssertionForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

