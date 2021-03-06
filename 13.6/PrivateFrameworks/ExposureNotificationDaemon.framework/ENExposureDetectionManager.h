//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENDownloadManager, ENExposureDatabase, NSBackgroundActivityScheduler;
@protocol ENAdvertisementDatabaseQueryProvider, OS_dispatch_queue;

@interface ENExposureDetectionManager : NSObject
{
    id <ENAdvertisementDatabaseQueryProvider> _advertisementQueryProvider;
    NSBackgroundActivityScheduler *_detectionScheduler;
    ENDownloadManager *_downloadManager;
    ENExposureDatabase *_exposureDatabase;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _activated;
}

- (void).cxx_destruct;
- (void)_downloadsDidBecomeAvailable:(id)arg1;
- (id)_archiveAtPath:(id)arg1 entryPathExtension:(id)arg2 error:(id *)arg3;
- (id)_openKeyFileWithArchiveAtURL:(id)arg1 error:(id *)arg2;
- (void)_performExposureDetectionWithScheduler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performExposureDetection;
- (void)invalidate;
- (void)activate;
- (id)initWithAdvertisementQueryProvider:(id)arg1 downloadManager:(id)arg2 exposureDatabase:(id)arg3 queue:(id)arg4;

@end

