//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class MKMapSnapshotter;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotView : UIImageView
{
    MKMapSnapshotter *_snapshotter;
    MKMapSnapshotter *_gridSnapshotter;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

