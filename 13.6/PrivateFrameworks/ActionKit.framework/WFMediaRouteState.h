//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class MPAVRoute;

@interface WFMediaRouteState : WFVariableSubstitutableParameterState
{
    MPAVRoute *_route;
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (Class)processingValueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPAVRoute *route; // @synthesize route=_route;
- (id)initWithRoute:(id)arg1;

@end

