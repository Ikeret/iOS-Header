//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>

@class NSArray;
@protocol VCShortcutSyncService;

@protocol VCIncomingSyncDataHandling <VCPBMessageTyped>
- (_Bool)deleteSyncedData:(id *)arg1;
- (_Bool)applyChanges:(NSArray *)arg1 fromSyncService:(id <VCShortcutSyncService>)arg2 error:(id *)arg3;
@end

