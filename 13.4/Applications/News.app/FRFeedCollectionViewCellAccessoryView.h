//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FRFeedCollectionViewCellActivityIndicatorViewDelegate-Protocol.h"
#import "TUMotionManagerObserver-Protocol.h"

@class FRFeedCollectionViewCellActivityIndicatorView, FRFeedCollectionViewCellAgeOrSponsoredLabel, NEPremiumBadgeView, NSString, SVAdPrivacyButton, UIColor, UIFont, UILabel;
@protocol FCHeadlineProviding, FRFeedCollectionViewCellAccessoryViewDelegate;

@interface FRFeedCollectionViewCellAccessoryView : UIView <FRFeedCollectionViewCellActivityIndicatorViewDelegate, TUMotionManagerObserver>
{
    id <FRFeedCollectionViewCellAccessoryViewDelegate> _delegate;
    FRFeedCollectionViewCellAgeOrSponsoredLabel *_ageOrSponsoredLabel;
    UILabel *_subscriptionLabel;
    long long _badge;
    FRFeedCollectionViewCellActivityIndicatorView *_activityIndicator;
    NEPremiumBadgeView *_premiumBadgeView;
    long long _cellType;
    long long _alignment;
    UIFont *_accessoryFont;
    double _accessoryFontLineHeight;
    UIColor *_accessoryFontColor;
    UIColor *_accessoryIconColor;
    SVAdPrivacyButton *_adMarkerButton;
    id <FCHeadlineProviding> _populatedHeadline;
    struct CGRect _accessoryViewFrame;
    struct CGRect _imageViewFrame;
    struct CGRect _titleViewFrame;
}

+ (id)fr_premiumSubscriptionGlyph;
+ (id)defaultDarkStyleAccessoryFontColor;
+ (id)defaultUnspecifiedStyleAccessoryFontColor;
+ (id)defaultAccessoryFontColor;
+ (id)defaultTextFont;
+ (id)subscriptionOnlyTextFontWithSize:(double)arg1;
+ (_Bool)_showTileProminenceScore;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FCHeadlineProviding> populatedHeadline; // @synthesize populatedHeadline=_populatedHeadline;
@property(nonatomic) SVAdPrivacyButton *adMarkerButton; // @synthesize adMarkerButton=_adMarkerButton;
@property(nonatomic) struct CGRect titleViewFrame; // @synthesize titleViewFrame=_titleViewFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
@property(retain, nonatomic) UIColor *accessoryIconColor; // @synthesize accessoryIconColor=_accessoryIconColor;
@property(retain, nonatomic) UIColor *accessoryFontColor; // @synthesize accessoryFontColor=_accessoryFontColor;
@property(nonatomic) double accessoryFontLineHeight; // @synthesize accessoryFontLineHeight=_accessoryFontLineHeight;
@property(retain, nonatomic) UIFont *accessoryFont; // @synthesize accessoryFont=_accessoryFont;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NEPremiumBadgeView *premiumBadgeView; // @synthesize premiumBadgeView=_premiumBadgeView;
@property(readonly, nonatomic) FRFeedCollectionViewCellActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) long long badge; // @synthesize badge=_badge;
@property(readonly, nonatomic) UILabel *subscriptionLabel; // @synthesize subscriptionLabel=_subscriptionLabel;
@property(retain, nonatomic) FRFeedCollectionViewCellAgeOrSponsoredLabel *ageOrSponsoredLabel; // @synthesize ageOrSponsoredLabel=_ageOrSponsoredLabel;
@property(nonatomic) id <FRFeedCollectionViewCellAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)motionManager:(id)arg1 motionEnabled:(_Bool)arg2;
- (void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2;
- (void)feedCollectionViewCellActivityIndicatorViewDidChangeState:(id)arg1;
- (void)_adMarkerWasPressed:(id)arg1;
- (void)setShared:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDisliked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLiked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFavorited:(_Bool)arg1 animated:(_Bool)arg2;
- (id)attributedStoryStringForPopulatedHeadline;
- (id)getAttributedSubscriptionStringWithText:(id)arg1;
- (id)sponsoredTextForNativeAdWithHeadline:(id)arg1;
- (void)populateWithHeadline:(id)arg1 badge:(long long)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

