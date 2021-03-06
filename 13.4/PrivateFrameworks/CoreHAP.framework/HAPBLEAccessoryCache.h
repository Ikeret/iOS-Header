//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class HAPBLEPeripheralInfo, NSMutableArray, NSString;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>
{
    NSString *_pairingIdentifier;
    HAPBLEPeripheralInfo *_peripheralInfo;
    NSMutableArray *_cachedServices;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *cachedServices; // @synthesize cachedServices=_cachedServices;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
@property(readonly, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
- (id)description;
- (void)updateWithService:(id)arg1;
- (id)getCachedServiceWithUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateWithPeripheralInfo:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1;

@end

