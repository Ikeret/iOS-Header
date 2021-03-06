//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class MISSING_TYPE;

@interface NUCropModel : NSObject <NSCopying>
{
    MISSING_TYPE *_imageCenter;
    struct CGRect _cropRect;
    double _pitchRadians;
    double _yawRadians;
    double _rollRadians;
    double _fovRadians;
    _Bool _isAutoCrop;
    unsigned long long _hitVertexID;
    CDStruct_d58201db _aspectRatio;
    struct CGRect _masterImageRect;
    struct CGRect _stitchedImageRect;
}

+ (double)defaultFocalLength;
+ (CDStruct_912cb5d2)freeFormAspectRatio;
+ (CDStruct_14d5dc5e)_imageTransformFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect)arg4;
@property(nonatomic) _Bool isAutoCrop; // @synthesize isAutoCrop=_isAutoCrop;
@property(readonly) unsigned long long hitVertexID; // @synthesize hitVertexID=_hitVertexID;
@property(nonatomic) CDStruct_912cb5d2 aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) struct CGRect stitchedImageRect; // @synthesize stitchedImageRect=_stitchedImageRect;
@property(readonly, nonatomic) double fovRadians; // @synthesize fovRadians=_fovRadians;
@property(readonly, nonatomic) struct CGRect masterImageRect; // @synthesize masterImageRect=_masterImageRect;
@property(readonly, nonatomic) double rollDegreeUI;
@property(readonly, nonatomic) double yawDegreeUI;
@property(readonly, nonatomic) double pitchDegreeUI;
@property(nonatomic) double rollRadians;
@property(nonatomic) double yawRadians;
@property(nonatomic) double pitchRadians;
- (CDStruct_912cb5d2)originalAspectRatio;
- (_Bool)aspectRatioIsFreeForm;
- (_Bool)aspectRatioIsOriginal;
- (CDStruct_912cb5d2)_currentAspectRatio:(struct CGRect)arg1;
- (double)_currentAspectAsDouble:(struct CGRect)arg1;
- (void)makeCurrentFreeFormAspectFixed;
- (void)makeCurrentAspectRatioFreeForm;
- (unsigned long long)setAspectRatio:(CDStruct_912cb5d2)arg1 constrainCropRect:(struct CGRect)arg2 withTargetArea:(double)arg3;
- (unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1 strict:(_Bool)arg2 startRect:(struct CGRect)arg3;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1 strict:(_Bool)arg2;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1;
- (struct CGRect)getCropRectThatCompletelyContainsMasterImageForPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (struct CGRect)getCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 pitch:(double)arg3 yaw:(double)arg4 roll:(double)arg5 constrainWithAnchorPoint:(struct CGPoint)arg6 strict:(_Bool)arg7 aspectRatioIsFreeForm:(_Bool)arg8 hitVertexId:(unsigned long long *)arg9;
- (struct CGRect)_expandedCropRectForZoom:(struct CGRect)arg1 candidateRect:(struct CGRect)arg2;
- (unsigned long long)setForZoomCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2;
- (unsigned long long)setCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 constrainWithAnchorPoint:(struct CGPoint)arg3 strict:(_Bool)arg4;
- (unsigned long long)setCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 constrainWithAnchorPoint:(struct CGPoint)arg3;
- (unsigned long long)setCropRect:(struct CGRect)arg1 constrainWithAnchorPoint:(struct CGPoint)arg2;
- (_Bool)imageContainsRect:(struct CGRect)arg1 withTol:(double)arg2;
- (_Bool)canGrowCropRect:(struct CGRect)arg1 constrainWithAnchorPoint:(struct CGPoint)arg2 strict:(_Bool)arg3 withTol:(double)arg4;
- (struct CGRect)_anchorAlignedRectFromCandidate:(struct CGRect)arg1 withAnchor:(struct CGPoint)arg2;
- (void)_debugPrintHitMask:(unsigned long long)arg1;
- (void)_debugPrintHitMask;
- (unsigned long long)_hitMaskFromRect:(struct CGRect)arg1 withTol:(double)arg2;
- (unsigned long long)_hitMaskFromRect:(struct CGRect)arg1;
- (void)_setCropRectWithConstantSize:(struct CGRect)arg1;
- (void)_setCropRect:(struct CGRect)arg1 anchor:(struct CGPoint)arg2;
- (void)_setCropRect:(struct CGRect)arg1;
@property struct CGRect cropRect;
- (struct CGRect)_integralCropRect:(struct CGRect)arg1 straightenAngle:(double)arg2 anchorPoint:(struct CGPoint)arg3;
- (struct CGRect)integralCropRect:(struct CGRect)arg1;
- (CDStruct_14d5dc5e)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 imageRect:(struct CGRect)arg5;
- (CDStruct_14d5dc5e)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4;
- (struct Quad2d)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect)arg4;
- (struct Quad2d)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (struct Quad2d)_getBoundingQuad;
- (_Bool)_hasDefaultValues;
- (void)_setToDefaultValues;
- (struct CGRect)_defaultCropRect;
- (MISSING_TYPE *)_defaultImageCenter;
- (struct CGRect)_widestCropRect;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCropModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize stitchedImageSize;
@property(readonly) _Bool cropNeedsOvercapture;
@property(readonly, nonatomic) _Bool hasOvercapture;
@property(readonly, nonatomic) struct CGSize masterImageSize;
@property(readonly) _Bool hasCrop;
- (void)reset;
- (id)copyWithMasterImageSize:(struct CGSize)arg1 fovRadians:(double)arg2;
- (id)initWithMasterImageRect:(struct CGRect)arg1 stitchedImageRect:(struct CGRect)arg2;
- (id)initWithMasterImageSize:(struct CGSize)arg1 stitchedImageSize:(struct CGSize)arg2;
- (id)initWithMasterImageSize:(struct CGSize)arg1 fovRadians:(double)arg2;
- (id)initWithMasterImageRect:(struct CGRect)arg1;
- (id)initWithMasterImageSize:(struct CGSize)arg1;
- (id)init;

@end

