//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRInteractiveBarCompressionAnimating-Protocol.h"

@class UINavigationBar;

@interface FRForYouNavigationBarObscuringAnimation : NSObject <FRInteractiveBarCompressionAnimating>
{
    _Bool _titleViewUpdating;
    double _topOffset;
    UINavigationBar *_navigationBar;
    double _maximumBarHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumBarHeight; // @synthesize maximumBarHeight=_maximumBarHeight;
@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic, getter=isTitleViewUpdating) _Bool titleViewUpdating; // @synthesize titleViewUpdating=_titleViewUpdating;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(readonly, nonatomic) _Bool prefersCompressedStyling;
- (void)reloadWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) _Bool closeGapWhenCompressed;
@property(readonly, nonatomic) _Bool shouldCompressAtTop;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (void)updateWithPercentage:(double)arg1;
- (id)initWithNavigationBar:(id)arg1;

@end

