//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRArticleTransitionAnimator.h"

@class UIView;

@interface FRArticleCloseTransitionAnimator : FRArticleTransitionAnimator
{
    UIView *_thumbnailTransitionContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *thumbnailTransitionContainer; // @synthesize thumbnailTransitionContainer=_thumbnailTransitionContainer;
- (void)videoAnimation;
- (void)thumbnailAnimation;
- (void)fullWidthZoomOutAnimation;
- (void)focalThumbnailAnimationWithThumbnailFrame:(struct CGRect)arg1 thumbnailContentFrame:(struct CGRect)arg2 componentViewFrame:(struct CGRect)arg3 componentViewContentFrame:(struct CGRect)arg4;
- (void)articleOutFeedInAnimation;
- (void)topOfFeedAnimation;
- (void)navigationBarAnimations;
- (void)prepareTransitionWithFeedViewController:(id)arg1 articleViewController:(id)arg2 containerView:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (double)animationDuration;
- (unsigned long long)transitionType;

@end

