//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_domainGroupName;
    NSString *_domainName;
    NSString *_settingsClassName;
    NSString *_settingsBundlePath;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *settingsBundlePath; // @synthesize settingsBundlePath=_settingsBundlePath;
@property(readonly, nonatomic) NSString *settingsClassName; // @synthesize settingsClassName=_settingsClassName;
@property(readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) NSString *domainGroupName; // @synthesize domainGroupName=_domainGroupName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithDomain:(id)arg1;

@end

