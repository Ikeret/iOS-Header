//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface COSPhoneView : UIView
{
    long long _style;
    UIImageView *_deviceImageView;
    UIImageView *_screenImageView;
    NSString *_screenImageName;
    UILabel *_internalErrorLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *internalErrorLabel; // @synthesize internalErrorLabel=_internalErrorLabel;
@property(copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;

@end

