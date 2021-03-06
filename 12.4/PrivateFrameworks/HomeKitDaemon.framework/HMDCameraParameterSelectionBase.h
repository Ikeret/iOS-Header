//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSessionID, NSString;

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging>
{
    HMDCameraSessionID *_sessionID;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)_selectSRTPParameters:(id)arg1;
- (id)_selectCryptoSuite:(id)arg1;
- (id)_filterFor:(id)arg1 preferenceList:(id)arg2 deviceSupportedTypes:(id)arg3 cameraSupportedTypes:(id)arg4 localPreferences:(id)arg5;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

