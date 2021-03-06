//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SearchResultMapItemBase.h"

__attribute__((visibility("hidden")))
@interface RouteStartEndItem : SearchResultMapItemBase
{
    int _routeFeatureType;
    _Bool _showSubtitle;
}

- (_Bool)isRouteStartOrEnd;
- (id)styleAttributes;
- (id)subtitle;
- (id)title;
- (id)initWithSearchResult:(id)arg1 routeFeatureType:(int)arg2 showSubtitle:(_Bool)arg3;
- (id)initWithSearchResult:(id)arg1;
- (id)init;

@end

