//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol PUAlbumListTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface PUAlbumListTableViewCell : UITableViewCell
{
    id <PUAlbumListTableViewCellDelegate> _stateChangeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUAlbumListTableViewCellDelegate> stateChangeDelegate; // @synthesize stateChangeDelegate=_stateChangeDelegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end

