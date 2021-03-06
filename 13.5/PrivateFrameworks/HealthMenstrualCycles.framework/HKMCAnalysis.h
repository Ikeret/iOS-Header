//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCycles/NSCopying-Protocol.h>
#import <HealthMenstrualCycles/NSSecureCoding-Protocol.h>

@class HKMCStatistics, HKQuantity, NSArray, NSNumber;

@interface HKMCAnalysis : NSObject <NSSecureCoding, NSCopying>
{
    HKMCStatistics *_statistics;
    NSArray *_menstruationProjections;
    NSArray *_fertileWindowProjections;
    NSArray *_cycles;
    unsigned long long _recentSymptoms;
    HKQuantity *_recentBasalBodyTemperature;
    NSNumber *_lastLoggedDayIndex;
    NSNumber *_lastMenstrualFlowDayIndex;
    NSNumber *_anchor;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *anchor; // @synthesize anchor=_anchor;
@property(readonly, copy, nonatomic) NSNumber *lastMenstrualFlowDayIndex; // @synthesize lastMenstrualFlowDayIndex=_lastMenstrualFlowDayIndex;
@property(readonly, copy, nonatomic) NSNumber *lastLoggedDayIndex; // @synthesize lastLoggedDayIndex=_lastLoggedDayIndex;
@property(readonly, nonatomic) HKQuantity *recentBasalBodyTemperature; // @synthesize recentBasalBodyTemperature=_recentBasalBodyTemperature;
@property(readonly, nonatomic) unsigned long long recentSymptoms; // @synthesize recentSymptoms=_recentSymptoms;
@property(readonly, nonatomic) NSArray *cycles; // @synthesize cycles=_cycles;
@property(readonly, nonatomic) NSArray *fertileWindowProjections; // @synthesize fertileWindowProjections=_fertileWindowProjections;
@property(readonly, nonatomic) NSArray *menstruationProjections; // @synthesize menstruationProjections=_menstruationProjections;
@property(readonly, nonatomic) HKMCStatistics *statistics; // @synthesize statistics=_statistics;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStatistics:(id)arg1 menstruationProjections:(id)arg2 fertileWindowProjections:(id)arg3 cycles:(id)arg4 recentSymptoms:(unsigned long long)arg5 recentBasalBodyTemperature:(id)arg6 lastLoggedDayIndex:(id)arg7 lastMenstrualFlowDayIndex:(id)arg8;

@end

