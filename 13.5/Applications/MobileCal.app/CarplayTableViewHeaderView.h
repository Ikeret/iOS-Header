//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class CarplayTableViewHeaderContentView, NSString;

@interface CarplayTableViewHeaderView : UITableViewHeaderFooterView
{
    CarplayTableViewHeaderContentView *_contentView;
    NSString *_headerText;
}

+ (id)reuseIdentifier;
+ (double)height;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setFloating:(_Bool)arg1;

@end

