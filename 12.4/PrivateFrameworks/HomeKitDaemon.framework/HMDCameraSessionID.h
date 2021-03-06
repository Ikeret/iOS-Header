//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDDevice, NSMutableDictionary, NSString;

@interface HMDCameraSessionID : HMFObject <NSCopying>
{
    _Bool _spiClient;
    NSString *_sessionID;
    NSString *_accessoryName;
    NSString *_descriptionString;
    NSString *_cameraSessionAppID;
    NSString *_cameraProactiveSessionID;
    HMDDevice *_remoteDevice;
    NSMutableDictionary *_milestones;
    NSString *_deviceSectionName;
    NSMutableDictionary *_deviceMilestones;
}

+ (id)millisecondsSince1970;
@property(readonly, nonatomic) NSMutableDictionary *deviceMilestones; // @synthesize deviceMilestones=_deviceMilestones;
@property(readonly, nonatomic) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(readonly, nonatomic) NSMutableDictionary *milestones; // @synthesize milestones=_milestones;
@property(readonly, nonatomic, getter=isSPIClient) _Bool spiClient; // @synthesize spiClient=_spiClient;
@property(readonly, nonatomic) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSString *cameraProactiveSessionID; // @synthesize cameraProactiveSessionID=_cameraProactiveSessionID;
@property(readonly, nonatomic) NSString *cameraSessionAppID; // @synthesize cameraSessionAppID=_cameraSessionAppID;
@property(readonly, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)_prepareDeviceMilestones;
- (void)addParameterFor:(id)arg1 value:(id)arg2;
- (void)setParameterForPath:(id)arg1 value:(id)arg2;
- (void)setParameterFor:(id)arg1 value:(id)arg2;
- (void)markMilestoneForPath:(id)arg1;
- (void)markMilestoneFor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_createDescriptionString;
- (id)initWithAccessoryName:(id)arg1 sessionID:(id)arg2 cameraSessionAppID:(id)arg3 cameraProactiveSessionID:(id)arg4 remoteDevice:(id)arg5 spiClient:(_Bool)arg6;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 sessionID:(id)arg3 message:(id)arg4;
- (id)initWithAccessory:(id)arg1 sessionID:(id)arg2 message:(id)arg3;
- (id)_extractSessionAppID:(id)arg1;

@end

