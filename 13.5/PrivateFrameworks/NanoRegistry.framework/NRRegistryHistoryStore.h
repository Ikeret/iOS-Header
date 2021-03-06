//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRRegistry.h>

@class NRDeviceCollectionHistory, NSMutableDictionary;

@interface NRRegistryHistoryStore : NRRegistry
{
    NSMutableDictionary *_diffIndexObservers;
    int _keyBagStatusChangedNotificationToken;
    NRDeviceCollectionHistory *_history;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int keyBagStatusChangedNotificationToken; // @synthesize keyBagStatusChangedNotificationToken=_keyBagStatusChangedNotificationToken;
- (void)invalidate;
- (void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3;
- (void)removeDiffIndexObserver:(id)arg1;
- (id)addDiffIndexObserverWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)grabHistoryWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)grabHistoryWithReadBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NRDeviceCollectionHistory *history; // @synthesize history=_history;
- (void)setCollection:(id)arg1;
- (id)collection;
- (void)_removeUnreferencedSecureProperties;
- (void)_persistCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_loadAndNotifySecureProperties;
- (void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;
- (void)syncGrabHistoryWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)syncGrabHistoryWithReadBlock:(CDUnknownBlockType)arg1;

@end

