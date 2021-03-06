//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_branchLabel;
    NSString *_branchName;
    NSString *_experimentId;
    NSString *_experimentName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_branchLabel:1;
        unsigned int read_branchName:1;
        unsigned int read_experimentId:1;
        unsigned int read_experimentName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_branchLabel:1;
        unsigned int wrote_branchName:1;
        unsigned int wrote_experimentId:1;
        unsigned int wrote_experimentName:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) NSString *branchName;
@property(readonly, nonatomic) _Bool hasBranchName;
- (void)_readBranchName;
@property(retain, nonatomic) NSString *branchLabel;
@property(readonly, nonatomic) _Bool hasBranchLabel;
- (void)_readBranchLabel;
@property(retain, nonatomic) NSString *experimentName;
@property(readonly, nonatomic) _Bool hasExperimentName;
- (void)_readExperimentName;
@property(retain, nonatomic) NSString *experimentId;
@property(readonly, nonatomic) _Bool hasExperimentId;
- (void)_readExperimentId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

