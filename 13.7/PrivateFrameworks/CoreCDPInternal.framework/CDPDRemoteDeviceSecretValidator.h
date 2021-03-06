//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator
{
    CDUnknownBlockType _requestToJoinCompletion;
    _Bool _isWaitingForRemoteApproval;
}

- (void).cxx_destruct;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (id)_decoratedDelegate;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)setValidSecretHandler:(CDUnknownBlockType)arg1;

@end

