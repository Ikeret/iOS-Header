//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BPSRemoteWatchView, NSDictionary, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface WatchSetupViewController : SVSBaseViewController <LSApplicationWorkspaceObserverProtocol, UIGestureRecognizerDelegate>
{
    UIButton *_dismissButton;
    UILabel *_infoLabel;
    BPSRemoteWatchView *_imageView;
    UIButton *_pairButton;
    _Bool _pairing;
    UIView *_progressView;
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_progressLabel;
    int _testMode;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)_restoreWatchApp;
- (void)_launchWatchAppForPairing;
- (void)applicationsDidInstall:(id)arg1;
- (void)handleTapOutsideView:(id)arg1;
- (void)handlePairButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleDeviceSetupNotification:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

