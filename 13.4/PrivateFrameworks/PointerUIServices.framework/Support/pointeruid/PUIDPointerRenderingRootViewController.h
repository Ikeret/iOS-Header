//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PUIDPointerShapeViewDelegate-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString, PSMatchMoveSource, PSPointerPortalSourceCollection, PUIDPointerSettings, PUIDPointerShapeView, PUIDPointerState, UIColor, UIImageView, UIView, UIViewFloatAnimatableProperty;

@interface PUIDPointerRenderingRootViewController : UIViewController <PUIDPointerShapeViewDelegate>
{
    long long _overlayEffectStyle;
    NSMapTable *_pointerClientToSourceContainerMap;
    PUIDPointerState *_pointerState;
    NSMutableDictionary *_matchMoveSourceToView;
    NSMutableDictionary *_portalSourceToView;
    PSMatchMoveSource *_previousContentMatchMoveSource;
    PSPointerPortalSourceCollection *_previousPointerPortalSourceCollection;
    UIView *_pointerRootView;
    PUIDPointerShapeView *_pointerShapeView;
    UIView *_pointerBackgroundSamplingSourceView;
    UIColor *_defaultBackgroundColor;
    UIViewFloatAnimatableProperty *_rampingXProperty;
    UIViewFloatAnimatableProperty *_rampingYProperty;
    UIViewFloatAnimatableProperty *_pointerShapePositionXProperty;
    UIViewFloatAnimatableProperty *_pointerShapePositionYProperty;
    PUIDPointerSettings *_settings;
    UIImageView *_specularImageView;
    PUIDPointerShapeView *_specularEffectMaskPointerShapeView;
    UIView *_specularEffectRootView;
    long long _visibilityState;
}

- (void).cxx_destruct;
- (void)_transitionFromPointerPortalSourceView:(id)arg1 toPointerPortalSourceView:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGPoint)_positionForTargetWithCenter:(struct CGPoint)arg1 modelCursorPosition:(struct CGPoint)arg2 slip:(struct CGPoint)arg3;
- (id)_createPortalSourceViewWithFrame:(struct CGRect)arg1;
- (struct CGRect)_samplingBoundsForPointerShape:(id)arg1;
- (id)_createMatchMoveSourceView;
- (id)_relativePositionAnimationSettingsUsingSystemPointerPositionSettings:(id)arg1 forTextContent:(_Bool)arg2;
- (void)_updateRampingPropertiesForPointerSlip:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (struct CATransform3D)transformToLocalWindowForCoordinateSpaceTransformToDisplay:(struct CATransform3D)arg1;
- (void)_updatePointerWithOptions:(unsigned long long)arg1 updateHandlerCollection:(id)arg2;
- (void)setPointerState:(id)arg1 options:(unsigned long long)arg2 updateHandlerCollection:(id)arg3;
- (void)invalidateEffectSourcesForPointerClient:(id)arg1;
- (void)invalidateContentMatchMoveSource:(id)arg1 forClient:(id)arg2;
- (id)createContentMatchMoveSourceForClient:(id)arg1;
- (_Bool)isValidPointerPortalSourceCollection:(id)arg1 forClient:(id)arg2;
- (void)invalidatePointerPortalSourceCollection:(id)arg1 forClient:(id)arg2;
- (id)createPointerPortalSourceCollectionForClient:(id)arg1;
- (void)pointerShapeViewExpectedSizeParametersDidChange:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

