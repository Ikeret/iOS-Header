//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISwipeActionController.h>

#import <TeaUI/TSSwipeActionControllerType-Protocol.h>

@class NSIndexPath, NSString;

@interface UISwipeActionController (Tea) <TSSwipeActionControllerType>
@property(readonly, nonatomic) NSIndexPath *ts_swipedIndexPath;
- (void)ts_restoreSwipedIndexPath:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

