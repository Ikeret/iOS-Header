//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class AVPlayerItem, ISWrappedAVPlayer;

@protocol ISWrappedAVPlayerDelegate <NSObject>
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(ISWrappedAVPlayer *)arg1 itemDidPlayToEnd:(AVPlayerItem *)arg2;
@end

