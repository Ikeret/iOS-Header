//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase
{
    NSString *_payloadIPAddress;
    NSString *_payloadResourcePath;
    NSNumber *_payloadPort;
    NSNumber *_payloadForceTLS;
}

+ (id)buildRequiredOnlyWithIPAddress:(id)arg1 withResourcePath:(id)arg2;
+ (id)buildWithIPAddress:(id)arg1 withResourcePath:(id)arg2 withPort:(id)arg3 withForceTLS:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadForceTLS; // @synthesize payloadForceTLS=_payloadForceTLS;
@property(copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property(copy, nonatomic) NSString *payloadResourcePath; // @synthesize payloadResourcePath=_payloadResourcePath;
@property(copy, nonatomic) NSString *payloadIPAddress; // @synthesize payloadIPAddress=_payloadIPAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

