//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBCommandTabViewController, SBDisplayItem;

@protocol SBCommandTabViewControllerDelegate <NSObject>
- (void)viewControllerWantsDismissal:(SBCommandTabViewController *)arg1;
- (void)viewController:(SBCommandTabViewController *)arg1 selectedApplicationWithDisplayItem:(SBDisplayItem *)arg2;
@end

