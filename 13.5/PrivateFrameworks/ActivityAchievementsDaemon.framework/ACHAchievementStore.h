//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHAchievementProgressEngineObserving-Protocol.h>
#import <ActivityAchievementsDaemon/ACHEarnedInstanceStoreObserving-Protocol.h>
#import <ActivityAchievementsDaemon/ACHTemplateAssetRegistryDelegate-Protocol.h>
#import <ActivityAchievementsDaemon/ACHTemplateStoreObserving-Protocol.h>

@class ACHAchievementProgressEngine, ACHEarnedInstanceStore, ACHTemplateAssetRegistry, ACHTemplateStore, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACHAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate>
{
    _Bool _templateStoreDidFinishInitialFetch;
    _Bool _earnedInstanceStoreDidFinishInitialFetch;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    ACHTemplateAssetRegistry *_templateAssetRegistry;
    ACHAchievementProgressEngine *_progressProvider;
    NSMutableDictionary *_achievementsByTemplateUniqueName;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool earnedInstanceStoreDidFinishInitialFetch; // @synthesize earnedInstanceStoreDidFinishInitialFetch=_earnedInstanceStoreDidFinishInitialFetch;
@property(nonatomic) _Bool templateStoreDidFinishInitialFetch; // @synthesize templateStoreDidFinishInitialFetch=_templateStoreDidFinishInitialFetch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName; // @synthesize achievementsByTemplateUniqueName=_achievementsByTemplateUniqueName;
@property(retain, nonatomic) ACHAchievementProgressEngine *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry; // @synthesize templateAssetRegistry=_templateAssetRegistry;
@property(retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
@property(retain, nonatomic) ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
- (_Bool)_queue_addProgressAndGoalToAchievement:(id)arg1;
- (void)progressProviderDidUpdateProgressValues:(id)arg1;
- (void)_queue_removeEarnedInstancesFromLocalStore:(id)arg1;
- (void)_queue_addEarnedInstancesToLocalStore:(id)arg1;
- (void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)arg1;
- (void)templateAssetRegistry:(id)arg1 didUpdateResourcesForTemplatesWithSourceName:(id)arg2;
- (void)_queue_removeTemplatesFromLocalStore:(id)arg1;
- (void)_queue_addTemplatesToLocalStore:(id)arg1;
- (void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2;
- (void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2;
- (void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1;
- (void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2;
- (void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2;
- (void)templateStoreDidFinishInitialFetch:(id)arg1;
- (void)recalculateProgressForAllAchievements;
- (id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg1 earnedInstance:(id)arg2;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)arg1;
- (id)achievementWithTemplateUniqueName:(id)arg1;
- (id)allAchievements;
- (void)_notifyObserversOfRemovedAchievements:(id)arg1;
- (void)_notifyObserversOfUpdatedAchievements:(id)arg1;
- (void)_notifyObserversOfNewAchievements:(id)arg1;
- (void)_notifyObserversOfInitialFetchCompletion;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 templateAssetRegistry:(id)arg3 progressProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

