//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface PUSearchHistoryManager : NSObject
{
    NSOrderedSet *_recentSearches;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_readRecentSearchesFromUserDefaults;
- (id)_readRecentSearchesFromURL:(id)arg1;
- (_Bool)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id *)arg3;
- (id)_recentSearchesFileURL;
@property(retain, nonatomic) NSOrderedSet *recentSearches; // @synthesize recentSearches=_recentSearches;
- (void)saveRecentSearch:(id)arg1;
- (void)clearRecentSearches;

@end

