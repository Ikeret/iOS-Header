//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DSceneObject.h>

@interface TSCH3DChartStageSceneObject : TSCH3DSceneObject
{
    TSCH3DSceneObject *mMain;
}

+ (id)objectWithMain:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)render:(id)arg1;
- (void)render:(id)arg1 selector:(SEL)arg2;
- (void)prerender:(id)arg1;
- (void)dealloc;
- (id)initWithMain:(id)arg1;

@end

