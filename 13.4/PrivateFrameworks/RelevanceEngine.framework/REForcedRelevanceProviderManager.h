//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface REForcedRelevanceProviderManager : RERelevanceProviderManager
{
}

+ (_Bool)_supportsHistoricProviders;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (id)_features;
+ (Class)_relevanceProviderClass;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;

@end

