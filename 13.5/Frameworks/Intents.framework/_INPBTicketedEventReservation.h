//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTicketedEventReservation-Protocol.h>

@class NSString, _INPBReservation, _INPBSeat, _INPBTicketedEvent;

@interface _INPBTicketedEventReservation : PBCodable <_INPBTicketedEventReservation, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBTicketedEvent *_event;
    _INPBReservation *_reservation;
    _INPBSeat *_reservedSeat;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
@property(retain, nonatomic) _INPBReservation *reservation; // @synthesize reservation=_reservation;
@property(retain, nonatomic) _INPBTicketedEvent *event; // @synthesize event=_event;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasReservedSeat;
@property(readonly, nonatomic) _Bool hasReservation;
@property(readonly, nonatomic) _Bool hasEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

