//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/MPStoreDownloadManagerObserver-Protocol.h>
#import <VideosUI/VUIMPMediaItemDownloadControllerObserver-Protocol.h>
#import <VideosUI/VUIMediaEntityAssetController-Protocol.h>

@class MPMediaItem, NSString, VUIMPMediaItemDownloadController, VUIMediaEntityAssetControllerState, VUIMediaEntityType;
@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetController : NSObject <VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController>
{
    _Bool _supportsStartingDownload;
    _Bool _requestingPermissionToDownload;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    id <VUIMediaEntityAssetControllerDelegate> _delegate;
    VUIMediaEntityAssetControllerState *_state;
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifier;
    VUIMPMediaItemDownloadController *_downloadController;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    MPMediaItem *_mediaItem;
}

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;
+ (_Bool)_supportsStartingDownloadWithMediaItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic, getter=isRequestingPermissionToDownload) _Bool requestingPermissionToDownload; // @synthesize requestingPermissionToDownload=_requestingPermissionToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) VUIMPMediaItemDownloadController *downloadController; // @synthesize downloadController=_downloadController;
@property(copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier; // @synthesize mediaEntityIdentifier=_mediaEntityIdentifier;
@property(readonly, nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
- (void)_notifyDelegateStateDidChange:(id)arg1;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;
- (_Bool)_isDownloaded;
- (void)_onProcessingQueue_calculateStateAndNotify:(_Bool)arg1;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadProgress:(double)arg2 bytesDownloaded:(unsigned long long)arg3 bytesToDownload:(unsigned long long)arg4 supportsPausing:(_Bool)arg5 supportsCancellation:(_Bool)arg6 notify:(_Bool)arg7;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(_Bool)arg2;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_setDownloadController:(id)arg1;
- (id)_onProcessingQueue_downloadController;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;
- (void)cancelAndRemoveDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;
- (id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

