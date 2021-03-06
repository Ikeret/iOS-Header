//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface B238SetupShareSettingsViewController : B238SetupBaseViewController
{
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_agreeButton;
    UILabel *_titleLabel;
    UIImageView *_icon1ImageView;
    UIImageView *_siriIcon;
    UIImageView *_musicIcon;
    UIImageView *_icon4ImageView;
    UILabel *_infoLabel;
    UILabel *_appleIDLabel;
    UILabel *_appleIDAccount;
    UILabel *_iTunesLabel;
    UILabel *_iTunesAccount;
    NSString *_iCloudUserID;
    NSString *_iTunesUserID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *iTunesUserID; // @synthesize iTunesUserID=_iTunesUserID;
@property(copy, nonatomic) NSString *iCloudUserID; // @synthesize iCloudUserID=_iCloudUserID;
- (void)handleDismissButton:(id)arg1;
- (void)handleAgreeButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

