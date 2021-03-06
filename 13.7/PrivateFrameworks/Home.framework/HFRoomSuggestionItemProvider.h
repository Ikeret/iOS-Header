//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;
@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider : HFItemProvider
{
    unsigned long long _suggestedRoomLimit;
    HMHome *_home;
    id <HFRoomSuggestionVendor> _suggestionVendor;
    NSSet *_supplementaryRoomBuilders;
    NSSet *_suggestionItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
@property(copy, nonatomic) NSSet *supplementaryRoomBuilders; // @synthesize supplementaryRoomBuilders=_supplementaryRoomBuilders;
@property(retain, nonatomic) id <HFRoomSuggestionVendor> suggestionVendor; // @synthesize suggestionVendor=_suggestionVendor;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long suggestedRoomLimit; // @synthesize suggestedRoomLimit=_suggestedRoomLimit;
- (id)_keyForRoomName:(id)arg1;
- (id)_filteredSuggestions;
- (id)_filteredSupplementaryRoomBuilders;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 suggestionVendor:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

