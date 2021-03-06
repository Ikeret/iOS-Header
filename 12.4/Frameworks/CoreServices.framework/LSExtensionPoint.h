//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSQueryResult.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_version;
    NSDictionary *_sdkEntry;
}

+ (_Bool)supportsSecureCoding;
+ (id)identifierForCurrentProcess;
+ (id)extensionPointForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *sdkEntry; // @synthesize sdkEntry=_sdkEntry;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1 andData:(id)arg2;

@end

