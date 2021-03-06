//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKRotationConstraint : SKConstraint
{
    SKRange *_zRotationRange;
}

+ (id)constraintWithZRotationRange:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) SKRange *zRotationRange; // @synthesize zRotationRange=_zRotationRange;
- (_Bool)isEqualToRotationConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZRotationRange:(id)arg1;

@end

