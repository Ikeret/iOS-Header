//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/IMSystemMonitorListener-Protocol.h>

@class IMHandle, IMPeople, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMapTable, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMAccount : NSObject <IMSystemMonitorListener>
{
    IMServiceImpl *_service;
    IMPeople *_buddyList;
    NSRecursiveLock *_lock;
    NSMapTable *_imHandles;
    IMHandle *_loginIMHandle;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    NSString *_loginID;
    NSString *_displayName;
    NSString *_uniqueID;
    long long _accountType;
    NSString *_strippedLogin;
    NSDictionary *_data;
    NSMutableDictionary *_dataChanges;
    NSMutableDictionary *_localCache;
    NSDictionary *_profile;
    NSMutableDictionary *_profileChanges;
    NSString *_countryCode;
    long long _profileStatus;
    NSDictionary *_accountPreferences;
    NSMutableDictionary *_accountPreferencesChanges;
    NSDictionary *_accountPersistentProperties;
    NSMutableDictionary *_accountPersistentPropertiesChanges;
    NSArray *_groups;
    NSMutableDictionary *_sortOrders;
    NSDictionary *_members;
    NSMutableDictionary *_coalescedChanges;
    NSArray *_targetGroupState;
    NSArray *_lastReceivedGroupState;
    NSDictionary *_subtypeInfo;
    NSArray *_vettedAliases;
    NSArray *_aliases;
    unsigned long long _myStatus;
    NSMutableDictionary *_currentAccountStatus;
    NSString *_myStatusMessage;
    NSDictionary *_myNowPlaying;
    NSDate *_myIdleSince;
    NSData *_myPictureData;
    NSData *_accountImageData;
    unsigned long long _capabilities;
    unsigned long long _defaultHandleCapabilities;
    _Bool _hasCheckedDefaultHandleCapabilities;
    NSAttributedString *_myProfile;
    long long _registrationStatus;
    long long _registrationFailureReason;
    NSDictionary *_registrationAlertInfo;
    unsigned long long _loginStatus;
    _Bool _isActive;
    _Bool _hasPostedOfflineNotification;
    _Bool _justLoggedIn;
    _Bool _useMeCardName;
    unsigned int _cachedBlockingMode;
    _Bool _blockIdleStatus;
    _Bool _syncedWithRemoteBuddyList;
    _Bool _hasReceivedSync;
    int _numHolding;
    int _coalesceCount;
    _Bool _needToCheckForWatchedIMHandles;
    _Bool _iconChecked;
    _Bool _hasBeenRemoved;
    id _smallImage;
    id _accountImage;
    _Bool _asleep;
}

+ (id)allBuddyListIMHandles;
+ (id)arrayOfAllIMHandles;
+ (id)nameOfLoginStatus:(unsigned long long)arg1;
+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;
+ (id)temporaryPasswordForAccount:(id)arg1 forAuthID:(id)arg2 forServiceName:(id)arg3;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
@property(readonly, nonatomic) _Bool justLoggedIn; // @synthesize justLoggedIn=_justLoggedIn;
@property(readonly, nonatomic) IMPeople *buddyList; // @synthesize buddyList=_buddyList;
@property(readonly, nonatomic) id loginIMHandle; // @synthesize loginIMHandle=_loginIMHandle;
@property(readonly, nonatomic) NSDictionary *accountSubtypeInfo; // @synthesize accountSubtypeInfo=_subtypeInfo;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned int blockingMode; // @synthesize blockingMode=_cachedBlockingMode;
@property(nonatomic) _Bool blockIdleStatus; // @synthesize blockIdleStatus=_blockIdleStatus;
@property(readonly, nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSDate *myIdleSince; // @synthesize myIdleSince=_myIdleSince;
@property(readonly, nonatomic) NSData *myPictureData; // @synthesize myPictureData=_myPictureData;
@property(readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;
@property(readonly, nonatomic) unsigned long long myStatus; // @synthesize myStatus=_myStatus;
@property(readonly, nonatomic) NSAttributedString *myProfile; // @synthesize myProfile=_myProfile;
@property(readonly, nonatomic) NSDictionary *myStatusDictionary; // @synthesize myStatusDictionary=_currentAccountStatus;
@property(readonly, nonatomic) __weak IMServiceImpl *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *strippedLogin; // @synthesize strippedLogin=_strippedLogin;
@property(retain, nonatomic) NSString *login; // @synthesize login=_loginID;
- (void).cxx_destruct;
- (void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (_Bool)_updateDisplayName:(id)arg1;
@property(copy, nonatomic) NSString *displayName;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;
- (int)integerForPreferenceKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forPreferenceKey:(id)arg2;
- (_Bool)boolForPreferenceKey:(id)arg1;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (id)stringForPreferenceKey:(id)arg1;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (id)objectForPreferenceKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *accountPreferences;
- (void)_removePersistentPropertyForKey:(id)arg1;
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;
- (id)_persistentPropertyForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_persistentProperties;
@property(readonly, nonatomic) _Bool isAsleep;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)dictionaryDataForKey:(id)arg1;
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)_removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;
- (long long)validationErrorReasonForAlias:(id)arg1;
- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;
- (long long)validationStatusForAlias:(id)arg1;
- (_Bool)validateAlias:(id)arg1 type:(long long)arg2;
- (_Bool)validateAliases:(id)arg1;
- (_Bool)validateAlias:(id)arg1;
- (_Bool)unvalidateAliases:(id)arg1;
- (_Bool)unvalidateAlias:(id)arg1;
- (long long)typeForAlias:(id)arg1;
- (_Bool)removeAlias:(id)arg1 type:(long long)arg2;
- (_Bool)removeAliases:(id)arg1;
- (_Bool)removeAlias:(id)arg1;
- (_Bool)addAlias:(id)arg1 type:(long long)arg2;
- (_Bool)addAliases:(id)arg1;
- (_Bool)addAlias:(id)arg1;
- (id)aliasesForType:(long long)arg1;
- (_Bool)hasAlias:(id)arg1 type:(long long)arg2;
- (_Bool)hasAlias:(id)arg1;
- (void)_invalidateCachedAliases;
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic, getter=isMakoAccount) _Bool makoAccount;
- (id)_statuses;
- (id)_aliasInfoForAlias:(id)arg1;
- (_Bool)_aliasIsVisible:(id)arg1;
- (id)_aliases;
@property(readonly, nonatomic) NSArray *aliasesToRegister;
@property(readonly, nonatomic) NSArray *vettedAliases;
- (void)_updateProfileInfo:(id)arg1;
- (long long)profileValidationErrorReason;
- (long long)profileValidationStatus;
- (_Bool)validateProfile;
- (_Bool)setProfileString:(id)arg1 forKey:(id)arg2;
- (_Bool)setProfileValue:(id)arg1 forKey:(id)arg2;
- (_Bool)removeProfileValueForKey:(id)arg1;
- (id)profileStringForKey:(id)arg1;
- (id)profileValueForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *profileInfo;
@property(readonly, nonatomic) NSString *countryCode;
- (_Bool)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)enrollSelfDeviceInSMSRelay;
- (void)unEnrollDeviceInSMSRelay:(id)arg1;
- (void)enrollDeviceInSMSRelay:(id)arg1;
- (_Bool)authenticateAccount;
- (_Bool)requestNewAuthorizationCredentials;
@property(readonly, nonatomic) NSString *authorizationToken;
@property(readonly, nonatomic) NSString *authorizationID;
@property(readonly, nonatomic) _Bool supportsAuthorization;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;
- (id)defaultChatSuffix;
- (id)chatIDForRoomName:(id)arg1;
- (void)nowLoggedOut;
- (void)nowLoggedIn;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;
- (void)disconnectAllIMHandles;
- (void)unregisterIMHandleWithID:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)_refreshLoginIMHandle;
- (void)forgetAllWatches;
- (void)stopWatchingIMHandle:(id)arg1;
- (void)startWatchingIMHandle:(id)arg1;
- (void)watchBuddiesIfNecessary;
- (void)_watchBuddiesIfNecessary;
- (_Bool)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (_Bool)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (id)imHandlesForIMPerson:(id)arg1;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (void)setBuddyListAuthorization:(_Bool)arg1 forIMHandle:(id)arg2;
- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (id)personSibsForIMHandle:(id)arg1;
- (id)personForIMHandle:(id)arg1 identifier:(int *)arg2;
- (id)personForIMHandle:(id)arg1;
- (id)imHandleWithID:(id)arg1;
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2 originalID:(id)arg3 countryCode:(id)arg4;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;
- (unsigned long long)defaultHandleCapabilities;
- (id)existingIMHandleWithID:(id)arg1;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;
- (id)existingIMHandleWithInfo:(id)arg1;
- (id)imHandleWithInfo:(id)arg1;
- (Class)imHandleClass;
@property(readonly, nonatomic) NSArray *arrayOfAllIMHandles;
- (void)recalculateSubtypeInfo;
- (void)_clearImageCache;
- (id)recalculatedSubtypeInfo;
- (long long)compareNames:(id)arg1;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (void)_syncWithRemoteBuddies;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1;
- (void)setIsActive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, nonatomic) NSString *loginStatusMessage;
- (void)_notJustLoggedIn;
- (_Bool)unregisterAccount;
- (_Bool)registerAccount;
@property(readonly, nonatomic) long long registrationFailureReason;
@property(readonly, nonatomic) long long registrationStatus;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;
@property(readonly, nonatomic) _Bool supportsRegistration;
@property(readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;
@property(readonly, nonatomic) _Bool canSendMessages;
@property(readonly, nonatomic) _Bool isOperational;
@property(readonly, nonatomic) _Bool isRegistered;
@property(readonly, nonatomic) _Bool _isUsableForSending;
- (void)accountDidDeactivate;
- (void)accountDidBecomeActive;
- (void)accountWillBeRemoved;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_serviceDidConnect:(id)arg1;
- (void)_registrationStatusChanged:(id)arg1;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)buddyPropertiesChanged:(id)arg1;
- (void)resumeBuddyUpdates;
- (void)_resumeBuddyUpdatesNow;
- (void)holdBuddyUpdates;
@property(readonly, nonatomic) _Bool makingChanges;
- (void)endChanges;
- (id)memberGroups:(id)arg1;
@property(readonly, nonatomic) NSArray *groupList;
- (id)groupMembers:(id)arg1;
- (id)propertiesForGroup:(id)arg1;
- (void)reorderGroups:(id)arg1;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)changeBuddyList:(id)arg1 add:(_Bool)arg2 groups:(id)arg3 atLocation:(long long)arg4;
- (void)addBuddyToBuddyList:(id)arg1;
- (_Bool)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (_Bool)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (_Bool)removePeople:(id)arg1 fromGroups:(id)arg2;
- (_Bool)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (void)_ensureGroupsExists:(id)arg1;
- (void)syncWithRemoteBuddies;
- (void)_markHasSyncedWithRemoteBuddies;
@property(readonly, nonatomic) _Bool hasSyncedWithRemoteBuddies;
- (void)requestGroups;
- (void)hookupToDaemon;
- (void)beginChanges;
- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)setTargetGroupsState:(id)arg1;
- (void)updateWithTargetGroups;
- (void)setWaitForTargetState;
- (void)targetGroupStateTimeout;
@property(readonly, nonatomic) _Bool hasTargetGroupStateBeenMet;
@property(readonly, nonatomic) _Bool isAwaitingTargetGroupState;
- (void)clearTargetState;
@property(nonatomic) _Bool blockOtherAddresses;
@property(retain, nonatomic) NSArray *allowList;
@property(retain, nonatomic) NSArray *blockList;
- (void)blockMessages:(_Bool)arg1 fromID:(id)arg2;
- (void)setCachedBlockIdleStatus:(_Bool)arg1;
- (void)setCachedBlockingMode:(unsigned int)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setCachedAllowList:(id)arg1;
@property(readonly, nonatomic) NSArray *emailDomains;
@property(readonly, nonatomic) NSString *addressBookProperty;
@property(readonly, nonatomic) NSArray *addressBookProperties;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (void)loadFromDictionary:(id)arg1;
- (void)_loadFromDictionary:(id)arg1 force:(_Bool)arg2;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
@property(readonly, nonatomic) long long invalidSettings;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool validServer;
@property(readonly, nonatomic) _Bool validPort;
@property(readonly, nonatomic) _Bool validLogin;
@property(readonly, nonatomic) _Bool canActivate;
@property(readonly, nonatomic) _Bool isSMSRelayCapable;
@property(readonly, nonatomic) _Bool allowsMMSRelay;
@property(readonly, nonatomic) _Bool allowsSMSRelay;
@property(nonatomic) _Bool allowsVCRelay;
@property(nonatomic) _Bool goIdle;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *server;
- (id)_serverWithSSL:(_Bool)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool useSSL;
@property(nonatomic) _Bool autoLogin;
@property(readonly, nonatomic) _Bool hasCustomDescription;
@property(retain, nonatomic) NSString *accountDescription;
@property(nonatomic, getter=isInvisible) _Bool invisible;
- (void)removeTemporaryPassword;
- (void)setTemporaryPassword:(id)arg1;
@property(readonly, nonatomic) NSString *temporaryPassword;
- (void)removePassword;
- (void)setPassword:(id)arg1;
@property(readonly, nonatomic) NSString *password;
@property(readonly, nonatomic) _Bool handlesChatInvites;
- (void)updateCapabilities:(unsigned long long)arg1;
- (_Bool)hasCapability:(unsigned long long)arg1;
- (long long)compareServices:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (long long)compareAccountNames:(id)arg1;
- (long long)compareLoginStatus:(id)arg1;
- (_Bool)emailAddressIsID:(id)arg1;
- (void)resetToDefaults;
- (void)writeSettings;
- (_Bool)equalID:(id)arg1 andID:(id)arg2;
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;
- (id)canonicalFormOfID:(id)arg1;
@property(readonly, nonatomic) NSData *accountImageData;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) NSString *shortName;
- (void)setUniqueID:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSString *myNowPlayingString;
- (void)setCurrentAccountStatus:(id)arg1;
- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;
@property(readonly, nonatomic) long long accountType;
- (void)_updateLogin:(id)arg1;
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)logoutAccount;
- (void)loginAccount;
- (void)autoLoginAccount;
- (void)_loginWithAutoLogin:(_Bool)arg1;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (id)initWithService:(id)arg1;
- (void)clearServiceCaches;
- (void)dealloc;

@end

