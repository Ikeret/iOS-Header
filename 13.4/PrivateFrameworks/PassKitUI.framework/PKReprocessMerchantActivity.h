//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class PKPaymentPass, PKPaymentTransaction;

@interface PKReprocessMerchantActivity : UIActivity
{
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
}

- (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)initWithTransaction:(id)arg1 paymentPass:(id)arg2;

@end

