//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifierDataSource.h>

@interface COSPairedDeviceListDataSource : PSSpecifierDataSource
{
}

- (void)presentInternalFlow;
- (void)presentNewPairingFlowIfPossible;
- (void)tappedMigrate:(id)arg1;
- (void)loadSpecifiers;
- (id)newDeviceSpecifierForNRDevice:(id)arg1 magicSwitchEnabled:(id)arg2 deviceState:(id)arg3;
- (id)_fakeList;
- (id)_fakeWatchName:(unsigned long long)arg1;
- (void)_reloadForDeviceStateChange:(id)arg1;
- (void)magicSwitchStateChanged;
- (void)dealloc;
- (id)init;

@end

