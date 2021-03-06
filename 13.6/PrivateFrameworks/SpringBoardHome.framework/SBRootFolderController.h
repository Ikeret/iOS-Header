//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolderController.h>

#import <SpringBoardHome/SBFramewiseInteractiveTransitionAnimatorDelegate-Protocol.h>
#import <SpringBoardHome/SBHIconRootViewProviding-Protocol.h>
#import <SpringBoardHome/SBRootFolderPageStateTransitioning-Protocol.h>
#import <SpringBoardHome/SBRootFolderViewDelegate-Protocol.h>
#import <SpringBoardHome/SBSearchGestureObserver-Protocol.h>
#import <SpringBoardHome/SBViewControllerTransitionContextDelegate-Protocol.h>

@class NSArray, NSHashTable, NSSet, NSString, SBFParallaxSettings, SBFolderIconImageCache, SBFramewiseInteractiveTransitionAnimator, SBHIconImageCache, SBPercentPassthroughInteractiveTransition, SBRootFolder, SBRootFolderView, SBSearchGesture, SBViewControllerTransitionContext, UIView, UIViewController, _SBRootFolderDockAnimationViewControllerWindow, _SBRootFolderPageTransitionHandle, _UILegibilitySettings;
@protocol SBHLegibility, SBHSidebarProvider, SBRootFolderControllerAccessoryViewControllerDelegate, SBRootFolderControllerDelegate, SBRootFolderPageTransition;

@interface SBRootFolderController : SBFolderController <SBFramewiseInteractiveTransitionAnimatorDelegate, SBViewControllerTransitionContextDelegate, SBRootFolderViewDelegate, SBSearchGestureObserver, SBRootFolderPageStateTransitioning, SBHIconRootViewProviding>
{
    SBViewControllerTransitionContext *_currentTransitionContext;
    SBFramewiseInteractiveTransitionAnimator *_currentTransitionAnimator;
    SBPercentPassthroughInteractiveTransition *_currentTransitionInteractor;
    NSHashTable *_pageStateObservers;
    NSHashTable *_sidebarViewControllerAppearStateOverrideAssertions;
    _Bool _showsDoneButtonWhileEditing;
    _Bool _spotlightTransitioningFromBreadcrumb;
    _Bool _managesStatusBarWidth;
    long long _pageState;
    UIViewController *_pullDownSearchViewController;
    UIViewController<SBHLegibility> *_todayViewController;
    UIViewController<SBHSidebarProvider> *_sidebarViewController;
    SBSearchGesture *_searchGesture;
    id <SBRootFolderControllerAccessoryViewControllerDelegate> _accessoryViewControllerDelegate;
    double _effectiveSidebarVisibilityProgress;
    _SBRootFolderDockAnimationViewControllerWindow *_dockAnimationWindow;
    _SBRootFolderPageTransitionHandle *_currentTransitionHandle;
    id <SBRootFolderPageTransition> _searchGestureTransition;
    id <SBRootFolderPageTransition> _implicitScrollTransition;
    UIViewController *_portraitHeaderViewController;
}

+ (struct SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 pageWidth:(double)arg2 pages:(const long long *)arg3 pageCount:(unsigned long long)arg4 userInterfaceLayoutDirection:(long long)arg5 currentPageState:(long long)arg6;
+ (id)dockIconLocation;
+ (id)iconLocation;
+ (Class)_contentViewClass;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (Class)configurationClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *portraitHeaderViewController; // @synthesize portraitHeaderViewController=_portraitHeaderViewController;
@property(retain, nonatomic) id <SBRootFolderPageTransition> implicitScrollTransition; // @synthesize implicitScrollTransition=_implicitScrollTransition;
@property(retain, nonatomic) id <SBRootFolderPageTransition> searchGestureTransition; // @synthesize searchGestureTransition=_searchGestureTransition;
@property(retain, nonatomic) _SBRootFolderPageTransitionHandle *currentTransitionHandle; // @synthesize currentTransitionHandle=_currentTransitionHandle;
@property(nonatomic) _Bool managesStatusBarWidth; // @synthesize managesStatusBarWidth=_managesStatusBarWidth;
@property(retain, nonatomic) _SBRootFolderDockAnimationViewControllerWindow *dockAnimationWindow; // @synthesize dockAnimationWindow=_dockAnimationWindow;
@property(nonatomic) double effectiveSidebarVisibilityProgress; // @synthesize effectiveSidebarVisibilityProgress=_effectiveSidebarVisibilityProgress;
@property(nonatomic, getter=isSpotlightTransitioningFromBreadcrumb) _Bool spotlightTransitioningFromBreadcrumb; // @synthesize spotlightTransitioningFromBreadcrumb=_spotlightTransitioningFromBreadcrumb;
@property(nonatomic) __weak id <SBRootFolderControllerAccessoryViewControllerDelegate> accessoryViewControllerDelegate; // @synthesize accessoryViewControllerDelegate=_accessoryViewControllerDelegate;
@property(retain, nonatomic) SBSearchGesture *searchGesture; // @synthesize searchGesture=_searchGesture;
@property(readonly, nonatomic) UIViewController<SBHSidebarProvider> *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(readonly, nonatomic) UIViewController<SBHLegibility> *todayViewController; // @synthesize todayViewController=_todayViewController;
@property(readonly, nonatomic) UIViewController *pullDownSearchViewController; // @synthesize pullDownSearchViewController=_pullDownSearchViewController;
@property(readonly, nonatomic) _Bool showsDoneButtonWhileEditing; // @synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing;
@property(nonatomic) long long pageState; // @synthesize pageState=_pageState;
- (void)_setupDebugTapGestureRecognizerForDockIconListView:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)extraViews;
- (_Bool)shouldAnimateFirstTwoViewsAsOne;
- (_Bool)shouldAnimateLastTwoViewsAsOne;
- (id)extraViewsContainer;
- (id)dockIconListView;
- (id)_viewControllersToNotifyForViewObscuration;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)defaultTransitionForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionWillFinish:(id)arg1;
- (void)transitionWillReverse:(id)arg1;
- (void)transitionWillBegin:(id)arg1;
- (void)transitionContext:(id)arg1 updateTransitionProgress:(double)arg2;
- (void)searchGesture:(id)arg1 resetAnimated:(_Bool)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(_Bool)arg2;
- (void)pageTransitionHandle:(id)arg1 endPageStateTransitionSuccessfully:(_Bool)arg2;
- (void)pageTransitionHandle:(id)arg1 updateCurrentPageStateTransitionToProgress:(double)arg2;
- (void)didEndTransitionFromState:(long long)arg1 toState:(long long)arg2 successfully:(_Bool)arg3;
- (void)willEndTransitionToState:(long long)arg1 successfully:(_Bool)arg2;
- (void)didContinueTransitionToState:(long long)arg1 progress:(double)arg2;
- (void)willBeginTransitionToState:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (_Bool)canTransitionPageStateToState:(long long)arg1;
- (id)beginPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (double)pageTransitionProgress;
@property(readonly, nonatomic) long long destinationPageState;
@property(readonly, nonatomic, getter=isTransitioningPageState) _Bool transitioningPageState;
- (_Bool)isTransitiongBetweenPageStateVerticalGroups;
- (_Bool)isTransitioningBetweenHorizontalPageStates;
- (double)_todayViewVisibilityProgress;
- (_Bool)isTransitioningBetweenIconPageAndTodayPage;
- (_Bool)isTransitioningBetweenIconAndTodayView;
@property(readonly, nonatomic, getter=isTodayViewTransitioning) _Bool todayViewTransitioning;
@property(readonly, nonatomic, getter=isTodayViewVisibleOrTransitionDestination) _Bool todayViewVisibleOrTransitionDestination;
@property(nonatomic, getter=isTodayViewPageHidden) _Bool todayViewPageHidden; // @dynamic todayViewPageHidden;
- (_Bool)isTodayViewOrTodayViewSearchVisible;
@property(readonly, nonatomic, getter=isTodayViewVisible) _Bool todayViewVisible;
@property(readonly, nonatomic, getter=isOnTodayPage) _Bool todayPage;
- (double)_anySearchVisibilityProgress;
@property(readonly, nonatomic, getter=isTodayViewSearchVisibleOrTransitioning) _Bool todayViewSearchVisibleOrTransitioning;
@property(readonly, nonatomic, getter=isTodayViewSearchTransitioning) _Bool todayViewSearchTransitioning;
@property(readonly, nonatomic, getter=isTodayViewSearchVisible) _Bool todayViewSearchVisible;
@property(readonly, nonatomic, getter=isPullDownSearchVisibleOrTransitioning) _Bool pullDownSearchVisibleOrTransitioning;
@property(readonly, nonatomic, getter=isPullDownSearchTransitioning) _Bool pullDownSearchTransitioning;
@property(readonly, nonatomic, getter=isPullDownSearchVisible) _Bool pullDownSearchVisible;
@property(readonly, nonatomic, getter=isAnySearchVisibleOrTransitioning) _Bool anySearchVisibleOrTransitioning;
- (_Bool)isAnySearchTransitioning;
@property(readonly, nonatomic, getter=isAnySearchVisible) _Bool anySearchVisible;
- (double)visibilityProgressTowardPageStateMatchingTest:(CDUnknownBlockType)arg1;
- (void)_checkForImproperScrollOffsetForPageState;
- (struct SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1;
- (id)updateStateTransitionsDuringScrollingScrollView:(id)arg1 pageBounceComparator:(CDUnknownFunctionPointerType)arg2;
- (void)dismissSpotlightAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentSpotlightAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performDefaultPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_reduceTransparencyChanged;
- (void)rootFolderView:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;
- (void)rootFolderView:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderView:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderView:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg1;
- (id)backgroundViewForDockForRootFolderView:(id)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderView:(id)arg1;
- (double)externalDockHeightForRootFolderView:(id)arg1;
- (double)maxExternalDockHeightForRootFolderView:(id)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg1;
- (void)rootFolderView:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(struct CGPoint)arg2;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2;
- (void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewDidScroll:(id)arg1;
- (void)folderViewWillEndDragging:(id)arg1;
- (void)folderViewWillBeginDragging:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderViewWillUpdatePageDuringScrolling:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_todayViewPageIsVisibleForOrientation:(long long)arg1;
- (void)_configureTodayViewPageForOrientation:(long long)arg1;
- (void)updateViewsAfterOrientationChange;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (void)_configureAppStatusBarInsetsForOrientation:(long long)arg1;
- (void)configureAppStatusBarInsets;
- (void)_configureAppStatusBarInsetsAnimated:(_Bool)arg1;
- (void)_configureViewForOrientationWithoutAnimation:(long long)arg1;
- (void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1;
- (void)_configureDockViewForOrientationDuringAnimation:(long long)arg1;
- (_Bool)_dockLayoutReversedForInterfaceOrientation:(long long)arg1;
- (unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (_Bool)_isDockSwitchedForOrientation:(long long)arg1;
- (void)_removeSidebarViewControllerAppearStateOverrideAssertion:(id)arg1;
- (id)beginOverridingSidebarViewControllerAppearanceStateToRemainDisappearedForReason:(id)arg1;
@property(readonly, nonatomic, getter=isSidebarVisibilityGestureActive) _Bool sidebarVisibilityGestureActive;
@property(nonatomic, getter=isSidebarPinned) _Bool sidebarPinned;
@property(readonly, nonatomic, getter=isSidebarEffectivelyVisible) _Bool sidebarEffectivelyVisible;
@property(readonly, nonatomic, getter=isSidebarVisible) _Bool sidebarVisible;
@property(nonatomic) double sidebarVisibilityProgress;
@property(readonly, nonatomic) long long sidebarPageIndex;
@property(readonly, nonatomic) long long todayViewPageIndex;
- (void)setParallaxDisabled:(_Bool)arg1 forReason:(id)arg2;
@property(readonly, nonatomic) SBFParallaxSettings *parallaxSettings;
@property(readonly, nonatomic) UIView *searchBackdropView;
@property(readonly, nonatomic) UIView *searchableTodayWrapperView;
@property(nonatomic) _Bool allowsAutoscrollToTodayView;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (void)enumeratePageStateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)removePageStateObserver:(id)arg1;
- (void)addPageStateObserver:(id)arg1;
- (id)viewControllerForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2;
- (id)viewControllerForPageState:(long long)arg1;
- (void)doneButtonTriggered:(id)arg1;
- (_Bool)suspendsWallpaperAnimationWhileOpen;
- (void)prepareToTearDown;
- (void)prepareToClose;
- (void)prepareToOpen;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
- (_Bool)isDockVisible;
@property(readonly, copy, nonatomic) NSSet *nonDockPresentedIconLocations;
@property(readonly, nonatomic, getter=isDockPinnedForRotation) _Bool dockPinnedForRotation;
@property(readonly, nonatomic, getter=isDockExternal) _Bool dockExternal;
@property(readonly, nonatomic) double dockHeight;
@property(nonatomic) unsigned long long dockEdge;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
- (id)dockListView;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1;
- (void)setIdleText:(id)arg1;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double spotlightFirstIconRowOffset;
- (void)setSidebarViewController:(id)arg1;
- (void)setTodayViewController:(id)arg1;
- (void)setPullDownSearchViewController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *folderControllers;
@property(nonatomic) __weak id <SBRootFolderControllerDelegate> folderDelegate; // @dynamic folderDelegate;
- (unsigned long long)_depth;
- (id)rootFolderViewIfLoaded;
@property(readonly, nonatomic) SBRootFolderView *rootFolderView;
- (void)orientationDidChange:(long long)arg1;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)disablesScrollingWhileIconDragIsDropping;
- (_Bool)canAcceptFolderIconDrags;
- (_Bool)closesAfterDragExits;
- (_Bool)shouldOpenFolderIcon:(id)arg1;
- (id)_makeContentViewWithConfiguration:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView; // @dynamic contentView;
@property(nonatomic) long long currentPageIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) UIViewController *deepestFolderController;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(retain, nonatomic) SBRootFolder *folder; // @dynamic folder;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache;
@property(readonly, nonatomic, getter=isScrollTracking) _Bool scrollTracking;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
@property(readonly) Class superclass;

@end

