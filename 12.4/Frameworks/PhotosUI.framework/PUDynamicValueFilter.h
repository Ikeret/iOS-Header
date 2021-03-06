//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@interface PUDynamicValueFilter : PUValueFilter
{
    double _targetValue;
    double _currentTime;
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;
- (void)_update;
- (double)outputValueChangeRate;
- (double)outputValue;
- (void)setInputValue:(double)arg1;
- (id)init;

@end

