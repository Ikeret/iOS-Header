//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject
{
    struct __SecTrust *_unevaluatedTrust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_uncommentedSender;
    unsigned long long _certificateType;
    NSString *_sender;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) unsigned long long certificateType; // @synthesize certificateType=_certificateType;
@property(readonly, nonatomic) struct __SecTrust *trust;
@property(readonly, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;
- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust *)arg2 sender:(id)arg3;

@end

