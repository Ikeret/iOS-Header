//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/DevicePINController.h>

#import <PassKitUI/DevicePINControllerDelegate-Protocol.h>

@class NSString, PKPasscodeUpgradeFlowController;

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate>
{
    PKPasscodeUpgradeFlowController *_flowController;
    _Bool _viewHasAppeared;
}

- (void).cxx_destruct;
- (_Bool)requiresKeyboard;
- (id)pinInstructionsPrompt;
- (id)stringsBundle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithPasscodeUpgradeFlowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

