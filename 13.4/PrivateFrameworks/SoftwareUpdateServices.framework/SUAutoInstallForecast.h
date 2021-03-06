//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSDate, _SUAutoInstallForecastDateCache;

@interface SUAutoInstallForecast : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_unlockStartDate;
    NSDate *_unlockEndDate;
    NSDate *_suStartDate;
    NSDate *_suEndDate;
    NSDate *_firstUnlock;
    _SUAutoInstallForecastDateCache *_lazy_forecastDateCache;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *firstUnlock; // @synthesize firstUnlock=_firstUnlock;
@property(retain, nonatomic) NSDate *suEndDate; // @synthesize suEndDate=_suEndDate;
@property(retain, nonatomic) NSDate *suStartDate; // @synthesize suStartDate=_suStartDate;
@property(retain, nonatomic) NSDate *unlockEndDate; // @synthesize unlockEndDate=_unlockEndDate;
@property(retain, nonatomic) NSDate *unlockStartDate; // @synthesize unlockStartDate=_unlockStartDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isDateExpired:(id)arg1;
- (id)_forecastDateCache;
- (id)_roundedEndTime;
- (id)_roundedStartTime;
- (_Bool)_isForecastLogicallyExpired;
- (id)_calendar;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) long long scheduleType;
- (void)dealloc;
- (id)init;

@end

