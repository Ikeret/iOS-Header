//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MKViewWithHairline, NSString, UINavigationBar, UITableView;

__attribute__((visibility("hidden")))
@interface ExtensionModalTableViewController : ControlContaineeViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UINavigationBar *_navigationBar;
    MKViewWithHairline *_navigationBarContainerView;
}

@property(retain, nonatomic) MKViewWithHairline *navigationBarContainerView; // @synthesize navigationBarContainerView=_navigationBarContainerView;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)allowsQuickActionMenuInMap;
- (_Bool)allowsLongPressToMarkLocation;
- (void)viewDidLayoutSubviews;
- (void)setupConstraints;
- (void)initTableView;
- (void)initNavBar;
- (void)initNavBarContainer;
- (void)viewDidLoad;
- (_Bool)shouldAllowBlurToCardView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

