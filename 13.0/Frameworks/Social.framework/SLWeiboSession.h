//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/SLMicroBlogSheetDelegate-Protocol.h>
#import <Social/SLWeiboClientSessionProtocol-Protocol.h>

@class CLInUseAssertion, NSBundle, NSCache, NSString, SLRemoteSessionProxy;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SLWeiboRemoteSessionProtocol;

@interface SLWeiboSession : NSObject <SLWeiboClientSessionProtocol, SLMicroBlogSheetDelegate>
{
    SLRemoteSessionProxy<SLWeiboRemoteSessionProtocol> *_remoteSession;
    NSCache *_profileImageCache;
    NSObject<OS_dispatch_queue> *_remoteSessionQueue;
    NSObject<OS_dispatch_semaphore> *_remoteSessionQueueSemaphore;
    NSBundle *_serviceBundle;
    CLInUseAssertion *_locationInUseAssertion;
    CDUnknownBlockType _connectionResetBlock;
    CDUnknownBlockType _locationInformationChangedBlock;
}

+ (id)_remoteInterface;
@property(copy, nonatomic) CDUnknownBlockType locationInformationChangedBlock; // @synthesize locationInformationChangedBlock=_locationInformationChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionResetBlock; // @synthesize connectionResetBlock=_connectionResetBlock;
- (void).cxx_destruct;
- (_Bool)countMediaAttachmentsTowardCharacterCount;
- (long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2;
- (id)serviceAccountTypeIdentifier;
- (void)acceptLocationUpdate:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(CDUnknownBlockType)arg1;
- (void)showSettingsIfNeeded;
- (void)logDidSendStatusWithText:(id)arg1 attachments:(id)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
- (void)sendStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setGeotagAccountSetting:(_Bool)arg1;
- (void)fetchGeotagStatus:(CDUnknownBlockType)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchCurrentImageLimits:(CDUnknownBlockType)arg1;
- (void)fetchCurrentUrlLimits:(CDUnknownBlockType)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (void)ensureUserRecordStore;
- (void)fetchSessionInfo:(CDUnknownBlockType)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)tearDownConnectionToRemoteSession;
- (void)stopDeferringExpensiveOperations;
- (void)deferExpensiveOperations;
- (id)_createOrGetRemoteSession;
- (void)endPotentialLocationUse;
- (void)beginPotentialLocationUse;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

