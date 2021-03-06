//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, RAPPhotoCarouselViewModel, UICollectionView;

__attribute__((visibility("hidden")))
@interface RAPPhotoCarouselTableViewCell : UITableViewCell
{
    NSArray *_constraints;
    NSLayoutConstraint *_heightConstraint;
    RAPPhotoCarouselViewModel *_viewModel;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) RAPPhotoCarouselViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

