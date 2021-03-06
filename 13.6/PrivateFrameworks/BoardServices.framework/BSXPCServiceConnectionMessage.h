//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSXPCCoder.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionMessage-Protocol.h>

@class NSObject, NSString;
@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable>
{
    int _sendFlag;
    NSObject<OS_dispatch_queue> *_targetQueue;
    CDUnknownBlockType _completion;
    id <BSServiceDispatchingQueue> _replyQueue;
}

+ (id)messageWithXPCConnection:(id)arg1 targetQueue:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <BSServiceDispatchingQueue> replyQueue; // @synthesize replyQueue=_replyQueue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)invalidate;
- (id)sendSynchronouslyWithError:(out id *)arg1;
- (id)createReply;
- (_Bool)expectsReply;
- (_Bool)_sendSynchronously:(_Bool)arg1;
@property(retain, nonatomic) NSString *selectorName;
@property(nonatomic) _Bool childIdentifierIsRemotelyDefined;
@property(nonatomic) unsigned long long childIdentifier;
@property(retain, nonatomic) NSString *messageID;
- (_Bool)sendSynchronously;
- (_Bool)send;
- (id)initWithXPCConnection:(id)arg1 targetQueue:(id)arg2;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

