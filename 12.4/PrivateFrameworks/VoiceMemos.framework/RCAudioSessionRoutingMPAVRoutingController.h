//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingController.h>

@class AVAudioSession, AVAudioSessionPortDescription, AVAudioSessionRouteDescription, MPAVRoute, NSArray, NSString, RCAudioSessionRoutingAssertion;

@interface RCAudioSessionRoutingMPAVRoutingController : MPAVRoutingController
{
    AVAudioSession *_audioSession;
    NSString *_audioSessionCategory;
    RCAudioSessionRoutingAssertion *_audioSessionAssertion;
    unsigned long long _audioSessionCategoryOptions;
    AVAudioSessionRouteDescription *_cachedCurrentRoute;
    _Bool _hasCategoryEverBeenActive;
    AVAudioSessionPortDescription *_cachedPickedInputRoutePortDescription;
    AVAudioSessionPortDescription *_cachedPickedOutputRoutePortDescription;
    MPAVRoute *_cachedPickedOutputRoute;
    NSArray *_cachedPickableOutputRoutes;
}

@property(readonly, nonatomic) _Bool hasCategoryEverBeenActive; // @synthesize hasCategoryEverBeenActive=_hasCategoryEverBeenActive;
@property(readonly, nonatomic) NSArray *cachedPickableOutputRoutes; // @synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes;
@property(readonly, nonatomic) MPAVRoute *cachedPickedOutputRoute; // @synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute;
@property(readonly, nonatomic) AVAudioSessionPortDescription *cachedPickedOutputRoutePortDescription; // @synthesize cachedPickedOutputRoutePortDescription=_cachedPickedOutputRoutePortDescription;
@property(readonly, nonatomic) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription; // @synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription;
- (void).cxx_destruct;
- (long long)_outputRouteFromAudioSession;
- (void)_updateHasCategoryEverBeenActive;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_rcDelegate;
- (void)setDelegate:(id)arg1;
- (void)disableDetailedDiscoveryMode;
- (void)enableDetailedDiscoveryMode;
- (long long)outputRouteTypeForNavigationIcon;
- (_Bool)makeAudioSessionCategoryActive:(id)arg1;
@property(readonly, nonatomic) _Bool isRoutingToPhoneCall;
@property(readonly, nonatomic) _Bool isRoutingToAirPlayMirrorDestination;
@property(readonly, nonatomic) _Bool isAudioSessionAppropriateForQueryingRoutes;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

