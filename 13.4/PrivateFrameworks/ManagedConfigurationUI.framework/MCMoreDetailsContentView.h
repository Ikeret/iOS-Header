//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface MCMoreDetailsContentView : UIView
{
    UILabel *_title;
    UILabel *_subtitle1;
    UILabel *_subtitle2;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCertificate:(struct __SecCertificate *)arg1;
- (void)setPayload:(id)arg1;
- (id)_textForLabel:(id)arg1 value:(id)arg2;
- (void)setSubtitle2Text:(id)arg1;
- (void)setSubtitle1Text:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end

