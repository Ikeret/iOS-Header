//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AKController, SSSScreenshot;

@protocol SSSScreenshotRepresentation
- (AKController *)screenshotRepresentationAKControllerForPDF;
- (void)screenshotShouldJumpToPDFPageIndex:(long long)arg1;
- (void)screenshotDidReceivePDFData;
- (void)screenshotDidRevert:(SSSScreenshot *)arg1;
- (void)screenshotDidHaveViewModificationInfoChanged:(SSSScreenshot *)arg1;
- (void)screenshotDidHaveUndoStackChanged:(SSSScreenshot *)arg1;
@end

