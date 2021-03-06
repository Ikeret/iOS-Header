//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)_secureCodingLifetimeClasses;
+ (_Bool)supportsSecureCoding;
+ (id)lifetimeForUserRequest;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)arg1;
+ (id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2;
+ (id)lifetimeWithDateInterval:(id)arg1;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeWithDuration:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long lifetimeType; // @dynamic lifetimeType;
- (id)_init;

@end

