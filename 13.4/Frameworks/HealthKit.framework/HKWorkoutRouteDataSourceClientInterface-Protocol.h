//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKQuantity, HKWorkoutRoute;

@protocol HKWorkoutRouteDataSourceClientInterface <NSObject>
- (void)clientRemote_didUpdateAltitude:(HKQuantity *)arg1;
- (void)clientRemote_didUpdateRoute:(HKWorkoutRoute *)arg1;
- (void)clientRemote_didUpdateElevation:(HKQuantity *)arg1;
@end

