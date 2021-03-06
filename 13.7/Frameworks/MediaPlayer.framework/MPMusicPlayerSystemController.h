//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerController.h>

#import <MediaPlayer/MPSystemMusicPlayerController-Protocol.h>

@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>
{
}

- (id)_systemServer;
- (_Bool)_shouldAccessCache;
- (id)_nowPlaying;
- (id)_queueDescriptor;
- (void)_establishConnectionIfNeeded;
- (void)openToPlayQueueDescriptor:(id)arg1;
- (void)setUserQueueModificationsDisabled:(_Bool)arg1;
- (_Bool)userQueueModificationsDisabled;
- (long long)playbackState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

