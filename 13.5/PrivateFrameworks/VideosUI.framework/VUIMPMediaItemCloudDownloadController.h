//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMPMediaItemDownloadController.h>

#import <VideosUI/MPStoreDownloadManagerObserver-Protocol.h>

@class MPStoreDownload, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver>
{
    MPStoreDownload *_storeDownload;
}

+ (id)_stateFromStoreDownload:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MPStoreDownload *storeDownload; // @synthesize storeDownload=_storeDownload;
- (void)_removeStoreObserver;
- (void)_addStoreObserver;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (_Bool)isRestoreDownload;
- (_Bool)supportsPausing;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

