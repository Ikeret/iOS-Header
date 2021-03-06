//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARLightEstimate.h>

#import <ARKit/NSCopying-Protocol.h>

@class NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying>
{
    CDStruct_9c26ff66 _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
    double _primaryLightIntensity;
    double _timestamp;
    double _confidenceRating;
    // Error parsing type: , name: _primaryLightDirection
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double confidenceRating; // @synthesize confidenceRating=_confidenceRating;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double primaryLightIntensity; // @synthesize primaryLightIntensity=_primaryLightIntensity;
// Error parsing type for property primaryLightDirection:
// Property attributes: T,R,N,V_primaryLightDirection

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
-     // Error parsing type: @64@0:8{?=[3]}16, name: lightEstimateByApplyingRotation:
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)initWithSphericalHarmonics:(CDStruct_9c26ff66)arg1 ambientIntensity:(double)arg2 temperature:(double)arg3;

@end

