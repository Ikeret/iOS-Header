//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaLocation;

@interface SISchemaDeviceDynamicContext : PBCodable
{
    SISchemaLocation *_location;
    NSString *_countryCode;
    double _timeIntervalSince1970;
}

- (void).cxx_destruct;
@property(nonatomic) double timeIntervalSince1970; // @synthesize timeIntervalSince1970=_timeIntervalSince1970;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) SISchemaLocation *location; // @synthesize location=_location;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end

