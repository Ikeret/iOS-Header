//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDPersonalizationServiceProtocol-Protocol.h"

@class NSString;

@interface PersonalizationService : NSObject <ASDPersonalizationServiceProtocol>
{
}

+ (id)defaultService;
- (id)_currentClient;
- (void)tasteProfileFeatureEnabledWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setClusterMappings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setClusterMapping:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetActorIDWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getGroupingToken:(CDUnknownBlockType)arg1;
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

