//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDQueryControlServerInterface-Protocol.h>
#import <HealthDaemon/HDQueryServerDelegate-Protocol.h>
#import <HealthDaemon/HDTaskServerDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDQueryControlServer : HDSubserver <HDQueryServerDelegate, HDTaskServerDelegate, HDQueryControlServerInterface>
{
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryServerEndpointsByUUID;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)queryServerDidFinish:(id)arg1;
- (void)queryServer:(id)arg1 shouldStartWithCompletion:(CDUnknownBlockType)arg2;
- (void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startQueryServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_lock_hasActiveQueries;
- (_Bool)_hasActiveQueries;
- (void)removeTaskServerObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)taskServerDidInvalidate:(id)arg1;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (id)taskServerWithUUID:(id)arg1;
- (void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (id)initWithParentServer:(id)arg1 connectionQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

