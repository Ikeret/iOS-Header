//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface OBBulletedList : UIView
{
    NSMutableArray *_items;
    NSMutableArray *_verticalConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)_updateConstraints;
- (double)bulletedListItemSpacing;
- (void)addBulletedListItem:(id)arg1;
- (void)addItemWithDescription:(id)arg1 image:(id)arg2;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

