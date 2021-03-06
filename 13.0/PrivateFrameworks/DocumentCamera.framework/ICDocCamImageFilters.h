//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDocCamImageFilters : NSObject
{
}

+ (struct UIImage *)perspectiveCorrectedImageFromImage:(struct UIImage *)arg1 normalizedImageQuad:(id)arg2;
+ (struct UIImage *)perspectiveCorrectedImageFromImage:(struct UIImage *)arg1 imageQuad:(id)arg2;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2;
+ (struct UIImage *)imageWithRGBColorspaceFromImage:(struct UIImage *)arg1;
+ (struct UIImage *)filteredImage:(struct UIImage *)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3;
+ (struct UIImage *)filteredImage:(struct UIImage *)arg1 imageFilterType:(short)arg2;
+ (struct UIImage *)grayscaleDocument:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)colorDocument:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)bradleyAdaptiveThresholdWithBlur:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)bradleyAdaptiveThreshold:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)grayscale:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)whiteboardAndSaturation:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)whiteboardFilter:(struct UIImage *)arg1 orientation:(long long)arg2;
+ (struct UIImage *)convertImageToGrayScale:(struct UIImage *)arg1;
+ (struct UIImage *)bradleyAdaptiveThreshold:(struct UIImage *)arg1;
+ (id)sharedCoreImageContext;
+ (id)nonLocalizedImageFilterNameForType:(short)arg1;
+ (id)localizedImageFilterNameForType:(short)arg1;
+ (id)localizedImageFilterNameForName:(id)arg1;
+ (short)imageFilterTypeFromNonLocalizedName:(id)arg1;
+ (short)imageFilterTypeFromName:(id)arg1;
+ (id)nonLocalizedImageFilterNames;
+ (id)imageFilterNames;

@end

