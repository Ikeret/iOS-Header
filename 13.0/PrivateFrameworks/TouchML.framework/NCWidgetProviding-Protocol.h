//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/NSObject-Protocol.h>

@protocol NCWidgetProviding <NSObject>

@optional
- (struct UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(struct UIEdgeInsets)arg1;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(unsigned long long))arg1;
@end

