//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject
{
    NSData *_mdmIdentityPersistentID;
    NSString *_mdmIdentityCommonName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mdmIdentityCommonName; // @synthesize mdmIdentityCommonName=_mdmIdentityCommonName;
@property(retain, nonatomic) NSData *mdmIdentityPersistentID; // @synthesize mdmIdentityPersistentID=_mdmIdentityPersistentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

