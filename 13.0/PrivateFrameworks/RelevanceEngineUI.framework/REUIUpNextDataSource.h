//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngineUI/UICollectionViewDataSource-Protocol.h>
#import <RelevanceEngineUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSString, RERelevanceEngine, REUIRelevanceEngineController;
@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIUpNextDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource>
{
    REUIRelevanceEngineController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <REUIRelevanceEngineControllerDelegate> delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) NSArray *sectionOrder;
@property(readonly, nonatomic) RERelevanceEngine *relevanceEngine;
- (id)_sectionTitleAtIndex:(unsigned long long)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

