//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMultiDict.h>

@interface CKMultiCache : IMMultiDict
{
    _Bool _cacheEligibleForPrewarm;
    _Bool _punchoutCacheEligibleForPrewarm;
    unsigned long long _limit;
}

@property(nonatomic) _Bool punchoutCacheEligibleForPrewarm; // @synthesize punchoutCacheEligibleForPrewarm=_punchoutCacheEligibleForPrewarm;
@property(nonatomic) _Bool cacheEligibleForPrewarm; // @synthesize cacheEligibleForPrewarm=_cacheEligibleForPrewarm;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void)markPunchoutCacheAsPrewarmed;
- (void)markCacheAsPrewarmed;
- (void)removeAllObjects;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end

