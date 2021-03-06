//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PRXCardContentProviding-Protocol.h"
#import "PRXPullDismissalProvider-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, PRXCardContentView, PRXPullDismissalInteractionDriver, PRXTransitioningController;

@interface PRXCardContentViewController : UIViewController <UIScrollViewDelegate, PRXPullDismissalProvider, PRXCardContentProviding>
{
    PRXTransitioningController *_transitionController;
    PRXPullDismissalInteractionDriver *_pullDismissalInteractionDriver;
    PRXCardContentView *_contentView;
    NSString *_subtitle;
    unsigned long long _dismissalType;
    NSArray *_actions;
}

+ (Class)contentViewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) unsigned long long dismissalType; // @synthesize dismissalType=_dismissalType;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) PRXCardContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver; // @synthesize pullDismissalInteractionDriver=_pullDismissalInteractionDriver;
@property(readonly, nonatomic) _Bool allowsPullToDismiss;
@property(readonly, nonatomic) long long cardStyle;
- (void)hideActivityIndicator;
- (void)showActivityIndicatorWithStatus:(id)arg1;
- (void)_updateActionButtons;
- (void)addAction:(id)arg1;
- (void)_tappedDismiss:(id)arg1;
- (void)_updateDismisalControls;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)setTitle:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

