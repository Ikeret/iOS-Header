//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SRPagerView, UIView;

@protocol SRPagerViewDelegate <NSObject>
- (void)pagerViewDidChangeTransitionState:(SRPagerView *)arg1;
- (void)pagerView:(SRPagerView *)arg1 didActivatePageView:(UIView *)arg2 oldActivePageView:(UIView *)arg3;
@end

