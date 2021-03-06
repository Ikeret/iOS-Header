//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class PDFPage, PDFView;

@interface AXPDFNodeElement : UIAccessibilityElement
{
    PDFView *_pdfView;
    _Bool _didDetermineLastNodeStatus;
    _Bool _isLastNodeInPage;
    PDFPage *_page;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PDFPage *page; // @synthesize page=_page;
@property(nonatomic) _Bool isLastNodeInPage; // @synthesize isLastNodeInPage=_isLastNodeInPage;
@property(nonatomic) _Bool didDetermineLastNodeStatus; // @synthesize didDetermineLastNodeStatus=_didDetermineLastNodeStatus;
- (struct CGRect)axConvertBoundsFromPageToScreenCoordinates:(struct CGRect)arg1;
- (_Bool)_accessibilityIncludeDuringContentReading;
- (_Bool)pdfViewRequiresPageTurning;
- (id)pdfView;
- (id)initWithAccessibilityContainer:(id)arg1 withPage:(id)arg2;

@end

