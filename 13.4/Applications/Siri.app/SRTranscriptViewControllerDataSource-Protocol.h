//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFChildConversationItemList, NSSet, SRTranscriptViewController;
@protocol AFUIDomainObjectStore;

@protocol SRTranscriptViewControllerDataSource <NSObject>
- (NSSet *)siriEnabledAppListForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (id <AFUIDomainObjectStore>)domainObjectStoreForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (AFChildConversationItemList *)conversationItemListForTranscriptViewController:(SRTranscriptViewController *)arg1;
- (long long)siriStateForTranscriptViewController:(SRTranscriptViewController *)arg1;
@end

