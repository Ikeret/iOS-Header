//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NULayoutResolver : NSObject
{
    struct NULayoutOptions _options;
}

@property(readonly, nonatomic) struct NULayoutOptions options; // @synthesize options=_options;
- (id)adjustedComponentsForComponents:(id)arg1 options:(struct NULayoutOptions)arg2;
- (struct UIEdgeInsets)adjustedEdgeInsetsForOptions:(struct NULayoutOptions)arg1;
- (void)layoutComponents:(id)arg1 inBounds:(struct CGRect)arg2 originOffset:(struct CGPoint)arg3 layoutContext:(id)arg4;
- (id)initWithOptions:(struct NULayoutOptions)arg1;

@end

