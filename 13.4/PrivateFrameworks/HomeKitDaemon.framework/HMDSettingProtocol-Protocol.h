//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingBaseProtocol-Protocol.h>

@class HMSettingValue, NSNumber, NSString;

@protocol HMDSettingProtocol <HMDSettingBaseProtocol>
@property(readonly, copy) id value;
@property(readonly, copy) NSNumber *properties;
@property(readonly, copy) NSNumber *type;
@property(readonly, getter=isReadOnly) _Bool readOnly;
@property(readonly, copy) NSString *keyPath;
- (_Bool)wouldValueUpdate:(HMSettingValue *)arg1;
- (_Bool)isValidValue:(HMSettingValue *)arg1;
@end

