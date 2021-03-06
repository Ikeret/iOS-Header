//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DragAndDropPreviewContentUpdateDelegate-Protocol.h"

@class DragAndDropMapItem, DragAndDropPreview, UIImageView;

__attribute__((visibility("hidden")))
@interface PreviewViewController : UIViewController <DragAndDropPreviewContentUpdateDelegate>
{
    DragAndDropMapItem *_dragItem;
    DragAndDropPreview *_previewView;
    UIImageView *_imageSourceView;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updatePreview;
- (void)setLabelMarker:(id)arg1 searchresult:(id)arg2 mapView:(id)arg3;
- (void)dragAndDropPreviewDidUpdate:(id)arg1;
- (void)viewDidLoad;

@end

