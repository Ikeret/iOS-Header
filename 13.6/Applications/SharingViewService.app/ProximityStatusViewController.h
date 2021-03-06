//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSLayoutConstraint, NSString, NSURL, NSUUID, SFDeviceDiscovery, UIButton, UIImageView, UILabel, UIView, _TtC18SharingViewService18SVSMediaPlayerView, _TtC18SharingViewService20SVSAdjustedImageView;

@interface ProximityStatusViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *titleLabel;
    NSLayoutConstraint *_cardHeightConstraint;
    NSString *_adjustmentsFileName;
    NSURL *_adjustmentsURL;
    _TtC18SharingViewService18SVSMediaPlayerView *_avView;
    _Bool _avPlaying;
    NSString *_movieStatusLoopName;
    NSURL *_avItemLoopURL;
    _TtC18SharingViewService20SVSAdjustedImageView *leftImageView;
    UIImageView *leftIndicatorImageView;
    UIImageView *leftExclamationPointImageView;
    UILabel *leftBatteryLabel;
    UIImageView *leftBatteryLevelImageView;
    UIImageView *leftBatteryShellImageView;
    UIImageView *leftBatteryChargeImageView;
    _TtC18SharingViewService20SVSAdjustedImageView *rightImageView;
    UIImageView *rightIndicatorImageView;
    UIImageView *rightExclamationPointImageView;
    UILabel *rightBatteryLabel;
    UIImageView *rightBatteryLevelImageView;
    UIImageView *rightBatteryShellImageView;
    UIImageView *rightBatteryChargeImageView;
    UIView *bothBatteryView;
    UILabel *bothBatteryLabel;
    UIImageView *bothBatteryLevelImageView;
    UIImageView *bothBatteryShellImageView;
    UIImageView *bothBatteryChargeImageView;
    UIView *caseBatteryView;
    _TtC18SharingViewService20SVSAdjustedImageView *caseImageView;
    UILabel *caseBatteryLabel;
    UIImageView *caseBatteryLevelImageView;
    UIImageView *caseBatteryShellImageView;
    UIImageView *caseBatteryChargeImageView;
    UIView *mainBatteryView;
    _TtC18SharingViewService20SVSAdjustedImageView *mainImageView;
    UILabel *mainBatteryLabel;
    UIImageView *mainBatteryLevelImageView;
    UIImageView *mainBatteryShellImageView;
    UIImageView *mainBatteryChargeImageView;
    UIButton *connectButton;
    UIButton *dismissButton;
    _Bool _connected;
    _Bool _connecting;
    SFDeviceDiscovery *_deviceDiscovery;
    NSUUID *_deviceIdentifier;
    long long _lastRSSI;
    long long _lastSmoothedRSSI;
    double _viewAppearedTime;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)_updateBatteryLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3;
- (void)_testHandler:(id)arg1;
- (void)_movieCleanup;
- (void)_movieStart;
- (void)_dismiss:(int)arg1;
- (void)_deviceLost:(id)arg1;
- (void)_deviceFound:(id)arg1;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleConnectButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

