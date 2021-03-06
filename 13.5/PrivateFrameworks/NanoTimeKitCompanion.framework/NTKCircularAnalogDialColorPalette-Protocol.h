//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class UIColor;

@protocol NTKCircularAnalogDialColorPalette <NSObject>
@property(readonly, nonatomic) _Bool isMulticolorPalette;
- (UIColor *)colorForCircularTicksForMinute:(unsigned long long)arg1;
- (UIColor *)colorForCircularTicksForHour:(unsigned long long)arg1;
- (UIColor *)circularDialFillColor;
- (UIColor *)circularDialSubtickColor;
- (UIColor *)circularDialTickColor;
@end

