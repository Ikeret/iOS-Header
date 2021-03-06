//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/UITableViewDelegate-Protocol.h>

@class MusicTableView, UITableViewCell;

@protocol MusicTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableViewTintColorDidChange:(MusicTableView *)arg1;
- (_Bool)tableView:(MusicTableView *)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectAddButtonForCell:(UITableViewCell *)arg2 events:(unsigned long long)arg3;
- (void)tableView:(MusicTableView *)arg1 willSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 willDeselectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(MusicTableView *)arg1 didDeselectHeaderViewForSection:(long long)arg2;
- (void)tableViewInherritedLayoutInsetsDidChange:(MusicTableView *)arg1;
- (void)tableViewDidLayoutSubviews:(MusicTableView *)arg1;
@end

