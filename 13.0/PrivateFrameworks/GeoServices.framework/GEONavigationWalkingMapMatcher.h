//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher
{
    unsigned long long _numProgressionsOffRoute;
}

- (id)_routeMatcherForRoute:(id)arg1;
- (int)transportType;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;

@end

