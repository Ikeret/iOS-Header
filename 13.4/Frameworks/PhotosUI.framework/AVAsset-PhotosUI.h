//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class NSValue;

@interface AVAsset (PhotosUI)
- (void)pu_loadDurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)pu_duration;
@property(readonly, nonatomic) NSValue *pu_cachedDuration;
- (void)_pu_setCachedDuration:(id)arg1;
- (id)pu_vitalityVideoComposition;
-     // Error parsing type: {?=[3]}88@0:8{?=[3]}16@64{CGSize=dd}72, name: pu_perspectiveTransform:rescaledForMetadata:currentAssetDimensions:
-     // Error parsing type: {?=[3]}24@0:8@16, name: pu_perspectiveTransformForMetadata:
- (struct TransformMetadataItemPair)pu_stillAssetTransformMetadataPair;
- (id)pu_stillImageTransformAssetTrack;
@property(readonly, nonatomic) _Bool pu_supportsVitality;
@end

