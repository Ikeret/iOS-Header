//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;
}

@property(retain, nonatomic) GEOTraitsTransitScheduleTimeRange *operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter; // @synthesize lowFrequencyFilter=_lowFrequencyFilter;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter; // @synthesize highFrequencyFilter=_highFrequencyFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperatingHoursRange;
@property(readonly, nonatomic) _Bool hasLowFrequencyFilter;
@property(readonly, nonatomic) _Bool hasHighFrequencyFilter;

@end

