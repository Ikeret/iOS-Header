//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UISceneLifecycleMonitor.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor
{
    NSNumber *_transitioningState;
    _Bool _transitioning;
    _Bool _connected;
}

- (void).cxx_destruct;
- (void)willBecomeActive;
- (void)didEnterBackground;
- (id)_windowScene;
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(CDUnknownBlockType)arg4;
- (long long)currentActivationState;
- (id)initWithScene:(id)arg1;

@end

