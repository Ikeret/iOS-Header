//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKBankAccountDataItem : PKPaymentDataItem
{
    PKCurrencyAmount *_peerPaymentBalance;
    PKBankAccountInformation *_PKBankAccountInformation;
}

+ (long long)dataType;
- (void).cxx_destruct;
@property(retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation; // @synthesize PKBankAccountInformation=_PKBankAccountInformation;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(readonly, nonatomic) PKBankAccountInformation *bankAccountInformation;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithModel:(id)arg1;

@end

