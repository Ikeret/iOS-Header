//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMSelfIdModelScore : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMSelfIdModelType_)arg2 result:(struct SGMTypeSafeBool_)arg3 supervision:(struct SGMSelfIdSupervisionType_)arg4 extractionModelVersion:(unsigned long long)arg5;
- (id)init;

@end

