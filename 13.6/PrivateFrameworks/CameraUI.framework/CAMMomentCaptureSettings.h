//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CAMMomentCaptureSettings : NSObject
{
    NSString *_persistenceUUID;
    long long _flashMode;
    long long _hdrMode;
    _Bool _autoOriginalPhotoDeliveryEnabled;
    long long _lowLightMode;
    unsigned long long _userInitiationTime;
    long long _photoQualityPrioritization;
    _Bool _shouldDisableCameraSwitchingDuringVideoRecording;
    _Bool _autoSpatialOverCaptureEnabled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool autoSpatialOverCaptureEnabled; // @synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled;
@property(readonly, nonatomic) _Bool shouldDisableCameraSwitchingDuringVideoRecording; // @synthesize shouldDisableCameraSwitchingDuringVideoRecording=_shouldDisableCameraSwitchingDuringVideoRecording;
@property(readonly, nonatomic) long long photoQualityPrioritization; // @synthesize photoQualityPrioritization=_photoQualityPrioritization;
@property(readonly, nonatomic) unsigned long long userInitiationTime; // @synthesize userInitiationTime=_userInitiationTime;
@property(readonly, nonatomic) long long lowLightMode; // @synthesize lowLightMode=_lowLightMode;
@property(readonly, nonatomic) _Bool autoOriginalPhotoDeliveryEnabled; // @synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled;
@property(readonly, nonatomic) long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

