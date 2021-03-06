//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_containerIdentifier;
    long long _environment;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;

@end

