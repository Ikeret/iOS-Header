//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoVolumeObserving-Protocol.h>

@class AVAudioSession, NSString, SVKeyValueObserver, SVPlayer;

@interface SVVideoVolumeObserver : NSObject <SVVideoVolumeObserving>
{
    _Bool _muted;
    float _volume;
    CDUnknownBlockType _volumeChangeBlock;
    CDUnknownBlockType _muteStateChangeBlock;
    SVPlayer *_player;
    AVAudioSession *_audioSession;
    SVKeyValueObserver *_outputVolumeObserver;
    SVKeyValueObserver *_muteStateObserver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SVKeyValueObserver *muteStateObserver; // @synthesize muteStateObserver=_muteStateObserver;
@property(readonly, nonatomic) SVKeyValueObserver *outputVolumeObserver; // @synthesize outputVolumeObserver=_outputVolumeObserver;
@property(readonly, nonatomic) __weak AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock; // @synthesize muteStateChangeBlock=_muteStateChangeBlock;
@property(copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock; // @synthesize volumeChangeBlock=_volumeChangeBlock;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void)updateWithVolume:(float)arg1 muted:(_Bool)arg2;
- (void)volumeChanged:(float)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (id)initWithPlayer:(id)arg1 audioSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

