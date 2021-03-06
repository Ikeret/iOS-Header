//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LightLevelObserver-Protocol.h"

@class NSString, SpeedLimitView;
@protocol NavSpeedLimitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface NavSpeedLimitViewController : UIViewController <LightLevelObserver>
{
    _Bool _hidden;
    id <NavSpeedLimitViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <NavSpeedLimitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2;
- (void)viewDidLoad;
@property(readonly, nonatomic) SpeedLimitView *speedLimitView;
- (void)loadView;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

