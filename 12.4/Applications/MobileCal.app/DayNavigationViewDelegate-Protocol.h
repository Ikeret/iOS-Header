//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DayNavigationView, NSDate;

@protocol DayNavigationViewDelegate <NSObject>
- (void)dayNavigationView:(DayNavigationView *)arg1 selectedDateChanged:(NSDate *)arg2;
- (void)dayNavigationViewFailedToSelectDate;
- (_Bool)dayNavigationViewAllowedToChangeSelectedDate;
@end

