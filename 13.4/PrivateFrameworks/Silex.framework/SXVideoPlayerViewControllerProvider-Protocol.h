//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSURL, SXVideoPlayerViewControllerResponse;

@protocol SXVideoPlayerViewControllerProvider <NSObject>
@property(nonatomic) _Bool presentedAndAppeared;
- (SXVideoPlayerViewControllerResponse *)videoPlayerViewControllerForURL:(NSURL *)arg1 receiveOwnershipBlock:(void (^)(SXVideoPlayerViewController *))arg2;
@end

