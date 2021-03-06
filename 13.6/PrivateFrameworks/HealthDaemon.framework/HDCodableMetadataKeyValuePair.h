//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableQuantity, NSData, NSString;

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying>
{
    double _dateValue;
    double _numberDoubleValue;
    long long _numberIntValue;
    NSData *_dataValue;
    NSString *_key;
    HDCodableQuantity *_quantityValue;
    NSString *_stringValue;
    struct {
        unsigned int dateValue:1;
        unsigned int numberDoubleValue:1;
        unsigned int numberIntValue:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) HDCodableQuantity *quantityValue; // @synthesize quantityValue=_quantityValue;
@property(nonatomic) double numberDoubleValue; // @synthesize numberDoubleValue=_numberDoubleValue;
@property(nonatomic) long long numberIntValue; // @synthesize numberIntValue=_numberIntValue;
@property(nonatomic) double dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDataValue;
@property(readonly, nonatomic) _Bool hasQuantityValue;
@property(nonatomic) _Bool hasNumberDoubleValue;
@property(nonatomic) _Bool hasNumberIntValue;
@property(nonatomic) _Bool hasDateValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

