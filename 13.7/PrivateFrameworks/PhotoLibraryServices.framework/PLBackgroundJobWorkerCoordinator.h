//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject
{
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
    struct os_unfair_lock_s _lock;
    id <PLBackgroundJobWorkerCoordinatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PLBackgroundJobWorkerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleAllWorkersCompleted;
- (void)_processNextWorker;
- (void)stopAllBackgorundJobs;
- (void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2;
- (_Bool)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2;
- (id)_workersForBundle:(id)arg1;
- (id)initWithWorkerClassesAsStrings:(id)arg1;
- (id)init;

@end

