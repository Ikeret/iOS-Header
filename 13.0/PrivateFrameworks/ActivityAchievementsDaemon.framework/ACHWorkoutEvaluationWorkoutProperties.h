//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACHWorkoutEvaluationWorkoutProperties : NSObject
{
    _Bool _isFirstParty;
    unsigned long long _type;
    double _duration;
    double _kilocalories;
    double _kilometers;
}

@property(readonly, nonatomic) _Bool isFirstParty; // @synthesize isFirstParty=_isFirstParty;
@property(readonly, nonatomic) double kilometers; // @synthesize kilometers=_kilometers;
@property(readonly, nonatomic) double kilocalories; // @synthesize kilocalories=_kilocalories;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithWorkout:(id)arg1;

@end

