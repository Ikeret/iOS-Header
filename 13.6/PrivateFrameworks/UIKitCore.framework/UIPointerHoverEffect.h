//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPointerEffect.h>

@interface UIPointerHoverEffect : UIPointerEffect
{
    _Bool _prefersShadow;
    _Bool _prefersScaledContent;
    _Bool _tintViewTakesOnPointerShape;
    long long _preferredTintMode;
}

@property(nonatomic) _Bool tintViewTakesOnPointerShape; // @synthesize tintViewTakesOnPointerShape=_tintViewTakesOnPointerShape;
@property(nonatomic) _Bool prefersScaledContent; // @synthesize prefersScaledContent=_prefersScaledContent;
@property(nonatomic) _Bool prefersShadow; // @synthesize prefersShadow=_prefersShadow;
@property(nonatomic) long long preferredTintMode; // @synthesize preferredTintMode=_preferredTintMode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)settings;
- (unsigned long long)constrainedAxes;
- (unsigned long long)options;
- (id)init;

@end

