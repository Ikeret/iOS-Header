//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUILeadingViewController.h>

#import <SearchUI/SearchUIHomeScreenEngagementDelegate-Protocol.h>

@class NSString, SearchUIHomeScreenAppIconView;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>
{
}

+ (_Bool)supportsRowModel:(id)arg1;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;
- (void)dismissIfNecessaryForIconDrag;
- (void)didEngageResult:(id)arg1;
- (_Bool)shouldVerticallyCenter;
- (id)setupView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SearchUIHomeScreenAppIconView *view; // @dynamic view;

@end

