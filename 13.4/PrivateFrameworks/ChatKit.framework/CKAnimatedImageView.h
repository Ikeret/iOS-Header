//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>
{
    _Bool _automaticallyObserveWindowForAnimationTimer;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) _Bool automaticallyObserveWindowForAnimationTimer; // @synthesize automaticallyObserveWindowForAnimationTimer=_automaticallyObserveWindowForAnimationTimer;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)updateAnimationTimerObserving;
- (void)didMoveToWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

