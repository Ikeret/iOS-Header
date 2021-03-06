//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDAWDHealthKitExperimentalCondition;

@interface HDAWDHealthKitExperimentalConditionEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    HDAWDHealthKitExperimentalCondition *_experimentalCondition;
    CDStruct_b5306035 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDAWDHealthKitExperimentalCondition *experimentalCondition; // @synthesize experimentalCondition=_experimentalCondition;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasExperimentalCondition;
@property(nonatomic) _Bool hasTimestamp;

@end

