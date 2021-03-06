//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler : MCNewPayloadHandler
{
    NSMutableSet *_changedDomains;
}

+ (void)removeDefaults:(id)arg1 forDomain:(id)arg2;
+ (void)removeDefaults:(id)arg1 forManagedDomain:(id)arg2;
+ (_Bool)addDefaults:(id)arg1 toManagedDomain:(id)arg2;
+ (_Bool)setDefaults:(id)arg1 forManagedDomain:(id)arg2;
+ (id)defaultsForManagedDomain:(id)arg1;
+ (id)_managedSettingsFolder;
- (void).cxx_destruct;
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)_sendCFPreferenceNotification;
- (void)migrateDefaults;
- (void)unsetAside;
- (void)setAside;
- (void)remove;
- (void)_remove;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (_Bool)_install;
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;

@end

