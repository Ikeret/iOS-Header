//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ComponentKit/CKAsyncTransactionContainer-Protocol.h>

@class CKComponent, CKComponentDataSourceAttachState;

@interface UIView (CKComponent) <CKAsyncTransactionContainer>
@property(retain, nonatomic, setter=ck_setComponent:) CKComponent *ck_component;
@property(retain, nonatomic, setter=ck_setAttachState:) CKComponentDataSourceAttachState *ck_attachState;
- (void)ck_asyncTransactionContainerStateDidChange;
- (void)ck_cancelAsyncTransactions;
@property(readonly, nonatomic) unsigned long long ck_asyncTransactionContainerState;
@property(nonatomic, getter=ck_isAsyncTransactionContainer, setter=ck_setAsyncTransactionContainer:) _Bool ck_asyncTransactionContainer;
@end

