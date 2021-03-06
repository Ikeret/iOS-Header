//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarChromeModeController-Protocol.h"
#import "CarDestinationsCardViewControllerDelegate-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"

@class CarChromeViewController, CarDestinationsCardViewController, CarMapTrackingController, ChromeViewController, NSArray, NSString, PassThroughViewController, UIView, UIViewController;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarDestinationsModeController : NSObject <PassThroughViewControllerDelegate, CarDestinationsCardViewControllerDelegate, CarChromeModeController>
{
    PassThroughViewController *_viewController;
    CarChromeViewController *_chromeViewController;
    CarDestinationsCardViewController *_destinationsCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CarDestinationsCardViewController *destinationsCard; // @synthesize destinationsCard=_destinationsCard;
@property(nonatomic) ChromeViewController *chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
- (void)destinationsCard:(id)arg1 didSelectRecent:(id)arg2;
- (void)destinationsCard:(id)arg1 didSelectSuggestion:(id)arg2;
- (void)destinationsCardDidSelectSavedPlaces:(id)arg1;
- (void)configureCardsOverlay:(id)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) UIView *passThroughView;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool showsMapView;
- (id)mapView;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldEmulateOverlayInset;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsCameraToggleButton;
@property(readonly, nonatomic) _Bool showsExplicitPanButton;
@property(readonly, nonatomic) _Bool showsFloatingControls;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsMapViewForTransitions;
@property(readonly, nonatomic) _Bool showsNavPanRecenterButton;
@property(readonly, nonatomic) _Bool showsNavigationBar;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsZoomControls;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

