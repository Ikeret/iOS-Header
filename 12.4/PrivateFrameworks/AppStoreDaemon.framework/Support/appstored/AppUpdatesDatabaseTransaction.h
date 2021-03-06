//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUpdatesDatabaseSession.h"

@class SQLiteConnection;

@interface AppUpdatesDatabaseTransaction : AppUpdatesDatabaseSession
{
    SQLiteConnection *_connection;
}

+ (void)_logState:(long long)arg1 forBundleID:(id)arg2;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)_setUpdateState:(long long)arg1 forBundleID:(id)arg2 itemID:(id)arg3 withPurchaseID:(long long)arg4 isBackground:(_Bool)arg5;
- (_Bool)setUpdateState:(long long)arg1 forASDPurchases:(id)arg2;
- (_Bool)setUpdateState:(long long)arg1 forPurchase:(id)arg2;
- (_Bool)setUpdateState:(long long)arg1 forASDPurchase:(id)arg2;
- (id)processUpdate:(id)arg1 existingUpdate:(id)arg2 forReason:(long long)arg3;
- (_Bool)mergeAvailableUpdates:(id)arg1 withReason:(long long)arg2 availableCount:(long long *)arg3 notifyChanges:(_Bool *)arg4 bundleIDs:(id *)arg5;
- (_Bool)deleteUpdatesInstalledBefore:(double)arg1;
- (id)initWithConnection:(id)arg1;

@end

