//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

@protocol RecentlyClosedTabViewControllerDelegate;

@interface RecentlyClosedTabViewController : _SFPopoverSizingTableViewController
{
    id <RecentlyClosedTabViewControllerDelegate> _recentTabsDelegate;
}

+ (id)tableViewCellForSizeEstimation;
@property(nonatomic) __weak id <RecentlyClosedTabViewControllerDelegate> recentTabsDelegate; // @synthesize recentTabsDelegate=_recentTabsDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)recentlyClosedTabs;
- (void)doneButtonTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)removeAllRecentlyClosedTabDocuments;
- (void)addRecentlyClosedTabDocument:(id)arg1;
- (id)initWithStyle:(long long)arg1;

@end

