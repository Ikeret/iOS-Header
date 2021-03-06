//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUTPowerMonitor : NSObject
{
    id _internal;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) double batteryPercentRemaining;
@property(readonly, nonatomic) _Bool isExternalPowerConnected;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (void)dealloc;
- (_Bool)_initIOService;
- (id)_init;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void *)arg2;

@end

