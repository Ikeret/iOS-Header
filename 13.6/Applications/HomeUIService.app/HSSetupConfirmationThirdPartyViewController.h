//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUSetupAccessoryOBWelcomeController.h>

#import "HSSetupStep-Protocol.h"
#import "HUPreloadableViewController-Protocol.h"

@class HFDiscoveredAccessory, HULinkedApplicationLibraryItem, NAFuture, NSString;
@protocol HSSetupStepDelegate;

@interface HSSetupConfirmationThirdPartyViewController : HUSetupAccessoryOBWelcomeController <HSSetupStep, HUPreloadableViewController>
{
    id <HSSetupStepDelegate> _delegate;
    HFDiscoveredAccessory *_discoveredAccessory;
    NSString *_bundleID;
    HULinkedApplicationLibraryItem *_linkedApplicationItem;
}

+ (id)_descriptionForAppName:(id)arg1 appPublisher:(id)arg2 accessoryName:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) HULinkedApplicationLibraryItem *linkedApplicationItem; // @synthesize linkedApplicationItem=_linkedApplicationItem;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessory; // @synthesize discoveredAccessory=_discoveredAccessory;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelPressed:(id)arg1;
- (void)_continuePressed:(id)arg1;
- (id)hu_preloadContent;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly, nonatomic) long long setupState;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4;
- (id)initWithDiscoveredAccessory:(id)arg1 bundleID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

