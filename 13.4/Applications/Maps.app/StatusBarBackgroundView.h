//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BlurredStatusBar, NSLayoutYAxisAnchor, StatusBarBackgroundViewStyle;

__attribute__((visibility("hidden")))
@interface StatusBarBackgroundView : UIView
{
    BlurredStatusBar *_blurredStatusBar;
    NSLayoutYAxisAnchor *_safeAreaTopLayoutAnchor;
    StatusBarBackgroundViewStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StatusBarBackgroundViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *safeAreaTopLayoutAnchor; // @synthesize safeAreaTopLayoutAnchor=_safeAreaTopLayoutAnchor;
- (void)_transparencyStatusDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithSafeAreaTopLayoutAnchor:(id)arg1;

@end

