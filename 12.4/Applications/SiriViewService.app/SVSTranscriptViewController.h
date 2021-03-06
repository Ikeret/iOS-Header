//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFQueueDelegate-Protocol.h"
#import "SVSSuggestionsViewControllerDelegate-Protocol.h"
#import "SVSTranscriptDataSource-Protocol.h"
#import "SVSTranscriptDelegate-Protocol.h"
#import "SVSTranscriptViewDelegate-Protocol.h"
#import "SiriUIAceObjectViewControllerDelegate-Protocol.h"
#import "SiriUIAceObjectViewControllerDelegatePrivate-Protocol.h"
#import "SiriUISnippetViewControllerDelegate-Protocol.h"
#import "SiriUISnippetViewControllerDelegatePrivate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SAUIGetResponseAlternativesPlayback, SVSSuggestionsViewController, SVSTranscript, SVSTranscriptAnimationQueue, SVSTranscriptFlowLayout, SVSTranscriptView, SiriUITranscriptItem, UITapGestureRecognizer;
@protocol SVSTranscriptViewControllerDataSource, SVSTranscriptViewControllerDelegate, SiriUIViewController;

@interface SVSTranscriptViewController : UIViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, SVSTranscriptViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long _updateAnimationCount;
    _Bool _viewIsDisappearing;
    _Bool _isWaitingForSpeechStartPoint;
    _Bool _initialSpeechRecordingDidEnd;
    unsigned long long _displayedTranscriptItemCount;
    double _firstItemTopPadding;
    double _previousContentYOffset;
    NSMutableSet *_controllersTrackingScrollingEvent;
    double _contentOffsetPriorToDraggingY;
    UIViewController *_viewControllerToCallViewDidAppear;
    SAUIGetResponseAlternativesPlayback *_lastPlaybackCommand;
    long long _correctionScreenItemIndex;
    CDStruct_a82615c4 _keyboardInfo;
    long long _currentRequestSource;
    _Bool _viewIsInViewHierarchy;
    _Bool _didLoadConversationList;
    _Bool _showsTranscriptEndWhenVisible;
    id <SVSTranscriptViewControllerDataSource> _dataSource;
    id <SVSTranscriptViewControllerDelegate> _delegate;
    SVSSuggestionsViewController *_suggestionsViewController;
    SVSTranscriptFlowLayout *_layout;
    SVSTranscript *_transcript;
    SVSTranscriptAnimationQueue *_animationQueue;
    SVSTranscriptAnimationQueue *_pinAnimationQueue;
    double _lastAnimationTime;
    double _lastPinAnimationTime;
    double _currentPinMinimumDuration;
    SiriUITranscriptItem *_currentPin;
    NSMutableSet *_identifiersOfItemsWithPendingActions;
    NSMutableSet *_identifiersOfItemsWithFinishedActions;
    UIViewController<SiriUIViewController> *_editingViewController;
    UITapGestureRecognizer *_editingEndGestureRecognizer;
    NSIndexPath *_indexPathForPendingCellToAnimate;
    double _lastTranscriptDragStartTime;
    double _lastTranscriptEditingStartTime;
    NSMutableDictionary *_displayDateByTranscriptIdentifier;
}

@property(readonly, nonatomic, getter=_displayDateByTranscriptIdentifier) NSMutableDictionary *displayDateByTranscriptIdentifier; // @synthesize displayDateByTranscriptIdentifier=_displayDateByTranscriptIdentifier;
@property(nonatomic, getter=_lastTranscriptEditingStartTime, setter=_setLastTranscriptEditingStartTime:) double lastTranscriptEditingStartTime; // @synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime;
@property(nonatomic, getter=_lastTranscriptDragStartTime, setter=_setLastTranscriptDragStartTime:) double lastTranscriptDragStartTime; // @synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime;
@property(retain, nonatomic, getter=_indexPathForPendingCellToAnimate, setter=_setIndexPathForPendingCellToAnimate:) NSIndexPath *indexPathForPendingCellToAnimate; // @synthesize indexPathForPendingCellToAnimate=_indexPathForPendingCellToAnimate;
@property(nonatomic, getter=_showsTranscriptEndWhenVisible, setter=_setShowsTranscriptEndWhenVisible:) _Bool showsTranscriptEndWhenVisible; // @synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible;
@property(retain, nonatomic, getter=_editingEndGestureRecognizer, setter=_setEditingEndGestureRecognizer:) UITapGestureRecognizer *editingEndGestureRecognizer; // @synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer;
@property(retain, nonatomic, getter=_editingViewController, setter=_setEditingViewController:) UIViewController<SiriUIViewController> *editingViewController; // @synthesize editingViewController=_editingViewController;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithFinishedActions) NSMutableSet *identifiersOfItemsWithFinishedActions; // @synthesize identifiersOfItemsWithFinishedActions=_identifiersOfItemsWithFinishedActions;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithPendingActions) NSMutableSet *identifiersOfItemsWithPendingActions; // @synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions;
@property(retain, nonatomic, getter=_currentPin, setter=_setCurrentPin:) SiriUITranscriptItem *currentPin; // @synthesize currentPin=_currentPin;
@property(nonatomic, getter=_currentPinMinimumDuration, setter=_setCurrentPinMinimumDuration:) double currentPinMinimumDuration; // @synthesize currentPinMinimumDuration=_currentPinMinimumDuration;
@property(nonatomic, getter=_lastPinAnimationTime, setter=_setLastPinAnimationTime:) double lastPinAnimationTime; // @synthesize lastPinAnimationTime=_lastPinAnimationTime;
@property(nonatomic, getter=_lastAnimationTime, setter=_setLastAnimationTime:) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimationTime;
@property(readonly, nonatomic, getter=_pinAnimationQueue) SVSTranscriptAnimationQueue *pinAnimationQueue; // @synthesize pinAnimationQueue=_pinAnimationQueue;
@property(readonly, nonatomic, getter=_animationQueue) SVSTranscriptAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic, getter=_didLoadConversationList, setter=_setDidLoadConversationList:) _Bool didLoadConversationList; // @synthesize didLoadConversationList=_didLoadConversationList;
@property(readonly, nonatomic, getter=_transcript) SVSTranscript *transcript; // @synthesize transcript=_transcript;
@property(readonly, nonatomic, getter=_layout) SVSTranscriptFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic, getter=_suggestionsViewController) SVSSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic, getter=_viewIsInViewHierarchy, setter=_setViewIsInViewHierarchy:) _Bool viewIsInViewHierarchy; // @synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)createPunchOutEvent:(id)arg1 URL:(id)arg2 appID:(id)arg3;
- (void)_logMetricsForSnippetAtIndexPath:(id)arg1;
- (void)_logMetricsForVisibleSnippets;
- (id)mostRecentMetricsContext;
- (void)siriStoppedFingerprintingMusic;
- (void)siriBeganFingerprintingMusic;
- (void)showSpeechAlternatives:(id)arg1;
- (void)handleGetResponseAlternativesPlayback:(id)arg1;
- (void)changeUtterance:(id)arg1;
- (void)_animateSnippetConfirmation:(id)arg1;
- (void)_animateSnippetCancellation:(id)arg1;
- (id)_tossAnimationForCell;
- (void)_animateSnippetTossInCell:(id)arg1;
- (void)_performNextAnimation;
- (_Bool)_shouldConditionallyPinToTranscriptItem:(id)arg1;
- (void)_performNextPinAnimation;
- (void)_processPinAnimationQueue;
- (void)_scheduleNextPinAnimationAfterDelay:(double)arg1;
- (void)_processAnimationQueue;
- (void)_scheduleNextAnimationAfterDelay:(double)arg1;
- (double)_nextPinAnimationTime;
- (double)_nextAnimationTime;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)animateTranscriptWithUpdates:(CDUnknownBlockType)arg1;
- (double)_pinningDifferenceForTranscriptItem:(id)arg1;
- (double)_topPaddingForTranscriptItem:(id)arg1;
- (double)_topPaddingForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1;
- (void)_appendExtraSpaceToContentInsetsWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_appendExtraSpaceToContentInsets;
- (void)_pinTranscriptToItem:(id)arg1 animated:(_Bool)arg2;
- (void)_pinTranscriptToCurrentPin;
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;
- (void)pinItemWithIdentifier:(id)arg1;
- (void)_tappedOutsideEditingView:(id)arg1;
- (void)_teardownEditingViewController:(id)arg1;
- (void)_setupEditingForViewController:(id)arg1;
- (id)_indexPathForFirstResponder;
- (void)_setKeyboardInfo:(CDStruct_a82615c4)arg1;
- (id)_indexPathForItemAtIndex:(long long)arg1;
- (id)_indexPathsForItemsAtIndexes:(id)arg1;
- (id)_transcriptItemForSiriViewController:(id)arg1;
- (void)_registerReusableView:(Class)arg1;
- (id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1;
- (id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1;
- (id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1;
- (id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1;
- (id)_controllerForItemIndex:(long long)arg1;
- (Class)aceControllerCellClass;
- (Class)snippetControllerCellClass;
- (double)_expectedWidthForItemIndex:(unsigned long long)arg1;
- (_Bool)_itemIndexIsInset:(unsigned long long)arg1;
- (struct UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1;
- (struct UIEdgeInsets)_transcriptItemLayoutMargins;
- (void)resumeTouchesIfNecessary;
- (void)cancelTouchesIfNecessary;
- (void)_updateKeylinesForScrollView:(id)arg1;
- (void)_processHidingSnippetView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)notifySnippetsEndDraggingEventForScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (double)_heightForFooterAtItemIndex:(long long)arg1;
- (double)_heightForHeaderAtItemIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)transcriptView:(id)arg1 didSetContentSize:(struct CGSize)arg2;
- (void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;
- (void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;
- (void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;
- (void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;
- (void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;
- (id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1;
- (void)transcript:(id)arg1 didDelayPresentationOfItemsWithConversationItemIdentifiers:(id)arg2;
- (void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;
- (void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;
- (void)_removeConversationItemWithIdentifier:(id)arg1;
- (void)_removeConversationItemsWithIdentifiers:(id)arg1;
- (void)_updateTitle;
- (id)viewControllerDelegateForTranscript:(id)arg1;
- (_Bool)transcript:(id)arg1 itemIsRestoredAtIndex:(long long)arg2;
- (long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2;
- (id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2;
- (_Bool)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2;
- (id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2;
- (id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2;
- (id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2;
- (id)_aceCommandIdentifierForItemAtIndex:(long long)arg1;
- (id)_dialogPhaseForItemAtIndex:(long long)arg1;
- (id)_conversationItemAtIndex:(long long)arg1;
- (long long)numberOfItemsInTranscript:(id)arg1;
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;
- (double)contentWidthForSuggestionsViewController:(id)arg1;
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;
- (void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (void)suggestionsViewDidShowSuggestions:(id)arg1;
- (void)cancelSpeakingForSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_speakText:(id)arg1 isPhonetic:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)boundingWidthForSnippetViewController:(id)arg1;
- (unsigned long long)navigationIndexOfSnippetViewController:(id)arg1;
- (id)siriEnabledAppListForSiriViewController:(id)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)siriViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (id)persistentStoreForSiriViewController:(id)arg1;
- (id)persistentDataStoreForSiriViewController:(id)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
- (double)statusBarHeightForSiriViewController:(id)arg1;
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;
- (double)siriViewControllerExpectedWidth:(id)arg1;
- (_Bool)_inTextInputMode;
- (_Bool)inTextInputModeForSuggestionsViewController:(id)arg1;
- (_Bool)inTextInputModeForSiriViewController:(id)arg1;
- (void)siriViewControllerHeightDidChange:(id)arg1;
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;
- (id)localeForSiriViewController:(id)arg1;
- (void)removeSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
- (void)siriViewControllerDidEndEditing:(id)arg1;
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;
- (void)siriViewControllerWillBeginEditing:(id)arg1;
- (void)siriViewControllerRequestToPin:(id)arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;
- (void)showCorrectionScreenForSiriViewController:(id)arg1;
- (_Bool)shouldEnableInteractionForSiriViewController:(id)arg1;
- (void)siriViewControllerDidResignFirstResponder:(id)arg1;
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
- (_Bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
- (id)_domainObjectStore;
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)siriViewController:(id)arg1 openURL:(id)arg2;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
- (_Bool)_containStartRequest:(id)arg1;
- (_Bool)logTranscriptContents;
- (id)requestContext;
- (void)siriDidDetectSpeechStartpoint;
- (void)endEditingAndCorrect:(_Bool)arg1;
- (void)siriRequestWillStart;
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)reloadData;
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)restoreTranscriptPositionAnimated:(_Bool)arg1;
- (void)saveTranscriptPosition;
- (void)showTranscriptEnd;
- (void)showTranscriptStart;
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (struct CGPoint)_maxContentOffset;
- (double)_contentHeight;
- (struct CGPoint)_contentOffset;
@property(readonly, nonatomic) NSUUID *identifierOfLastDisplayedItem;
- (void)_showSuggestionsIfNecessary;
- (void)_stopShowingListeningNudgeIfNecessary;
- (void)_showListeningNudgeIfNecessary;
- (void)keyboardHeightDidChange;
- (void)statusBarFrameDidChange;
- (double)_bottomContentOverlayHeight;
- (double)_bottomMarginHeight;
- (_Bool)_isKeyboardVisibleAboveSiriStatusView;
- (void)_updateViewTopMarginHeight;
- (void)_updateNavigationBarFrame;
- (_Bool)_isNavigationBarHidden;
- (id)_navigationBar;
- (void)_updateStatusBarRelatedAttributes;
- (struct CGRect)_statusBarFrame;
- (id)_conversationItemList;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;
- (void)siriDidDeactivate;
- (_Bool)currentSnippetContainsFooterButtons;
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;
- (void)siriWillActivateFromSource:(long long)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_runSirilandTransitionTestWithIterations:(int)arg1;
- (_Bool)_isRootViewController;
- (double)_navigationControllerContentOffsetAdjustment;
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;
- (id)_collectionView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)invalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)svscvc_setItemIdentifier:(id)arg1;
- (id)svscvc_itemIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptView *view; // @dynamic view;

@end

