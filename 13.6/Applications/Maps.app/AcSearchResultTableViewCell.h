//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SearchResultTableViewCell.h"

#import "ChildItemButtonDelegate-Protocol.h"

@class ChildItemsViewModel, MKLocalSearchCompletion, NSArray, NSString, UIImageView, _SearchResultChildItemGridView;
@protocol AcSearchResultTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface AcSearchResultTableViewCell : _SearchResultTableViewCell <ChildItemButtonDelegate>
{
    MKLocalSearchCompletion *_completion;
    UIImageView *_imageView;
    int _imageState;
    NSArray *_childItemButtons;
    _SearchResultChildItemGridView *_childItemGrid;
    id _object;
    id <AcSearchResultTableViewCellDelegate> _delegate;
    long long _autocompleteCellType;
    long long _autocompleteClientSourceType;
    ChildItemsViewModel *_childItemsViewModel;
}

+ (id)identifierWithChildItemsCount:(unsigned long long)arg1;
+ (double)childItemRowSpacing;
- (void).cxx_destruct;
@property(retain, nonatomic) ChildItemsViewModel *childItemsViewModel; // @synthesize childItemsViewModel=_childItemsViewModel;
@property(nonatomic) long long autocompleteClientSourceType; // @synthesize autocompleteClientSourceType=_autocompleteClientSourceType;
@property(nonatomic) long long autocompleteCellType; // @synthesize autocompleteCellType=_autocompleteCellType;
@property(nonatomic) __weak id <AcSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)didTapChildItemButtonForChildItem:(id)arg1;
- (void)removeTransitLabel;
- (void)addTransitLabel;
- (void)prepareForReuse;
- (_Bool)supportsClientServerDifferentiation;
- (_Bool)wantsTwoLineLayout;
- (id)autocompleteClientSourceString;
- (void)updateChildItems;
- (void)loadPhoto;
- (void)updateContent;
- (void)updateThirdLineVisibility;
- (void)didUpdateMapItem;
- (id)attributedSubtitleString;
- (id)attributedSecondPartDetailString;
- (id)attributedFirstPartDetailString;
- (id)attributedTitleString;
- (_Bool)isCompletionTypeAddress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateChildItemGridAlignmentRectInset;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)estimatedChildItemsStackViewWidthWithContentViewWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

