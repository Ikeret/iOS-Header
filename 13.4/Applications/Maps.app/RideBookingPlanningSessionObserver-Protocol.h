//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsSessionObserver-Protocol.h"

@class Result, RideBookingPlanningSession, RideBookingRideOptionState;

@protocol RideBookingPlanningSessionObserver <MapsSessionObserver>
- (void)RideBookingPlanningSession:(RideBookingPlanningSession *)arg1 rideOptionStateDidChange:(RideBookingRideOptionState *)arg2;
- (void)RideBookingPlanningSession:(RideBookingPlanningSession *)arg1 didFinishResolvingWaypointSet:(Result *)arg2;
@end

