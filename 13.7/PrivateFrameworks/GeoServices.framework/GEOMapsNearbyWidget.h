//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapsServerMetadata;

@interface GEOMapsNearbyWidget : PBCodable <NSCopying>
{
    GEOMapsServerMetadata *_serverMetadata;
    int _tappedItemIndex;
    struct {
        unsigned int has_tappedItemIndex:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTappedItemIndex;
@property(nonatomic) int tappedItemIndex;
@property(retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property(readonly, nonatomic) _Bool hasServerMetadata;

@end

