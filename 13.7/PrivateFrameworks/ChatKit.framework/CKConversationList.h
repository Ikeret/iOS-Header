//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKConversation, NSMutableArray, NSMutableDictionary;

@interface CKConversationList : NSObject
{
    NSMutableArray *_trackedConversations;
    _Bool _loadingConversations;
    _Bool _loadedConversations;
    _Bool _remergingConversations;
    _Bool _holdingWasKnownSenderUpdates;
    CKConversation *_pendingConversation;
    NSMutableDictionary *_conversationsDictionary;
    unsigned long long _filteredConversationCount;
}

+ (id)conversationListAlertSuppressionContextForFilterMode:(unsigned long long)arg1;
+ (id)stringForFilterMode:(unsigned long long)arg1;
+ (id)numberForFilterMode:(unsigned long long)arg1;
+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (void)initialize;
+ (id)sharedConversationList;
- (void).cxx_destruct;
@property(nonatomic) _Bool holdingWasKnownSenderUpdates; // @synthesize holdingWasKnownSenderUpdates=_holdingWasKnownSenderUpdates;
@property(nonatomic) unsigned long long filteredConversationCount; // @synthesize filteredConversationCount=_filteredConversationCount;
@property(retain, nonatomic) NSMutableDictionary *conversationsDictionary; // @synthesize conversationsDictionary=_conversationsDictionary;
@property(nonatomic) _Bool remergingConversations; // @synthesize remergingConversations=_remergingConversations;
@property(readonly, nonatomic) _Bool loadedConversations; // @synthesize loadedConversations=_loadedConversations;
@property(readonly, nonatomic) _Bool loadingConversations; // @synthesize loadingConversations=_loadingConversations;
@property(retain, nonatomic) CKConversation *pendingConversation; // @synthesize pendingConversation=_pendingConversation;
- (_Bool)_shouldShowInboxView;
- (_Bool)_messageSpamFilteringEnabled;
- (_Bool)_messageUnknownFilteringEnabled;
- (_Bool)_messageFilteringEnabled;
- (void)releaseWasKnownSenderHold;
- (void)beginWasKnownSenderHold;
- (_Bool)isHoldingWasKnownSenderUpdates;
- (void)updateConversationsWasKnownSender;
- (void)removeConversation:(id)arg1;
- (void)_setConversations:(id)arg1 forFilterMode:(unsigned long long)arg2;
- (id)conversationsForFilterMode:(unsigned long long)arg1;
- (_Bool)_messageIsFromFilteredSenderServiceIsSMS:(_Bool)arg1 lastMessageIsSMS:(_Bool)arg2 isContact:(_Bool)arg3 isFiltered:(_Bool)arg4 isSpam:(_Bool)arg5 unknownFilteringEnabled:(_Bool)arg6 smsSpamFilteringEnabled:(_Bool)arg7;
- (unsigned long long)filterModeForConversation:(id)arg1;
- (void)updateConversationListsAndSortIfEnabled;
- (_Bool)_shouldCleanupFilter;
- (void)updateConversationFilteredFlagsAndReportSpam;
- (void)_handleMemoryWarning:(id)arg1;
- (id)_testingTrackedConversations;
- (id)pendingConversationCreatingIfNecessary;
- (void)_handleChatsDidRemergeNotification:(id)arg1;
- (void)_handleChatsWillRemergeNotification:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_abPartialChanged:(id)arg1;
- (void)_abChanged:(id)arg1;
- (void)deleteConversations:(id)arg1;
- (void)deleteConversation:(id)arg1;
- (id)unreadLastMessages;
- (_Bool)_isUnreadChat:(id)arg1 ignoringMessages:(id)arg2;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (long long)unreadCountForFilterMode:(unsigned long long)arg1;
- (void)unpendConversation;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (_Bool)_shouldBailBeginTrackingForCurrentProcess;
- (void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg1;
- (void)_postConversationListChangedNotification;
- (id)topMostConversation;
- (void)resort;
- (id)conversations;
- (_Bool)hasActiveConversations;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (_Bool)_shouldFilterForParticipants:(id)arg1;
- (void)setNeedsReload;
- (void)resetCaches;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 joinedChatsOnly:(_Bool)arg5 create:(_Bool)arg6;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(_Bool)arg3 create:(_Bool)arg4;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)stopTrackingConversation:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithIMChatPersonCentricID:(id)arg1;
- (id)conversationForExistingChatWithIMChatGroupID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (void)_beginTrackingConversationWithChat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

