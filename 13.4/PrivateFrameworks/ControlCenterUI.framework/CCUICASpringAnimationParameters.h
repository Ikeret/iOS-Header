//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationParameters-Protocol.h>
#import <ControlCenterUI/NSMutableCopying-Protocol.h>

@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICASpringAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>
{
    double _mass;
    double _stiffness;
    double _damping;
    id <CCUIAnimationTimingFunctionDescription> _timingFunction;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) double damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(readonly, nonatomic) double mass; // @synthesize mass=_mass;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

