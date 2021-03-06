//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSString;

@interface PHCloudIdentifier : NSObject <NSSecureCoding>
{
    NSString *_localCloudIdentifier;
    NSString *_identifierCode;
}

+ (_Bool)supportsSecureCoding;
+ (id)notFoundIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifierCode; // @synthesize identifierCode=_identifierCode;
@property(readonly, nonatomic) NSString *localCloudIdentifier; // @synthesize localCloudIdentifier=_localCloudIdentifier;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *stringValue;
- (id)initAsNotFoundIdentifier;
- (id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2;
- (id)initWithStringValue:(id)arg1;

@end

