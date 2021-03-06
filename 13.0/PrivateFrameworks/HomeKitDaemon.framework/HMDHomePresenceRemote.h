//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomePresenceCheck-Protocol.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>
{
    NSDictionary *_userPresenceMap;
}

@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (void).cxx_destruct;
- (_Bool)isAnyUserAtHome;
- (_Bool)isNoUserAtHome;
- (_Bool)areUsersNotAtHome:(id)arg1;
- (_Bool)areUsersAtHome:(id)arg1;
- (_Bool)isUserNotAtHome:(id)arg1;
- (_Bool)isUserAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (id)description;
- (id)initWithPresenceByPairingIdentity:(id)arg1;
- (id)initWithPresenceByUserId:(id)arg1;

@end

