//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Weather/NSObject-Protocol.h>

@class City;

@protocol CityUpdateObserver <NSObject>

@optional
- (void)cityDidFinishWeatherUpdate:(City *)arg1;
- (void)cityDidStartWeatherUpdate:(City *)arg1;
@end

