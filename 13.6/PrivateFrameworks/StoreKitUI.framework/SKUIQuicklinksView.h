//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksView : UIView
{
    UIView *_borderView;
    UIView *_collectionView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *collectionView; // @synthesize collectionView=_collectionView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

