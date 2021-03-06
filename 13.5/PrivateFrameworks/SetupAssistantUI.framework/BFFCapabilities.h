//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BFFCapabilities : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _Bool _shouldShowWalletInitialized;
    _Bool _shouldShowWallet;
}

+ (id)sharedCapabilities;
- (void).cxx_destruct;
- (void)shouldShowWallet:(CDUnknownBlockType)arg1;
- (_Bool)supportsApplePay;
- (void)localeChanged:(id)arg1;
- (_Bool)isAppleTV;
- (void)dealloc;
- (id)init;

@end

