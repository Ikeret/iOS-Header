//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSortDescriptor.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>
{
    CLLocation *_relativeLocation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CLLocation *relativeLocation; // @synthesize relativeLocation=_relativeLocation;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 relativeLocation:(id)arg2;

@end

