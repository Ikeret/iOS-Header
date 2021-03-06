//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject
{
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

+ (id)sharedConfiguration;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property(nonatomic) long long shouldAutocycleAppsInWebTakeover;
@property(nonatomic) long long shouldAlwaysShowWelcome;
@property(nonatomic) long long shouldAutocycleAppsInTiburon;
@property(nonatomic) long long shouldSuppressModalSheetsInMacBuddy;
@property(nonatomic) long long shouldEnableTestAccountMode;
@property(nonatomic) long long shouldAllowTestApplication;
@property(nonatomic) long long shouldAllowDemoMode;
@property(nonatomic) long long shouldAllowExperimentalMode;
@property(nonatomic) long long shouldAllowPhoneNumberAccounts;
@property(nonatomic) long long shouldAddHSA2CreateHeader;
@property(nonatomic) long long shouldSuppressHSA2Suggestions;
@property(nonatomic) long long shouldDisablePiggybacking;
@property(nonatomic) long long shouldFakeAuthSuccess;
@property(nonatomic) long long shouldDisablePETs;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

