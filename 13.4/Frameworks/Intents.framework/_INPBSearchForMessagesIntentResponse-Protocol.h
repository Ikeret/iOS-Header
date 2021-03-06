//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBMessage;

@protocol _INPBSearchForMessagesIntentResponse <NSObject>
+ (Class)searchResultsType;
+ (Class)messagesType;
@property(readonly, nonatomic) unsigned long long searchResultsCount;
@property(copy, nonatomic) NSArray *searchResults;
@property(readonly, nonatomic) unsigned long long messagesCount;
@property(copy, nonatomic) NSArray *messages;
- (_INPBMessage *)searchResultsAtIndex:(unsigned long long)arg1;
- (void)addSearchResults:(_INPBMessage *)arg1;
- (void)clearSearchResults;
- (_INPBMessage *)messagesAtIndex:(unsigned long long)arg1;
- (void)addMessages:(_INPBMessage *)arg1;
- (void)clearMessages;
@end

