//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKPublicKey, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation
{
    CKPublicKey *_transcodeServerPublicKey;
    NSString *_transcodeServerHostname;
    NSURL *_transcodeServerPublicKeyURL;
}

+ (struct __SecPolicy *)createTranscodeServerTrustPolicy;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *transcodeServerPublicKeyURL; // @synthesize transcodeServerPublicKeyURL=_transcodeServerPublicKeyURL;
@property(readonly, nonatomic) NSString *transcodeServerHostname; // @synthesize transcodeServerHostname=_transcodeServerHostname;
@property(retain) CKPublicKey *transcodeServerPublicKey; // @synthesize transcodeServerPublicKey=_transcodeServerPublicKey;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)fetchRemoteTranscodePublicKey;
- (void)fetchCachedTranscodePublicKey;
- (void)determineTranscodeServerPublicKeyURL;
- (void)main;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

