//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/UIPDFSelectionWidget-Protocol.h>

@class CALayer, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget>
{
    CALayer *_startSelectionGrabber;
    CALayer *_startBar;
    CALayer *_endSelectionGrabber;
    CALayer *_endBar;
    CALayer *_startHandle;
    CALayer *_endHandle;
    CALayer *_fixedSelectionGrabber;
    UIPDFPageView *_pageView;
    double _handleHeight;
    double _handleWidth;
    struct CGPoint _initialSelectionPointOnPage;
    double _offsetX;
    double _offsetY;
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    struct CGColor *_grabberColor;
    long long _startRectangle;
    long long _endRectangle;
    _Bool _startLeft;
    _Bool _endRight;
    double _startX;
    double _endX;
}

@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage; // @synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
- (id)description;
- (void)hide;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
- (struct CGRect)selectionRectangle;
- (void)endTracking;
- (void)track:(struct CGPoint)arg1;
- (void)layout;
- (struct CGPoint)viewOffset;
- (_Bool)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(_Bool *)arg3;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (void)remove;
- (void)setSelection:(id)arg1;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (void)layoutWidget;
- (void)layoutEndSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize)arg5;
- (void)layoutStartSelectionGrabber:(struct CGRect)arg1 transform:(struct CGAffineTransform *)arg2 width:(double)arg3 extraHeight:(double)arg4 unitSize:(struct CGSize)arg5;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)dealloc;
- (id)init;

@end

