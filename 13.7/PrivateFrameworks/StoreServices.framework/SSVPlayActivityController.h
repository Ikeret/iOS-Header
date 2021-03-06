//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSXPCConnection, SSVPlayActivityTable;
@protocol OS_dispatch_queue;

@interface SSVPlayActivityController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_debugLogOperationQueue;
    NSMutableDictionary *_endpointIdentifierToEndpointRevisionInformation;
    int _endpointRevisionInformationDidChangeNotifyToken;
    _Bool _hasAttemptedTableCreation;
    _Bool _hasLoadedEndpointRevisionInformation;
    _Bool _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    _Bool _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray *_pendingFlushingSessions;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSVPlayActivityTable *_table;
    NSXPCConnection *_daemonPlayActivityControllerConnection;
    unsigned long long _writingStyle;
}

+ (id)_requiredEndpointIdentifiers;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long writingStyle; // @synthesize writingStyle=_writingStyle;
- (id)_table;
- (void)_setupNotifyTokenIfNeeded;
- (_Bool)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2;
- (id)_sessionInformationForSessionToken:(unsigned long long)arg1;
- (id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1;
- (id)_revisionsIndexSetForPlayActivityEvents:(id)arg1;
- (void)_loadEndpointIdentifierInformationIfNeeded;
- (void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(_Bool)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1;
- (id)_daemonPlayActivityControllerConnection;
- (void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeFlushedPlayActivityEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getRevisionInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (id)init;

@end

