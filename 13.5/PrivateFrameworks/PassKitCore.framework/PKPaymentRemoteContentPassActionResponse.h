//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse
{
    PKPaymentPassAction *_updatedAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentPassAction *updatedAction; // @synthesize updatedAction=_updatedAction;
- (id)initWithExistingAction:(id)arg1 data:(id)arg2;

@end

