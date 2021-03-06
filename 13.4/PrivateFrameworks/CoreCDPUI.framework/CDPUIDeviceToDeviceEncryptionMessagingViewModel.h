//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPUI/CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol-Protocol.h>

@class CDPUIDeviceToDeviceEncryptionFlowContext, NSString;

@interface CDPUIDeviceToDeviceEncryptionMessagingViewModel : NSObject <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>
{
    CDPUIDeviceToDeviceEncryptionFlowContext *_context;
    _Bool _hasLocalSecret;
    _Bool _is2FA;
}

- (void).cxx_destruct;
@property(readonly) CDPUIDeviceToDeviceEncryptionFlowContext *context; // @synthesize context=_context;
@property(readonly) _Bool hasLocalSecret; // @synthesize hasLocalSecret=_hasLocalSecret;
@property(readonly) _Bool is2FA; // @synthesize is2FA=_is2FA;
- (id)cancelTitle;
- (id)continueTitle;
- (id)message;
- (id)title;
- (id)initWithContext:(id)arg1 is2FA:(_Bool)arg2 hasLocalSecret:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

