//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HistoryTableViewController, _SFNavigationIntent;

@protocol HistoryTableViewControllerDelegate <NSObject>
- (void)historyTableViewControllerDidDismissPopover:(HistoryTableViewController *)arg1;
- (void)historyTableViewControllerDidPresentPopover:(HistoryTableViewController *)arg1;
- (void)historyTableViewControllerDidEndEditing:(HistoryTableViewController *)arg1;
- (void)historyTableViewControllerDidBeginEditing:(HistoryTableViewController *)arg1;
- (void)historyTableViewController:(HistoryTableViewController *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
@end

