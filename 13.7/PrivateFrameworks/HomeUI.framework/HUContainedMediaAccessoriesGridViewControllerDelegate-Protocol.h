//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUContainedMediaAccessoriesGridViewController, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUContainedMediaAccessoriesGridViewControllerDelegate <NSObject>

@optional
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForContainedMediaAccessoryGridViewController:(HUContainedMediaAccessoriesGridViewController *)arg1 item:(HFItem *)arg2;
@end

