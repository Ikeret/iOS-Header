//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIScreenEdgePanGestureRecognizer;
@protocol CSModalHomeGestureParticipating;

@protocol CSModalHomeAffordanceControlling <NSObject>
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;
- (void)unregisterHomeGestureParticipant;
- (void)registerHomeGestureParticipant:(id <CSModalHomeGestureParticipating>)arg1;
@end

