//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUFileServer : NSObject <CUActivatable>
{
    _Bool _activateCalled;
    RPCompanionLinkClient *_clinkClient;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_ioQueue;
    unsigned long long _lastSessionID;
    char _rootPath[1024];
    NSMutableDictionary *_sessionMap;
    NSObject<OS_dispatch_source> *_sessionTimer;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSURL *_rootDirectoryURL;
    NSString *_serviceType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSURL *rootDirectoryURL; // @synthesize rootDirectoryURL=_rootDirectoryURL;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_handleRequestFiles:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleQuery:(id)arg1 session:(id)arg2;
- (void)_handleQuery:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleKeepAlive:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionStop:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_update;
- (void)_sessionTimerFired;
- (void)_sessionInvalidate:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

