//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary;

@interface DAPriorityManager : NSObject
{
    int _currentPriority;
    NSMapTable *_clientsToPriorityRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableDictionary *_cachedAppState;
    long long _foregroundDataclasses;
}

+ (id)sharedManager;
+ (void)vendPriorityManagers;
@property(nonatomic) long long foregroundDataclasses; // @synthesize foregroundDataclasses=_foregroundDataclasses;
@property(retain, nonatomic) NSMutableDictionary *cachedAppState; // @synthesize cachedAppState=_cachedAppState;
@property(retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, nonatomic) int currentPriority; // @synthesize currentPriority=_currentPriority;
@property(retain, nonatomic) NSMapTable *clientsToPriorityRequests; // @synthesize clientsToPriorityRequests=_clientsToPriorityRequests;
- (void).cxx_destruct;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (void)_setNewPriority;
- (int)_recalculatePriority;
- (id)stateString;
- (void)_setForegroundDataclasses:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)_updateForegroundDataclasses;
- (void)_applicationStateChanged:(id)arg1;
- (id)appIDsToDataclasses;

@end

