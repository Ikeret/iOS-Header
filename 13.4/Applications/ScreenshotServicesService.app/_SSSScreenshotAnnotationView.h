//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSSScreenshot, _SSSScreenshotContentOverlayController, _SSSScreenshotFullsizeStaticImageView;

@interface _SSSScreenshotAnnotationView : UIView
{
    _Bool _screenshotEditsSnapshotted;
    _SSSScreenshotContentOverlayController *_overlayController;
    SSSScreenshot *_screenshot;
    UIView *_annotationOverlayView;
    _SSSScreenshotFullsizeStaticImageView *_cachedOutputImageView;
    UIView *_vellumView;
    double _vellumOpacity;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double vellumOpacity; // @synthesize vellumOpacity=_vellumOpacity;
@property(retain, nonatomic) UIView *vellumView; // @synthesize vellumView=_vellumView;
@property(retain, nonatomic) _SSSScreenshotFullsizeStaticImageView *cachedOutputImageView; // @synthesize cachedOutputImageView=_cachedOutputImageView;
@property(nonatomic) _Bool screenshotEditsSnapshotted; // @synthesize screenshotEditsSnapshotted=_screenshotEditsSnapshotted;
@property(retain, nonatomic) UIView *annotationOverlayView; // @synthesize annotationOverlayView=_annotationOverlayView;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
@property(readonly, nonatomic) _SSSScreenshotContentOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)_hideAndShowViewsForScreenshotEditsSnapshotted:(_Bool)arg1;
- (void)_updateOverlayControllerForBeingActiveForScreenshotEditsSnapshotted:(_Bool)arg1;
- (void)_cancelScheduledHideCachedOverlayView;
- (void)_scheduleHideCachedOverlayViewWithDelay:(double)arg1;
- (void)_asyncHideCachedOverlayView;
- (void)setOverlayControllerActive:(_Bool)arg1;
- (void)endedEditing;
- (void)enterEditing;
- (void)setRulerHostView:(id)arg1;
- (void)setGesturesEnabled:(_Bool)arg1;
- (void)updateUndoState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

