//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDeviceSetupSession, NSError;

@protocol HMDDeviceSetupSessionDelegate <NSObject>
- (void)setupSession:(HMDDeviceSetupSession *)arg1 didCloseWithError:(NSError *)arg2;
@end

