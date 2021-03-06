//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class NSString, StoreKitMessagesDatabaseStore;
@protocol OS_dispatch_queue, StoreKitBagContract;

@interface StoreKitMessagesManager : NSObject <PushMessageConsumer>
{
    id <StoreKitBagContract> _bagContract;
    StoreKitMessagesDatabaseStore *_databaseStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_checkServerForMessagesForAccount:(id)arg1 messageInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)showMessage:(id)arg1 forAccount:(id)arg2 inApp:(id)arg3;
- (void)messageURLForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

