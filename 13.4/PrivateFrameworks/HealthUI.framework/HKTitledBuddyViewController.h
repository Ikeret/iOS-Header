//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKTitledBuddyHeaderViewDelegate-Protocol.h>

@class HKTitledLogoBuddyHeaderView, NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIStackView, UIVisualEffectView;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate>
{
    UIScrollView *_scrollView;
    UIStackView *_bodyStackView;
    UIVisualEffectView *_anchoredButtonContainerView;
    UIStackView *_containerStackView;
    HKTitledLogoBuddyHeaderView *_header;
    NSArray *_buttons;
    NSArray *_buttonStackConstraints;
    UIActivityIndicatorView *_loadingIndicator;
}

+ (id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_anchoredButtonTapped:(id)arg1;
- (void)buttonAtIndexTapped:(long long)arg1;
- (void)_createAnchoredButtons;
@property(readonly, nonatomic) NSArray *buttons;
- (id)headerView;
- (void)linkButtonTapped:(id)arg1;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (id)_createHeaderView;
- (void)reloadViews;
- (_Bool)shouldHideNavigationBar;
- (id)bottomAnchoredButtons;
- (id)subsequentViews;
- (id)linkButtonTitle;
- (void)updateBodyTextAttributesWithMutableString:(id)arg1;
- (long long)bodyTextAlignment;
- (id)bodyString;
- (id)titleString;
- (id)titleImage;
- (_Bool)shouldCustomizeNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

