//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBModel;
@protocol HMDSettingModelBaseProtocol;

@protocol HMDSettingTransaction <NSObject>
- (void)addModel:(HMBModel *)arg1;
- (void)addSettingModel:(id <HMDSettingModelBaseProtocol>)arg1;
@end

