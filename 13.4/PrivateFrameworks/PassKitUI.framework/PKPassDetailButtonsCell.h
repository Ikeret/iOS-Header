//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell : PKTableViewCell
{
    PKPaymentPassActionWidgetView *_widgetView;
}

- (void).cxx_destruct;
- (void)setPeerPaymentAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 widgetViewStyle:(unsigned long long)arg2;

@end

