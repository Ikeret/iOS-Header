//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKPlayer, GKTournamentParticipantHistoricalDataInternal, NSMutableArray;

@interface GKTournamentParticipantHistoricalData : NSObject <NSSecureCoding>
{
    GKTournamentParticipantHistoricalDataInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) GKTournamentParticipantHistoricalDataInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) GKPlayer *player;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long averageRank; // @dynamic averageRank;
@property(readonly, nonatomic) long long averageScore; // @dynamic averageScore;
@property(readonly, nonatomic) long long bestScore; // @dynamic bestScore;
@property(readonly, nonatomic) long long highestRank; // @dynamic highestRank;
@property(readonly, nonatomic) NSMutableArray *historicalRanks; // @dynamic historicalRanks;
@property(readonly, nonatomic) long long latestRank; // @dynamic latestRank;
@property(readonly, nonatomic) long long latestScore; // @dynamic latestScore;
@property(readonly, nonatomic) long long tournamentsPlayed; // @dynamic tournamentsPlayed;

@end

