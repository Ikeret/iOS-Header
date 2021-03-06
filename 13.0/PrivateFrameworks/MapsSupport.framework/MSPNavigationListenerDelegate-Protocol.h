//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPNavigationListener, NSError;

@protocol MSPNavigationListenerDelegate <NSObject>
- (void)navigationListenerStopped:(MSPNavigationListener *)arg1;
- (void)navigationListenerArrived:(MSPNavigationListener *)arg1;
- (void)navigationListenerTrafficUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerRouteUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerETAUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerDestinationUpdated:(MSPNavigationListener *)arg1;
- (void)navigationListenerIsReady:(MSPNavigationListener *)arg1;
- (void)navigationListener:(MSPNavigationListener *)arg1 didFailWithError:(NSError *)arg2;
@end

