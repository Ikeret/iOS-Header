//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying>
{
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
}

@property(nonatomic) unsigned long long digitalSignatureAlgorithm; // @synthesize digitalSignatureAlgorithm=_digitalSignatureAlgorithm;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isDigitalSignature;
@property(readonly, nonatomic) _Bool isCertificate;
- (id)description;
- (id)initWithDigitalSignathure:(unsigned long long)arg1;
- (id)initWithDigitalSignature:(unsigned long long)arg1;
- (id)initWithMethod:(unsigned long long)arg1;

@end

