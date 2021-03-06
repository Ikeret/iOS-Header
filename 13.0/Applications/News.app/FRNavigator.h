//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSBridgedNewsActivityNavigator;

@interface FRNavigator : NSObject
{
    TSBridgedNewsActivityNavigator *_navigator;
}

+ (id)shared;
@property(readonly, nonatomic) TSBridgedNewsActivityNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (id)createActivitySenderWithViewController:(id)arg1 sender:(id)arg2;
- (id)findFirstClass:(Class)arg1 inViewController:(id)arg2;
- (id)createNavigationActivityDataForViewController:(id)arg1 sender:(id)arg2;
- (void)navigateToMagazineFeed;
- (void)navigateToViewController:(id)arg1 sender:(id)arg2;
- (id)initWithApplication:(id)arg1;

@end

