//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@protocol CSSmartSiriVolumeDelegate <NSObject>

@optional
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
@end

