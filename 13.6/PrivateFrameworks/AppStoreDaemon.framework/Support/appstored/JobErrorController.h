//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface JobErrorController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_errors;
    NSMutableOrderedSet *_scheduledErrors;
    NSObject<OS_dispatch_source> *_scheduledErrorTimer;
}

+ (id)dialogForError:(id)arg1;
+ (id)sharedErrorController;
- (void).cxx_destruct;
- (void)_scheduleErrorDisplay:(id)arg1;
- (void)_displayScheduledErrors;
- (void)_cancelErrorsPassingTest:(CDUnknownBlockType)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)showJobError:(id)arg1;
- (void)cancelDialogsWithDownloadIdentifier:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

