//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNeuronNode : MPSNNFilterNode
{
    int _type;
    float _a;
    float _b;
    float _c;
}

+ (id)nodeWithSource:(id)arg1 descriptor:(id)arg2;
@property(readonly, nonatomic) float c; // @synthesize c=_c;
@property(readonly, nonatomic) float b; // @synthesize b=_b;
@property(readonly, nonatomic) float a; // @synthesize a=_a;
- (struct FilterGraphNode *)newFilterNode;
- (id)descriptor;
- (Class)gradientClass;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithSource:(id)arg1 type:(int)arg2 a:(float)arg3 b:(float)arg4 c:(float)arg5;

@end

