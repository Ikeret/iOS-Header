//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridActionSetListViewController.h>

@class HFMutableSetDiff;
@protocol HUSelectableGridActionSetListViewControllerDelegate;

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController
{
    id <HUSelectableGridActionSetListViewControllerDelegate> _delegate;
    HFMutableSetDiff *_mutableSelectedActionSets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFMutableSetDiff *mutableSelectedActionSets; // @synthesize mutableSelectedActionSets=_mutableSelectedActionSets;
@property(nonatomic) __weak id <HUSelectableGridActionSetListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateSelectionState:(_Bool)arg1 forCell:(id)arg2;
- (void)_selectedItemStateChanged:(id)arg1 isSelected:(_Bool)arg2 accessoryViewCell:(id)arg3;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)selectedActionSetStateChanged:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2;
- (id)init;

@end

