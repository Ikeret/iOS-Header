//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXVKExplorationGraphElement.h"

@class NSArray, VKRoadFeatureAccessibilityElement;

@interface AXVKExplorationEdgeElement : AXVKExplorationGraphElement
{
    VKRoadFeatureAccessibilityElement *_road;
    NSArray *_vertices;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *vertices; // @synthesize vertices=_vertices;
@property(retain, nonatomic) VKRoadFeatureAccessibilityElement *road; // @synthesize road=_road;
- (id)description;
- (id)initWithRoad:(id)arg1 betweenFirstVertex:(id)arg2 andSecondVertex:(id)arg3;

@end

