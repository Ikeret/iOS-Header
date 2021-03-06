//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PersonalizedMapsAutocompleteViewController.h"

#import "PersonalizedMapsPlaceViewControllerDelegate-Protocol.h"

@class NSString;
@protocol FavoritesAutocompleteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FavoritesAutocompleteViewController : PersonalizedMapsAutocompleteViewController <PersonalizedMapsPlaceViewControllerDelegate>
{
    id <FavoritesAutocompleteViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)placeViewAnalyticTarget;
- (void)dismissAfterSavingMapItem:(id)arg1 title:(id)arg2;
- (void)personalizedMapsPlaceViewController:(id)arg1 actionButtonTappedForMapItem:(id)arg2;
@property(readonly, copy, nonatomic) NSString *actionButtonTitle;
- (int)backAction;
- (int)analyticTarget;
- (void)selectedMapItem:(id)arg1;
- (void)searchFieldTextDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMapRegion:(id)arg1;

@end

