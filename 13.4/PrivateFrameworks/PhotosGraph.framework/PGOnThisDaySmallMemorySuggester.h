//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSDictionary, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGOnThisDaySmallMemorySuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_suggestedMomentLocalIdentifiers;
    NSDictionary *_momentByMomentLocalIdentifier;
    NSEnumerator *_suggestedMomentLocalIdentifierEnumerator;
    NSString *_titleDateMatchingTitleOnThisDay;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (id)suggestionWithMomentLocalIdentifier:(id)arg1;
- (id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)arg1;
- (id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)arg1;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

