//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOClientRankingModel;

__attribute__((visibility("hidden")))
@interface PersonalizedItemClientRankingFunction : NSObject
{
    GEOClientRankingModel *_model;
}

+ (id)clientRankingFunctionForGEOClientRankingModel:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOClientRankingModel *model; // @synthesize model=_model;
- (void)describeInLog:(id)arg1 withType:(unsigned char)arg2;
- (double)weightedScoreForModelFeature:(id)arg1 forPersonalizedItemSignalPack:(id)arg2;
- (double)clientRankingScoreForPersonalizedItemSignalPack:(id)arg1 withServerScore:(id)arg2 hasContributionsFromDiscreteFeaturesResult:(_Bool *)arg3;
- (id)initWithModel:(id)arg1;

@end

