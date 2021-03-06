//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_majorVersion;
    NSNumber *_minorVersion;
    NSNumber *_releaseVersion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(retain, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(retain, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

