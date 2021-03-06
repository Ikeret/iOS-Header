//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject
{
    _Bool _animating;
    NSString *_routeUID;
    NSString *_batteryText;
    NSString *_pairedDeviceText;
    unsigned long long _currentVisibleTextType;
}

@property(nonatomic) unsigned long long currentVisibleTextType; // @synthesize currentVisibleTextType=_currentVisibleTextType;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(copy, nonatomic) NSString *pairedDeviceText; // @synthesize pairedDeviceText=_pairedDeviceText;
@property(copy, nonatomic) NSString *batteryText; // @synthesize batteryText=_batteryText;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void).cxx_destruct;
- (void)resetForNewRoute;
- (unsigned long long)_nextAvailableVisibleTextType;
- (id)_stringForVisibleTextType:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *stringForCurrentVisibleTextType;
- (void)transitionToNextAvailableVisibleTextType;
@property(readonly, nonatomic) _Bool hasVisibleTextTypeToTransitionTo;
@property(readonly, nonatomic) _Bool hasVisibleTextTypeToShow;

@end

