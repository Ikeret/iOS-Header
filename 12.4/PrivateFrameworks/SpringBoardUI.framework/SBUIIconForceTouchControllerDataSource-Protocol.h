//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class SBFParallaxSettings, SBUIForceTouchGestureRecognizer, SBUIIconForceTouchController, UIView, UIViewController;

@protocol SBUIIconForceTouchControllerDataSource <NSObject>
- (UIViewController *)iconForceTouchController:(SBUIIconForceTouchController *)arg1 secondaryViewControllerForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIViewController *)iconForceTouchController:(SBUIIconForceTouchController *)arg1 primaryViewControllerForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (struct CGRect)iconForceTouchController:(SBUIIconForceTouchController *)arg1 iconViewFrameForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIView *)iconForceTouchController:(SBUIIconForceTouchController *)arg1 newIconViewCopyForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (long long)iconForceTouchController:(SBUIIconForceTouchController *)arg1 layoutStyleForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;

@optional
- (struct CGPoint)iconForceTouchController:(SBUIIconForceTouchController *)arg1 zoomDownCenterForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (UIView *)iconForceTouchController:(SBUIIconForceTouchController *)arg1 zoomDownViewForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (SBFParallaxSettings *)iconForceTouchController:(SBUIIconForceTouchController *)arg1 parallaxSettingsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (double)iconForceTouchController:(SBUIIconForceTouchController *)arg1 wrapperViewCornerRadiusForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (double)iconForceTouchController:(SBUIIconForceTouchController *)arg1 iconImageCornerRadiusForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (struct UIEdgeInsets)iconForceTouchController:(SBUIIconForceTouchController *)arg1 iconImageInsetsForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
@end

