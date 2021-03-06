//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSLayoutConstraint, STUsageReport;

@interface STWeeklyReportViewController : UITableViewController
{
    STUsageReport *_report;
    NSArray *_tableViewCells;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSArray *tableViewCells; // @synthesize tableViewCells=_tableViewCells;
@property(readonly, nonatomic) STUsageReport *report; // @synthesize report=_report;
- (void)_heightDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUsageReport:(id)arg1;
- (id)initWithData:(id)arg1;

@end

