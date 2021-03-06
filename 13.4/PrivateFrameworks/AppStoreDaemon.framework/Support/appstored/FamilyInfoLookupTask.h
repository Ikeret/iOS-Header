//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;
@protocol AMSBagProtocol;

@interface FamilyInfoLookupTask : AMSTask
{
    _Bool _suppressDialogs;
    id <AMSBagProtocol> _bag;
    NSString *_logKey;
}

+ (id)_processURLResult:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(nonatomic) _Bool suppressDialogs; // @synthesize suppressDialogs=_suppressDialogs;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_currentCachedFamilyInfo;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id *)arg2;
- (id)performFamilyInfoLookup;
- (id)initWithBag:(id)arg1;

@end

