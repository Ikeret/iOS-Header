//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class BSUIAnimationFactory, SBInlineAppExposeContainerViewController, SBMainWorkspaceTransitionRequest, SBSceneViewStatusBarAssertion, SBUIAnimationController;

@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <SBDeviceApplicationSceneViewControlling, SBLayoutStateTransitionObserver>
@property(nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;
@property(nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
- (SBSceneViewStatusBarAssertion *)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (SBUIAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (void)setInlineAppExposeContainerViewController:(SBInlineAppExposeContainerViewController *)arg1;
- (void)blurApplicationContent:(_Bool)arg1 withAnimationFactory:(BSUIAnimationFactory *)arg2 completion:(void (^)(void))arg3;
@end

