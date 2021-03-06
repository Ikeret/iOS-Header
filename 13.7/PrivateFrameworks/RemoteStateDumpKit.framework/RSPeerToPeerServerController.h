//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteStateDumpKit/RSPeerToPeerConnectionController.h>

#import <RemoteStateDumpKit/MCNearbyServiceAdvertiserDelegate-Protocol.h>

@class MCNearbyServiceAdvertiser, NSString;

@interface RSPeerToPeerServerController : RSPeerToPeerConnectionController <MCNearbyServiceAdvertiserDelegate>
{
    _Bool _advertiserDidNotStartAdvertising;
    MCNearbyServiceAdvertiser *_serviceAdvertiser;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool advertiserDidNotStartAdvertising; // @synthesize advertiserDidNotStartAdvertising=_advertiserDidNotStartAdvertising;
@property(retain, nonatomic) MCNearbyServiceAdvertiser *serviceAdvertiser; // @synthesize serviceAdvertiser=_serviceAdvertiser;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (_Bool)didStartAcceptingConnections;
- (void)abort;
- (void)prepareForConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

