//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSSecureCoding>
{
    _Bool __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    double reactionTorque;
    struct CGVector reactionForce;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool _implicit; // @synthesize _implicit=__implicit;
@property(readonly, nonatomic) double reactionTorque; // @synthesize reactionTorque;
@property(readonly, nonatomic) struct CGVector reactionForce; // @synthesize reactionForce;
@property(retain, nonatomic) SKPhysicsBody *bodyB; // @synthesize bodyB;
@property(retain, nonatomic) SKPhysicsBody *bodyA; // @synthesize bodyA;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

