//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSOptinViewController.h"

@class UIButton, UILabel;

@interface COSUnlockPlaceholderViewController : COSOptinViewController
{
    UIButton *_acceptButton;
    UIButton *_declineButton;
    UILabel *_footerLabel;
}

+ (_Bool)controllerNeedsToRun;
+ (_Bool)isMandatory;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (void).cxx_destruct;
- (void)okayButtonPressed:(id)arg1;
- (id)detailTitleString;
- (id)okayButtonTitle;
- (void)unlockPairingComplete:(id)arg1;
- (id)imageResource;
- (id)detailString;
- (id)titleString;
- (id)init;
- (_Bool)controllerAllowsNavigatingBackTo;

@end

